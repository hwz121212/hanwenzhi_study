#pragma once

#include "conf.h"

#include <QCoreApplication>

#ifdef QT_GUI_LIB
#include <QGuiApplication>
#include <QWindow>
#include <QFileOpenEvent>
#include <QOpenGLContext>
#include <QOpenGLFunctions>
#ifdef QT_WIDGETS_LIB
#include <QApplication>
#endif // QT_WIDGETS_LIB
#endif // QT_GUI_LIB

#include <QQmlApplicationEngine>
#include <QQmlComponent>
#include <QDir>
#include <QFile>
#include <QFileInfo>
#include <QStringList>
#include <QScopedPointer>
#include <QDebug>
#include <QStandardPaths>
#include <QTranslator>
#include <QtGlobal>
#include <QLibraryInfo>
#include <qqml.h>
#include <qqmldebug.h>
#if QT_CONFIG(animation)
#include <private/qabstractanimation_p.h>
#endif

#include <cstdio>
#include <cstring>
#include <cstdlib>

#define VERSION_MAJ 1
#define VERSION_MIN 1
#define VERSION_STR "1.1"

#define FILE_OPEN_EVENT_WAIT_TIME 3000 // ms

static Config *conf = 0;
static QQmlApplicationEngine *qae = 0;
#if defined(Q_OS_DARWIN) || defined(QT_GUI_LIB)
static int exitTimerId = -1;
#endif


static void loadConf(const QString &override, bool quiet) // Terminates app on failure
{
    const QString defaultFileName = QLatin1String("configuration.qml");
    QUrl settingsUrl;
    bool builtIn = false; //just for keeping track of the warning
    if (override.isEmpty()) {
        QFileInfo fi;
        fi.setFile(QStandardPaths::locate(QStandardPaths::DataLocation, defaultFileName));
        if (fi.exists()) {
            settingsUrl = QUrl::fromLocalFile(fi.absoluteFilePath());
        } else {
            // ### If different built-in configs are needed per-platform, just apply QFileSelector to the qrc conf.qml path
            settingsUrl = QUrl(QLatin1String("qrc:///qt-project.org/QmlRuntime/conf/") + defaultFileName);
            builtIn = true;
        }
    } else {
        QFileInfo fi;
        fi.setFile(override);
        if (!fi.exists()) {
            printf("qml: Couldn't find required configuration file: %s\n",
                    qPrintable(QDir::toNativeSeparators(fi.absoluteFilePath())));
            exit(1);
        }
        settingsUrl = QUrl::fromLocalFile(fi.absoluteFilePath());
    }

    if (!quiet) {
        printf("qml: %s\n", QLibraryInfo::build());
        if (builtIn)
            printf("qml: Using built-in configuration.\n");
        else
            printf("qml: Using configuration file: %s\n",
                    qPrintable(settingsUrl.isLocalFile()
                    ? QDir::toNativeSeparators(settingsUrl.toLocalFile())
                    : settingsUrl.toString()));
    }

    // TODO: When we have better engine control, ban QtQuick* imports on this engine
    QQmlEngine e2;
    QQmlComponent c2(&e2, settingsUrl);
    conf = qobject_cast<Config*>(c2.create());

    if (!conf){
        printf("qml: Error loading configuration file: %s\n", qPrintable(c2.errorString()));
        exit(1);
    }
}

#ifdef QT_GUI_LIB

void noFilesGiven();

// Loads qml after receiving a QFileOpenEvent
class LoaderApplication : public QGuiApplication
{
public:
    LoaderApplication(int& argc, char **argv) : QGuiApplication(argc, argv) {}

    bool event(QEvent *ev)
    {
        if (ev->type() == QEvent::FileOpen) {
            if (exitTimerId >= 0) {
                killTimer(exitTimerId);
                exitTimerId = -1;
            }
            qae->load(static_cast<QFileOpenEvent *>(ev)->url());
        }
        else
            return QGuiApplication::event(ev);
        return true;
    }

    void timerEvent(QTimerEvent *) {
        noFilesGiven();
    }
};

#endif // QT_GUI_LIB

// Listens to the appEngine signals to determine if all files failed to load
class LoadWatcher : public QObject
{
    Q_OBJECT
public:
    LoadWatcher(QQmlApplicationEngine *e, int expected)
        : QObject(e)
        , earlyExit(false)
        , returnCode(0)
        , expect(expected)
        , haveOne(false)
    {
        connect(e, SIGNAL(objectCreated(QObject*,QUrl)),
            this, SLOT(checkFinished(QObject*)));
        // QQmlApplicationEngine also connects quit() to QCoreApplication::quit
        // and exit() to QCoreApplication::exit but if called before exec()
        // then QCoreApplication::quit or QCoreApplication::exit does nothing
        connect(e, SIGNAL(quit()),
            this, SLOT(quit()));
        connect(e, &QQmlEngine::exit,
            this, &LoadWatcher::exit);
    }

    bool earlyExit;
    int returnCode;

private:
    void contain(QObject *o, const QUrl &containPath);
    void checkForWindow(QObject *o);

    int expect;
    bool haveOne;

public Q_SLOTS:
    void checkFinished(QObject *o)
    {
        if (o) {
            checkForWindow(o);
            haveOne = true;
            if (conf && qae)
                for (PartialScene *ps : qAsConst(conf->completers))
                    if (o->inherits(ps->itemType().toUtf8().constData()))
                        contain(o, ps->container());
        }
        if (haveOne)
            return;

        if (! --expect) {
            printf("qml: Did not load any objects, exiting.\n");
            std::exit(2);//Different return code from qFatal
        }
    }

    void quit() {
        //Will be checked before calling exec()
        earlyExit = true;
        returnCode = 0;
    }
    void exit(int retCode) {
        earlyExit = true;
        returnCode = retCode;
    }

#if defined(QT_GUI_LIB) && QT_CONFIG(opengl)
    void onOpenGlContextCreated(QOpenGLContext *context);
#endif
};
