#pragma once


#include <QtCore/qabstractanimation.h>
#include <QtCore/qdir.h>
#include <QtCore/qmath.h>
#include <QtCore/qdatetime.h>
#include <QtCore/qpointer.h>
#include <QtCore/qscopedpointer.h>
#include <QtCore/qtextstream.h>
#include <QtCore/qregexp.h>

#include <QtGui/QGuiApplication>
#include <QtGui/QOpenGLFunctions>

#include <QtQml/qqml.h>
#include <QtQml/qqmlengine.h>
#include <QtQml/qqmlcomponent.h>
#include <QtQml/qqmlcontext.h>

#include <QtQuick/qquickitem.h>
#include <QtQuick/qquickview.h>

#include <private/qabstractanimation_p.h>
#include <private/qopenglcontext_p.h>

#ifdef QT_WIDGETS_LIB
#include <QtWidgets/QApplication>
#include <QtWidgets/QFileDialog>
#endif

#include <QtCore/QTranslator>
#include <QtCore/QLibraryInfo>

#if QT_CONFIG(opengl)
// Listen on GL context creation of the QQuickWindow in order to print diagnostic output.
class DiagnosticGlContextCreationListener : public QObject {
    Q_OBJECT
public:
    explicit DiagnosticGlContextCreationListener(QQuickWindow *window) : QObject(window)
    {
        connect(window, &QQuickWindow::openglContextCreated,
                this, &DiagnosticGlContextCreationListener::onOpenGlContextCreated);
    }

private slots:
    void onOpenGlContextCreated(QOpenGLContext *context)
    {
        context->makeCurrent(qobject_cast<QQuickWindow *>(parent()));
        QOpenGLFunctions functions(context);
        QByteArray output = "Vendor  : ";
        output += reinterpret_cast<const char *>(functions.glGetString(GL_VENDOR));
        output += "\nRenderer: ";
        output += reinterpret_cast<const char *>(functions.glGetString(GL_RENDERER));
        output += "\nVersion : ";
        output += reinterpret_cast<const char *>(functions.glGetString(GL_VERSION));
        output += "\nLanguage: ";
        output += reinterpret_cast<const char *>(functions.glGetString(GL_SHADING_LANGUAGE_VERSION));
        puts(output.constData());
        context->doneCurrent();
        deleteLater();
    }

};
#endif
