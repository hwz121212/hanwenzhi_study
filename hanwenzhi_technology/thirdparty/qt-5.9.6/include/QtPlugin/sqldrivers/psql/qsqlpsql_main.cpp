#include <qsqldriverplugin.h>
#include <qstringlist.h>
#include "qsql_psql_p.h"

#include "qsqlpsql_main.h"

QT_BEGIN_NAMESPACE


QPSQLDriverPlugin::QPSQLDriverPlugin()
    : QSqlDriverPlugin()
{
}

QSqlDriver* QPSQLDriverPlugin::create(const QString &name)
{
    if (name == QLatin1String("QPSQL") || name == QLatin1String("QPSQL7")) {
        QPSQLDriver* driver = new QPSQLDriver();
        return driver;
    }
    return 0;
}

QT_END_NAMESPACE

//#include "moc_qsqlpsql_main.cpp"
