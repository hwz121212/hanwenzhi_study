#pragma once
#include <qsqldriverplugin.h>
#include <qstringlist.h>
#include "qsql_odbc_p.h"

QT_BEGIN_NAMESPACE

class QODBCDriverPlugin : public QSqlDriverPlugin
{
    Q_OBJECT
    Q_PLUGIN_METADATA(IID "org.qt-project.Qt.QSqlDriverFactoryInterface" FILE "odbc.json")

public:
    QODBCDriverPlugin();

    QSqlDriver* create(const QString &);
};
