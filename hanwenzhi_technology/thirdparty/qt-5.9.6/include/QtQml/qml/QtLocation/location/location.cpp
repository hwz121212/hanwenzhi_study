#include "location.h"



static void initResources()
{
#ifdef QT_STATIC
    Q_INIT_RESOURCE(qmake_QtLocation);
#endif
}

QT_BEGIN_NAMESPACE


QtLocationDeclarativeModule::QtLocationDeclarativeModule(QObject *parent) : QQmlExtensionPlugin(parent)
{ 
	initResources();
}


void QtLocationDeclarativeModule::registerTypes(const char *uri)
{
	if (QLatin1String(uri) == QLatin1String("QtLocation")) {

		// @uri QtLocation
		int major = 5;
		int minor = 0;

		// Register the 5.0 types
		// 5.0 is siltent and not advertised

		qmlRegisterType<QDeclarativeGeoServiceProvider          >(uri, major, minor, "Plugin");
		qmlRegisterType<QDeclarativeGeoServiceProviderParameter >(uri, major, minor, "PluginParameter");
		qmlRegisterUncreatableType<QDeclarativeGeoServiceProviderRequirements>(uri, major, minor, "PluginRequirements",
			QStringLiteral("PluginRequirements is not intended instantiable by developer."));
		qmlRegisterType<QDeclarativeGeoMap                      >(uri, major, minor, "Map");

		qmlRegisterUncreatableType<QDeclarativeGeoMapItemBase   >(uri, major, minor, "GeoMapItemBase",
			QStringLiteral("GeoMapItemBase is not intended instantiable by developer."));
		qmlRegisterType<QDeclarativeGeoMapQuickItem             >(uri, major, minor, "MapQuickItem");
		qmlRegisterType<QDeclarativeGeoMapItemView              >(uri, major, minor, "MapItemView");

		qmlRegisterType<QDeclarativeGeocodeModel                >(uri, major, minor, "GeocodeModel"); // geocoding and reverse geocoding
		qmlRegisterType<QDeclarativeGeoRouteModel               >(uri, major, minor, "RouteModel");
		qmlRegisterType<QDeclarativeGeoRouteQuery               >(uri, major, minor, "RouteQuery");
		qmlRegisterType<QDeclarativeGeoRoute                    >(uri, major, minor, "Route"); // data type
		qmlRegisterType<QDeclarativeGeoRouteSegment             >(uri, major, minor, "RouteSegment");
		qmlRegisterType<QDeclarativeGeoManeuver                 >(uri, major, minor, "RouteManeuver");
		qmlRegisterUncreatableType<QGeoMapPinchEvent >(uri, major, minor, "MapPinchEvent",
			QStringLiteral("(Map)PinchEvent is not intended instantiable by developer."));
		qmlRegisterUncreatableType<QQuickGeoMapGestureArea>(uri, major, minor, "MapGestureArea",
			QStringLiteral("(Map)GestureArea is not intended instantiable by developer."));
		qmlRegisterUncreatableType<QDeclarativeGeoMapType       >(uri, major, minor, "MapType",
			QStringLiteral("MapType is not intended instantiable by developer."));
		qmlRegisterType<QDeclarativeCategory                    >(uri, major, minor, "Category");
		qmlRegisterType<QDeclarativePlaceEditorialModel         >(uri, major, minor, "EditorialModel");
		qmlRegisterType<QDeclarativePlaceImageModel             >(uri, major, minor, "ImageModel");
		qmlRegisterType<QDeclarativePlace                       >(uri, major, minor, "Place");
		qmlRegisterType<QDeclarativePlaceIcon                   >(uri, major, minor, "Icon");
		qmlRegisterType<QDeclarativeRatings                     >(uri, major, minor, "Ratings");
		qmlRegisterType<QDeclarativeReviewModel                 >(uri, major, minor, "ReviewModel");
		qmlRegisterType<QDeclarativeSupplier                    >(uri, major, minor, "Supplier");
		qmlRegisterType<QDeclarativePlaceUser                   >(uri, major, minor, "User");
		qmlRegisterType<QDeclarativeRectangleMapItem            >(uri, major, minor, "MapRectangle");
		qmlRegisterType<QDeclarativeCircleMapItem               >(uri, major, minor, "MapCircle");
		qmlRegisterType<QDeclarativeMapLineProperties>();
		qmlRegisterType<QDeclarativePolylineMapItem             >(uri, major, minor, "MapPolyline");
		qmlRegisterType<QDeclarativePolygonMapItem              >(uri, major, minor, "MapPolygon");
		qmlRegisterType<QDeclarativeRouteMapItem                >(uri, major, minor, "MapRoute");

		qmlRegisterType<QDeclarativeSupportedCategoriesModel    >(uri, major, minor, "CategoryModel");
		qmlRegisterType<QDeclarativeSearchResultModel           >(uri, major, minor, "PlaceSearchModel");
		qmlRegisterType<QDeclarativeSearchSuggestionModel       >(uri, major, minor, "PlaceSearchSuggestionModel");
		qmlRegisterType<QDeclarativePlaceAttribute              >(uri, major, minor, "PlaceAttribute");
		qmlRegisterUncreatableType<QQmlPropertyMap              >(uri, major, minor, "ExtendedAttributes", "ExtendedAttributes instances cannot be instantiated.  "
			"Only Place types have ExtendedAttributes and they cannot be re-assigned "
			"(but can be modified).");
		qmlRegisterType<QDeclarativeContactDetail               >(uri, major, minor, "ContactDetail");
		qmlRegisterUncreatableType<QDeclarativeContactDetails   >(uri, major, minor, "ContactDetails", "ContactDetails instances cannot be instantiated.  "
			"Only Place types have ContactDetails and they cannot "
			"be re-assigned (but can be modified).");

		// Introduction of 5.3 version; existing 5.0 exports automatically become available under 5.3 as well
		// 5.3 is committed QML API despite missing release of QtLocation 5.3

		minor = 5;
		//TODO: this is broken QTBUG-50990
		qmlRegisterUncreatableType<QDeclarativeGeoMapType, 1>(uri, major, minor, "MapType",
			QStringLiteral("MapType is not intended instantiable by developer."));
		minor = 6;
		//TODO: this is broken QTBUG-50990
		qmlRegisterUncreatableType<QQuickGeoMapGestureArea, 1>(uri, major, minor, "MapGestureArea",
			QStringLiteral("(Map)GestureArea is not intended instantiable by developer."));

		// Register the 5.8 types
		minor = 8;
		qmlRegisterType<QDeclarativeGeoManeuver>(uri, major, minor, "RouteManeuver");

		// Register the 5.9 types
		minor = 9;
		qmlRegisterType<QDeclarativeGeoMapParameter>(uri, major, minor, "MapParameter");
		qmlRegisterType<QDeclarativeGeoMapCopyrightNotice>(uri, major, minor, "MapCopyrightNotice");
		qmlRegisterType<QDeclarativeGeoMapItemGroup>(uri, major, minor, "MapItemGroup");

		//registrations below are version independent
		qRegisterMetaType<QPlaceCategory>();
		qRegisterMetaType<QPlace>();
		qRegisterMetaType<QPlaceIcon>();
		qRegisterMetaType<QPlaceRatings>();
		qRegisterMetaType<QPlaceSupplier>();
		qRegisterMetaType<QPlaceUser>();
		qRegisterMetaType<QPlaceAttribute>();
		qRegisterMetaType<QPlaceContactDetail>();
	}
	else {
		qDebug() << "Unsupported URI given to load location QML plugin: " << QLatin1String(uri);
	}
}

QT_END_NAMESPACE
