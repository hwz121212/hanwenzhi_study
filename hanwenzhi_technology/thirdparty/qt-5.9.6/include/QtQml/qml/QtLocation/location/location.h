#pragma once


#include <QtLocation/private/qdeclarativegeoserviceprovider_p.h>
#include <QtLocation/private/qdeclarativegeomap_p.h>

#include <QtLocation/private/qdeclarativegeoroute_p.h>
#include <QtLocation/private/qdeclarativegeoroutemodel_p.h>
#include <QtLocation/private/qdeclarativegeocodemodel_p.h>
#include <QtLocation/private/qdeclarativegeomaneuver_p.h>
#include <QtLocation/private/qdeclarativegeomapitembase_p.h>
#include <QtLocation/private/qdeclarativegeomapquickitem_p.h>
#include <QtLocation/private/qdeclarativegeomapitemview_p.h>
#include <QtLocation/private/qdeclarativegeomaptype_p.h>
#include <QtLocation/private/qdeclarativerectanglemapitem_p.h>
#include <QtLocation/private/qdeclarativecirclemapitem_p.h>
#include <QtLocation/private/qdeclarativeroutemapitem_p.h>
#include <QtLocation/private/qdeclarativepolylinemapitem_p.h>
#include <QtLocation/private/qdeclarativepolygonmapitem_p.h>
#include <QtLocation/private/qdeclarativegeomapparameter_p.h>
#include <QtLocation/private/qdeclarativegeomapcopyrightsnotice_p.h>
#include <QtLocation/private/qdeclarativegeomapitemgroup_p.h>

//Place includes
#include <QtLocation/private/qdeclarativecategory_p.h>
#include <QtLocation/private/qdeclarativeplace_p.h>
#include <QtLocation/private/qdeclarativeplaceattribute_p.h>
#include <QtLocation/private/qdeclarativeplaceicon_p.h>
#include <QtLocation/private/qdeclarativeratings_p.h>
#include <QtLocation/private/qdeclarativesupplier_p.h>
#include <QtLocation/private/qdeclarativeplaceuser_p.h>
#include <QtLocation/private/qdeclarativecontactdetail_p.h>

#include <QtLocation/private/qdeclarativesupportedcategoriesmodel_p.h>
#include <QtLocation/private/qdeclarativesearchresultmodel_p.h>
#include <QtLocation/private/qdeclarativesearchsuggestionmodel_p.h>

#include <QtQml/qqmlextensionplugin.h>

#include <QtCore/QDebug>



QT_BEGIN_NAMESPACE


class QtLocationDeclarativeModule: public QQmlExtensionPlugin
{
    Q_OBJECT

    Q_PLUGIN_METADATA(IID QQmlExtensionInterface_iid
                      FILE "plugin.json")

public:
	QtLocationDeclarativeModule(QObject *parent = 0);
	virtual void registerTypes(const char *uri);
   
};


QT_END_NAMESPACE
