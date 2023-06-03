#include <qsqldriverplugin.h>
#include <qstringlist.h>
#include "qsql_ibase_p.h"

#include "qsqlibase_main.h"

QT_BEGIN_NAMESPACE


QIBaseDriverPlugin::QIBaseDriverPlugin()
    : QSqlDriverPlugin()
{
}

QSqlDriver* QIBaseDriverPlugin::create(const QString &name)
{
    if (name == QLatin1String("QIBASE")) {
        QIBaseDriver* driver = new QIBaseDriver();
        return driver;
    }
    return 0;
}

QT_END_NAMESPACE

//#include "moc_qsqlibase_main.cpp"
