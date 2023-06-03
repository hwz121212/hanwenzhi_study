/****************************************************************************
** Meta object code from reading C++ file 'qgeoserviceprovider.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../qgeoserviceprovider.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgeoserviceprovider.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QGeoServiceProvider_t {
    QByteArrayData data[43];
    char stringdata0[875];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QGeoServiceProvider_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QGeoServiceProvider_t qt_meta_stringdata_QGeoServiceProvider = {
    {
QT_MOC_LITERAL(0, 0, 19), // "QGeoServiceProvider"
QT_MOC_LITERAL(1, 20, 5), // "Error"
QT_MOC_LITERAL(2, 26, 7), // "NoError"
QT_MOC_LITERAL(3, 34, 17), // "NotSupportedError"
QT_MOC_LITERAL(4, 52, 21), // "UnknownParameterError"
QT_MOC_LITERAL(5, 74, 29), // "MissingRequiredParameterError"
QT_MOC_LITERAL(6, 104, 15), // "ConnectionError"
QT_MOC_LITERAL(7, 120, 15), // "RoutingFeatures"
QT_MOC_LITERAL(8, 136, 17), // "NoRoutingFeatures"
QT_MOC_LITERAL(9, 154, 20), // "OnlineRoutingFeature"
QT_MOC_LITERAL(10, 175, 21), // "OfflineRoutingFeature"
QT_MOC_LITERAL(11, 197, 23), // "LocalizedRoutingFeature"
QT_MOC_LITERAL(12, 221, 19), // "RouteUpdatesFeature"
QT_MOC_LITERAL(13, 241, 24), // "AlternativeRoutesFeature"
QT_MOC_LITERAL(14, 266, 26), // "ExcludeAreasRoutingFeature"
QT_MOC_LITERAL(15, 293, 18), // "AnyRoutingFeatures"
QT_MOC_LITERAL(16, 312, 17), // "GeocodingFeatures"
QT_MOC_LITERAL(17, 330, 19), // "NoGeocodingFeatures"
QT_MOC_LITERAL(18, 350, 22), // "OnlineGeocodingFeature"
QT_MOC_LITERAL(19, 373, 23), // "OfflineGeocodingFeature"
QT_MOC_LITERAL(20, 397, 23), // "ReverseGeocodingFeature"
QT_MOC_LITERAL(21, 421, 25), // "LocalizedGeocodingFeature"
QT_MOC_LITERAL(22, 447, 20), // "AnyGeocodingFeatures"
QT_MOC_LITERAL(23, 468, 15), // "MappingFeatures"
QT_MOC_LITERAL(24, 484, 17), // "NoMappingFeatures"
QT_MOC_LITERAL(25, 502, 20), // "OnlineMappingFeature"
QT_MOC_LITERAL(26, 523, 21), // "OfflineMappingFeature"
QT_MOC_LITERAL(27, 545, 23), // "LocalizedMappingFeature"
QT_MOC_LITERAL(28, 569, 18), // "AnyMappingFeatures"
QT_MOC_LITERAL(29, 588, 14), // "PlacesFeatures"
QT_MOC_LITERAL(30, 603, 16), // "NoPlacesFeatures"
QT_MOC_LITERAL(31, 620, 19), // "OnlinePlacesFeature"
QT_MOC_LITERAL(32, 640, 20), // "OfflinePlacesFeature"
QT_MOC_LITERAL(33, 661, 16), // "SavePlaceFeature"
QT_MOC_LITERAL(34, 678, 18), // "RemovePlaceFeature"
QT_MOC_LITERAL(35, 697, 19), // "SaveCategoryFeature"
QT_MOC_LITERAL(36, 717, 21), // "RemoveCategoryFeature"
QT_MOC_LITERAL(37, 739, 27), // "PlaceRecommendationsFeature"
QT_MOC_LITERAL(38, 767, 24), // "SearchSuggestionsFeature"
QT_MOC_LITERAL(39, 792, 22), // "LocalizedPlacesFeature"
QT_MOC_LITERAL(40, 815, 20), // "NotificationsFeature"
QT_MOC_LITERAL(41, 836, 20), // "PlaceMatchingFeature"
QT_MOC_LITERAL(42, 857, 17) // "AnyPlacesFeatures"

    },
    "QGeoServiceProvider\0Error\0NoError\0"
    "NotSupportedError\0UnknownParameterError\0"
    "MissingRequiredParameterError\0"
    "ConnectionError\0RoutingFeatures\0"
    "NoRoutingFeatures\0OnlineRoutingFeature\0"
    "OfflineRoutingFeature\0LocalizedRoutingFeature\0"
    "RouteUpdatesFeature\0AlternativeRoutesFeature\0"
    "ExcludeAreasRoutingFeature\0"
    "AnyRoutingFeatures\0GeocodingFeatures\0"
    "NoGeocodingFeatures\0OnlineGeocodingFeature\0"
    "OfflineGeocodingFeature\0ReverseGeocodingFeature\0"
    "LocalizedGeocodingFeature\0"
    "AnyGeocodingFeatures\0MappingFeatures\0"
    "NoMappingFeatures\0OnlineMappingFeature\0"
    "OfflineMappingFeature\0LocalizedMappingFeature\0"
    "AnyMappingFeatures\0PlacesFeatures\0"
    "NoPlacesFeatures\0OnlinePlacesFeature\0"
    "OfflinePlacesFeature\0SavePlaceFeature\0"
    "RemovePlaceFeature\0SaveCategoryFeature\0"
    "RemoveCategoryFeature\0PlaceRecommendationsFeature\0"
    "SearchSuggestionsFeature\0"
    "LocalizedPlacesFeature\0NotificationsFeature\0"
    "PlaceMatchingFeature\0AnyPlacesFeatures"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QGeoServiceProvider[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       5,   14, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // enums: name, flags, count, data
       1, 0x0,    5,   34,
       7, 0x1,    8,   44,
      16, 0x1,    6,   60,
      23, 0x1,    5,   72,
      29, 0x1,   13,   82,

 // enum data: key, value
       2, uint(QGeoServiceProvider::NoError),
       3, uint(QGeoServiceProvider::NotSupportedError),
       4, uint(QGeoServiceProvider::UnknownParameterError),
       5, uint(QGeoServiceProvider::MissingRequiredParameterError),
       6, uint(QGeoServiceProvider::ConnectionError),
       8, uint(QGeoServiceProvider::NoRoutingFeatures),
       9, uint(QGeoServiceProvider::OnlineRoutingFeature),
      10, uint(QGeoServiceProvider::OfflineRoutingFeature),
      11, uint(QGeoServiceProvider::LocalizedRoutingFeature),
      12, uint(QGeoServiceProvider::RouteUpdatesFeature),
      13, uint(QGeoServiceProvider::AlternativeRoutesFeature),
      14, uint(QGeoServiceProvider::ExcludeAreasRoutingFeature),
      15, uint(QGeoServiceProvider::AnyRoutingFeatures),
      17, uint(QGeoServiceProvider::NoGeocodingFeatures),
      18, uint(QGeoServiceProvider::OnlineGeocodingFeature),
      19, uint(QGeoServiceProvider::OfflineGeocodingFeature),
      20, uint(QGeoServiceProvider::ReverseGeocodingFeature),
      21, uint(QGeoServiceProvider::LocalizedGeocodingFeature),
      22, uint(QGeoServiceProvider::AnyGeocodingFeatures),
      24, uint(QGeoServiceProvider::NoMappingFeatures),
      25, uint(QGeoServiceProvider::OnlineMappingFeature),
      26, uint(QGeoServiceProvider::OfflineMappingFeature),
      27, uint(QGeoServiceProvider::LocalizedMappingFeature),
      28, uint(QGeoServiceProvider::AnyMappingFeatures),
      30, uint(QGeoServiceProvider::NoPlacesFeatures),
      31, uint(QGeoServiceProvider::OnlinePlacesFeature),
      32, uint(QGeoServiceProvider::OfflinePlacesFeature),
      33, uint(QGeoServiceProvider::SavePlaceFeature),
      34, uint(QGeoServiceProvider::RemovePlaceFeature),
      35, uint(QGeoServiceProvider::SaveCategoryFeature),
      36, uint(QGeoServiceProvider::RemoveCategoryFeature),
      37, uint(QGeoServiceProvider::PlaceRecommendationsFeature),
      38, uint(QGeoServiceProvider::SearchSuggestionsFeature),
      39, uint(QGeoServiceProvider::LocalizedPlacesFeature),
      40, uint(QGeoServiceProvider::NotificationsFeature),
      41, uint(QGeoServiceProvider::PlaceMatchingFeature),
      42, uint(QGeoServiceProvider::AnyPlacesFeatures),

       0        // eod
};

void QGeoServiceProvider::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject QGeoServiceProvider::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QGeoServiceProvider.data,
      qt_meta_data_QGeoServiceProvider,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QGeoServiceProvider::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QGeoServiceProvider::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QGeoServiceProvider.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QGeoServiceProvider::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
