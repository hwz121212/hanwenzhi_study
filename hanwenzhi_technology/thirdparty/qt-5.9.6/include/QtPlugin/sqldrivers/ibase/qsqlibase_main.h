#pragma once

#include <qsqldriverplugin.h>
#include <qstringlist.h>
#include "qsql_ibase_p.h"

QT_BEGIN_NAMESPACE

class QIBaseDriverPlugin : public QSqlDriverPlugin
{
    Q_OBJECT
    Q_PLUGIN_METADATA(IID "org.qt-project.Qt.QSqlDriverFactoryInterface" FILE "ibase.json")

public:
    QIBaseDriverPlugin();

    QSqlDriver* create(const QString &);
};
