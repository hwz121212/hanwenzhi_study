#pragma once

#include <qsqldriverplugin.h>
#include <qstringlist.h>
#include "qsql_oci_p.h"

QT_BEGIN_NAMESPACE

class QOCIDriverPlugin : public QSqlDriverPlugin
{
    Q_OBJECT
    Q_PLUGIN_METADATA(IID "org.qt-project.Qt.QSqlDriverFactoryInterface" FILE "oci.json")

public:
    QOCIDriverPlugin();

    QSqlDriver* create(const QString &);
};
