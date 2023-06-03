#pragma once

#include <qsqldriverplugin.h>
#include <qstringlist.h>
#include "qsql_psql_p.h"

QT_BEGIN_NAMESPACE

class QPSQLDriverPlugin : public QSqlDriverPlugin
{
    Q_OBJECT
    Q_PLUGIN_METADATA(IID "org.qt-project.Qt.QSqlDriverFactoryInterface" FILE "psql.json")

public:
    QPSQLDriverPlugin();

    QSqlDriver* create(const QString &) Q_DECL_OVERRIDE;
};
