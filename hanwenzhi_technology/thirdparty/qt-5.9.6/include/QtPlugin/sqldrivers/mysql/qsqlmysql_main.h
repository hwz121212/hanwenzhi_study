#pragma once

#include <qsqldriverplugin.h>
#include <qstringlist.h>
#include "qsql_mysql_p.h"

QT_BEGIN_NAMESPACE

class QMYSQLDriverPlugin : public QSqlDriverPlugin
{
    Q_OBJECT
    Q_PLUGIN_METADATA(IID "org.qt-project.Qt.QSqlDriverFactoryInterface" FILE "mysql.json")

public:
    QMYSQLDriverPlugin();

    QSqlDriver* create(const QString &) Q_DECL_OVERRIDE;
};
