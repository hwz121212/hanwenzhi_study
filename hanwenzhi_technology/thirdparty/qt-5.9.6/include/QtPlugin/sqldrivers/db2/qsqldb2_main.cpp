#include <qsqldriverplugin.h>
#include <qstringlist.h>
#include "qsql_db2_p.h"

#include "qsqldb2_main.h"

QT_BEGIN_NAMESPACE


QDB2DriverPlugin::QDB2DriverPlugin()
    : QSqlDriverPlugin()
{
}

QSqlDriver* QDB2DriverPlugin::create(const QString &name)
{
    if (name == QLatin1String("QDB2")) {
        QDB2Driver* driver = new QDB2Driver();
        return driver;
    }
    return 0;
}

QT_END_NAMESPACE

//#include "moc_qsqldb2_main.cpp"
