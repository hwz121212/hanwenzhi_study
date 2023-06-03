#define Q_UUIDIMPL
#include <qsqldriverplugin.h>
#include <qstringlist.h>
#ifdef Q_OS_WIN32    // We assume that MS SQL Server is used. Set Q_USE_SYBASE to force Sybase.
// Conflicting declarations of LPCBYTE in sqlfront.h and winscard.h
#define _WINSCARD_H_
#include <windows.h>
#endif
#include "qsql_tds_p.h"

#include "qsqltds_main.h"

QT_BEGIN_NAMESPACE


QTDSDriverPlugin::QTDSDriverPlugin()
    : QSqlDriverPlugin()
{
}

QSqlDriver* QTDSDriverPlugin::create(const QString &name)
{
    if (name == QLatin1String("QTDS") || name == QLatin1String("QTDS7")) {
        QTDSDriver* driver = new QTDSDriver();
        return driver;
    }
    return 0;
}

QT_END_NAMESPACE

//#include "moc_qsqltds_main.cpp"
