#include <qsqldriverplugin.h>
#include <qstringlist.h>
#include "qsql_odbc_p.h"

#include "qsqlodbc_main.h"

QT_BEGIN_NAMESPACE


QODBCDriverPlugin::QODBCDriverPlugin()
    : QSqlDriverPlugin()
{
}

QSqlDriver* QODBCDriverPlugin::create(const QString &name)
{
    if (name == QLatin1String("QODBC") || name == QLatin1String("QODBC3")) {
        QODBCDriver* driver = new QODBCDriver();
        return driver;
    }
    return 0;
}

QT_END_NAMESPACE

//#include "moc_qsqlodbc_main.cpp"
