#include <qsqldriverplugin.h>
#include <qstringlist.h>
#include "qsql_oci_p.h"

#include "qsqloci_main.h"

QT_BEGIN_NAMESPACE


QOCIDriverPlugin::QOCIDriverPlugin()
    : QSqlDriverPlugin()
{
}

QSqlDriver* QOCIDriverPlugin::create(const QString &name)
{
    if (name == QLatin1String("QOCI") || name == QLatin1String("QOCI8")) {
        QOCIDriver* driver = new QOCIDriver();
        return driver;
    }
    return 0;
}

QT_END_NAMESPACE

#include "moc_qsqloci_main.cpp"
