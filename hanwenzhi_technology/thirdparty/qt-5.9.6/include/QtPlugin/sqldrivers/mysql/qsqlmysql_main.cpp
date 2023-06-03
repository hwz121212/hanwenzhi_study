#include <qsqldriverplugin.h>
#include <qstringlist.h>
#include "qsql_mysql_p.h"

#include "qsqlmysql_main.h"

QT_BEGIN_NAMESPACE


QMYSQLDriverPlugin::QMYSQLDriverPlugin()
    : QSqlDriverPlugin()
{
}

QSqlDriver* QMYSQLDriverPlugin::create(const QString &name)
{
    if (name == QLatin1String("QMYSQL") || name == QLatin1String("QMYSQL3")) {
        QMYSQLDriver* driver = new QMYSQLDriver();
        return driver;
    }
    return 0;
}

QT_END_NAMESPACE

//#include "moc_qsqlmysql_main.cpp"
