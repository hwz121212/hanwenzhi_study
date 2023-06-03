#pragma once

#include <qsqldriverplugin.h>
#include <qstringlist.h>
#include "qsql_db2_p.h"

QT_BEGIN_NAMESPACE

class QDB2DriverPlugin : public QSqlDriverPlugin
{
    Q_OBJECT
    Q_PLUGIN_METADATA(IID "org.qt-project.Qt.QSqlDriverFactoryInterface" FILE "db2.json")

public:
    QDB2DriverPlugin();

    QSqlDriver* create(const QString &);
};
