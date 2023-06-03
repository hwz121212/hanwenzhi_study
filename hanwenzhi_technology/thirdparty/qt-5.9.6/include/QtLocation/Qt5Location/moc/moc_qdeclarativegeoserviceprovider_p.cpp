/****************************************************************************
** Meta object code from reading C++ file 'qdeclarativegeoserviceprovider_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../5.9.6/QtLocation/private/qdeclarativegeoserviceprovider_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qdeclarativegeoserviceprovider_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QDeclarativeGeoServiceProviderParameter_t {
    QByteArrayData data[7];
    char stringdata0[89];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QDeclarativeGeoServiceProviderParameter_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QDeclarativeGeoServiceProviderParameter_t qt_meta_stringdata_QDeclarativeGeoServiceProviderParameter = {
    {
QT_MOC_LITERAL(0, 0, 39), // "QDeclarativeGeoServiceProvide..."
QT_MOC_LITERAL(1, 40, 11), // "nameChanged"
QT_MOC_LITERAL(2, 52, 0), // ""
QT_MOC_LITERAL(3, 53, 4), // "name"
QT_MOC_LITERAL(4, 58, 12), // "valueChanged"
QT_MOC_LITERAL(5, 71, 5), // "value"
QT_MOC_LITERAL(6, 77, 11) // "initialized"

    },
    "QDeclarativeGeoServiceProviderParameter\0"
    "nameChanged\0\0name\0valueChanged\0value\0"
    "initialized"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QDeclarativeGeoServiceProviderParameter[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       2,   36, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x06 /* Public */,
       4,    1,   32,    2, 0x06 /* Public */,
       6,    0,   35,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QVariant,    5,
    QMetaType::Void,

 // properties: name, type, flags
       3, QMetaType::QString, 0x00495103,
       5, QMetaType::QVariant, 0x00495103,

 // properties: notify_signal_id
       0,
       1,

       0        // eod
};

void QDeclarativeGeoServiceProviderParameter::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QDeclarativeGeoServiceProviderParameter *_t = static_cast<QDeclarativeGeoServiceProviderParameter *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->nameChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->valueChanged((*reinterpret_cast< const QVariant(*)>(_a[1]))); break;
        case 2: _t->initialized(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QDeclarativeGeoServiceProviderParameter::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QDeclarativeGeoServiceProviderParameter::nameChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QDeclarativeGeoServiceProviderParameter::*_t)(const QVariant & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QDeclarativeGeoServiceProviderParameter::valueChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QDeclarativeGeoServiceProviderParameter::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QDeclarativeGeoServiceProviderParameter::initialized)) {
                *result = 2;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QDeclarativeGeoServiceProviderParameter *_t = static_cast<QDeclarativeGeoServiceProviderParameter *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->name(); break;
        case 1: *reinterpret_cast< QVariant*>(_v) = _t->value(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QDeclarativeGeoServiceProviderParameter *_t = static_cast<QDeclarativeGeoServiceProviderParameter *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setName(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setValue(*reinterpret_cast< QVariant*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QDeclarativeGeoServiceProviderParameter::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QDeclarativeGeoServiceProviderParameter.data,
      qt_meta_data_QDeclarativeGeoServiceProviderParameter,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QDeclarativeGeoServiceProviderParameter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QDeclarativeGeoServiceProviderParameter::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QDeclarativeGeoServiceProviderParameter.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QDeclarativeGeoServiceProviderParameter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 2;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QDeclarativeGeoServiceProviderParameter::nameChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QDeclarativeGeoServiceProviderParameter::valueChanged(const QVariant & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QDeclarativeGeoServiceProviderParameter::initialized()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
struct qt_meta_stringdata_QDeclarativeGeoServiceProvider_t {
    QByteArrayData data[65];
    char stringdata0[1233];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QDeclarativeGeoServiceProvider_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QDeclarativeGeoServiceProvider_t qt_meta_stringdata_QDeclarativeGeoServiceProvider = {
    {
QT_MOC_LITERAL(0, 0, 30), // "QDeclarativeGeoServiceProvider"
QT_MOC_LITERAL(1, 31, 15), // "DefaultProperty"
QT_MOC_LITERAL(2, 47, 10), // "parameters"
QT_MOC_LITERAL(3, 58, 11), // "nameChanged"
QT_MOC_LITERAL(4, 70, 0), // ""
QT_MOC_LITERAL(5, 71, 4), // "name"
QT_MOC_LITERAL(6, 76, 14), // "localesChanged"
QT_MOC_LITERAL(7, 91, 8), // "attached"
QT_MOC_LITERAL(8, 100, 16), // "preferredChanged"
QT_MOC_LITERAL(9, 117, 11), // "preferences"
QT_MOC_LITERAL(10, 129, 24), // "allowExperimentalChanged"
QT_MOC_LITERAL(11, 154, 5), // "allow"
QT_MOC_LITERAL(12, 160, 15), // "supportsRouting"
QT_MOC_LITERAL(13, 176, 15), // "RoutingFeatures"
QT_MOC_LITERAL(14, 192, 7), // "feature"
QT_MOC_LITERAL(15, 200, 17), // "supportsGeocoding"
QT_MOC_LITERAL(16, 218, 17), // "GeocodingFeatures"
QT_MOC_LITERAL(17, 236, 15), // "supportsMapping"
QT_MOC_LITERAL(18, 252, 15), // "MappingFeatures"
QT_MOC_LITERAL(19, 268, 14), // "supportsPlaces"
QT_MOC_LITERAL(20, 283, 14), // "PlacesFeatures"
QT_MOC_LITERAL(21, 298, 25), // "availableServiceProviders"
QT_MOC_LITERAL(22, 324, 57), // "QQmlListProperty<QDeclarative..."
QT_MOC_LITERAL(23, 382, 8), // "required"
QT_MOC_LITERAL(24, 391, 43), // "QDeclarativeGeoServiceProvide..."
QT_MOC_LITERAL(25, 435, 7), // "locales"
QT_MOC_LITERAL(26, 443, 9), // "preferred"
QT_MOC_LITERAL(27, 453, 17), // "allowExperimental"
QT_MOC_LITERAL(28, 471, 10), // "isAttached"
QT_MOC_LITERAL(29, 482, 14), // "RoutingFeature"
QT_MOC_LITERAL(30, 497, 17), // "NoRoutingFeatures"
QT_MOC_LITERAL(31, 515, 20), // "OnlineRoutingFeature"
QT_MOC_LITERAL(32, 536, 21), // "OfflineRoutingFeature"
QT_MOC_LITERAL(33, 558, 23), // "LocalizedRoutingFeature"
QT_MOC_LITERAL(34, 582, 19), // "RouteUpdatesFeature"
QT_MOC_LITERAL(35, 602, 24), // "AlternativeRoutesFeature"
QT_MOC_LITERAL(36, 627, 26), // "ExcludeAreasRoutingFeature"
QT_MOC_LITERAL(37, 654, 18), // "AnyRoutingFeatures"
QT_MOC_LITERAL(38, 673, 16), // "GeocodingFeature"
QT_MOC_LITERAL(39, 690, 19), // "NoGeocodingFeatures"
QT_MOC_LITERAL(40, 710, 22), // "OnlineGeocodingFeature"
QT_MOC_LITERAL(41, 733, 23), // "OfflineGeocodingFeature"
QT_MOC_LITERAL(42, 757, 23), // "ReverseGeocodingFeature"
QT_MOC_LITERAL(43, 781, 25), // "LocalizedGeocodingFeature"
QT_MOC_LITERAL(44, 807, 20), // "AnyGeocodingFeatures"
QT_MOC_LITERAL(45, 828, 14), // "MappingFeature"
QT_MOC_LITERAL(46, 843, 17), // "NoMappingFeatures"
QT_MOC_LITERAL(47, 861, 20), // "OnlineMappingFeature"
QT_MOC_LITERAL(48, 882, 21), // "OfflineMappingFeature"
QT_MOC_LITERAL(49, 904, 23), // "LocalizedMappingFeature"
QT_MOC_LITERAL(50, 928, 18), // "AnyMappingFeatures"
QT_MOC_LITERAL(51, 947, 13), // "PlacesFeature"
QT_MOC_LITERAL(52, 961, 16), // "NoPlacesFeatures"
QT_MOC_LITERAL(53, 978, 19), // "OnlinePlacesFeature"
QT_MOC_LITERAL(54, 998, 20), // "OfflinePlacesFeature"
QT_MOC_LITERAL(55, 1019, 16), // "SavePlaceFeature"
QT_MOC_LITERAL(56, 1036, 18), // "RemovePlaceFeature"
QT_MOC_LITERAL(57, 1055, 19), // "SaveCategoryFeature"
QT_MOC_LITERAL(58, 1075, 21), // "RemoveCategoryFeature"
QT_MOC_LITERAL(59, 1097, 27), // "PlaceRecommendationsFeature"
QT_MOC_LITERAL(60, 1125, 24), // "SearchSuggestionsFeature"
QT_MOC_LITERAL(61, 1150, 22), // "LocalizedPlacesFeature"
QT_MOC_LITERAL(62, 1173, 20), // "NotificationsFeature"
QT_MOC_LITERAL(63, 1194, 20), // "PlaceMatchingFeature"
QT_MOC_LITERAL(64, 1215, 17) // "AnyPlacesFeatures"

    },
    "QDeclarativeGeoServiceProvider\0"
    "DefaultProperty\0parameters\0nameChanged\0"
    "\0name\0localesChanged\0attached\0"
    "preferredChanged\0preferences\0"
    "allowExperimentalChanged\0allow\0"
    "supportsRouting\0RoutingFeatures\0feature\0"
    "supportsGeocoding\0GeocodingFeatures\0"
    "supportsMapping\0MappingFeatures\0"
    "supportsPlaces\0PlacesFeatures\0"
    "availableServiceProviders\0"
    "QQmlListProperty<QDeclarativeGeoServiceProviderParameter>\0"
    "required\0QDeclarativeGeoServiceProviderRequirements*\0"
    "locales\0preferred\0allowExperimental\0"
    "isAttached\0RoutingFeature\0NoRoutingFeatures\0"
    "OnlineRoutingFeature\0OfflineRoutingFeature\0"
    "LocalizedRoutingFeature\0RouteUpdatesFeature\0"
    "AlternativeRoutesFeature\0"
    "ExcludeAreasRoutingFeature\0"
    "AnyRoutingFeatures\0GeocodingFeature\0"
    "NoGeocodingFeatures\0OnlineGeocodingFeature\0"
    "OfflineGeocodingFeature\0ReverseGeocodingFeature\0"
    "LocalizedGeocodingFeature\0"
    "AnyGeocodingFeatures\0MappingFeature\0"
    "NoMappingFeatures\0OnlineMappingFeature\0"
    "OfflineMappingFeature\0LocalizedMappingFeature\0"
    "AnyMappingFeatures\0PlacesFeature\0"
    "NoPlacesFeatures\0OnlinePlacesFeature\0"
    "OfflinePlacesFeature\0SavePlaceFeature\0"
    "RemovePlaceFeature\0SaveCategoryFeature\0"
    "RemoveCategoryFeature\0PlaceRecommendationsFeature\0"
    "SearchSuggestionsFeature\0"
    "LocalizedPlacesFeature\0NotificationsFeature\0"
    "PlaceMatchingFeature\0AnyPlacesFeatures"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QDeclarativeGeoServiceProvider[] = {

 // content:
       7,       // revision
       0,       // classname
       1,   14, // classinfo
      13,   16, // methods
       8,  108, // properties
       8,  140, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // classinfo: key, value
       1,    2,

 // signals: name, argc, parameters, tag, flags
       3,    1,   81,    4, 0x06 /* Public */,
       6,    0,   84,    4, 0x06 /* Public */,
       7,    0,   85,    4, 0x06 /* Public */,
       8,    1,   86,    4, 0x06 /* Public */,
      10,    1,   89,    4, 0x06 /* Public */,

 // methods: name, argc, parameters, tag, flags
      12,    1,   92,    4, 0x02 /* Public */,
      12,    0,   95,    4, 0x22 /* Public | MethodCloned */,
      15,    1,   96,    4, 0x02 /* Public */,
      15,    0,   99,    4, 0x22 /* Public | MethodCloned */,
      17,    1,  100,    4, 0x02 /* Public */,
      17,    0,  103,    4, 0x22 /* Public | MethodCloned */,
      19,    1,  104,    4, 0x02 /* Public */,
      19,    0,  107,    4, 0x22 /* Public | MethodCloned */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QStringList,    9,
    QMetaType::Void, QMetaType::Bool,   11,

 // methods: parameters
    QMetaType::Bool, 0x80000000 | 13,   14,
    QMetaType::Bool,
    QMetaType::Bool, 0x80000000 | 16,   14,
    QMetaType::Bool,
    QMetaType::Bool, 0x80000000 | 18,   14,
    QMetaType::Bool,
    QMetaType::Bool, 0x80000000 | 20,   14,
    QMetaType::Bool,

 // properties: name, type, flags
       5, QMetaType::QString, 0x00495103,
      21, QMetaType::QStringList, 0x00095401,
       2, 0x80000000 | 22, 0x00095009,
      23, 0x80000000 | 24, 0x0009500b,
      25, QMetaType::QStringList, 0x00495103,
      26, QMetaType::QStringList, 0x00495103,
      27, QMetaType::Bool, 0x00495103,
      28, QMetaType::Bool, 0x00495001,

 // properties: notify_signal_id
       0,
       0,
       0,
       0,
       1,
       3,
       4,
       2,

 // enums: name, flags, count, data
      29, 0x0,    8,  172,
      13, 0x1,    8,  188,
      38, 0x0,    6,  204,
      16, 0x1,    6,  216,
      45, 0x0,    5,  228,
      18, 0x1,    5,  238,
      51, 0x0,   13,  248,
      20, 0x1,   13,  274,

 // enum data: key, value
      30, uint(QDeclarativeGeoServiceProvider::NoRoutingFeatures),
      31, uint(QDeclarativeGeoServiceProvider::OnlineRoutingFeature),
      32, uint(QDeclarativeGeoServiceProvider::OfflineRoutingFeature),
      33, uint(QDeclarativeGeoServiceProvider::LocalizedRoutingFeature),
      34, uint(QDeclarativeGeoServiceProvider::RouteUpdatesFeature),
      35, uint(QDeclarativeGeoServiceProvider::AlternativeRoutesFeature),
      36, uint(QDeclarativeGeoServiceProvider::ExcludeAreasRoutingFeature),
      37, uint(QDeclarativeGeoServiceProvider::AnyRoutingFeatures),
      30, uint(QDeclarativeGeoServiceProvider::NoRoutingFeatures),
      31, uint(QDeclarativeGeoServiceProvider::OnlineRoutingFeature),
      32, uint(QDeclarativeGeoServiceProvider::OfflineRoutingFeature),
      33, uint(QDeclarativeGeoServiceProvider::LocalizedRoutingFeature),
      34, uint(QDeclarativeGeoServiceProvider::RouteUpdatesFeature),
      35, uint(QDeclarativeGeoServiceProvider::AlternativeRoutesFeature),
      36, uint(QDeclarativeGeoServiceProvider::ExcludeAreasRoutingFeature),
      37, uint(QDeclarativeGeoServiceProvider::AnyRoutingFeatures),
      39, uint(QDeclarativeGeoServiceProvider::NoGeocodingFeatures),
      40, uint(QDeclarativeGeoServiceProvider::OnlineGeocodingFeature),
      41, uint(QDeclarativeGeoServiceProvider::OfflineGeocodingFeature),
      42, uint(QDeclarativeGeoServiceProvider::ReverseGeocodingFeature),
      43, uint(QDeclarativeGeoServiceProvider::LocalizedGeocodingFeature),
      44, uint(QDeclarativeGeoServiceProvider::AnyGeocodingFeatures),
      39, uint(QDeclarativeGeoServiceProvider::NoGeocodingFeatures),
      40, uint(QDeclarativeGeoServiceProvider::OnlineGeocodingFeature),
      41, uint(QDeclarativeGeoServiceProvider::OfflineGeocodingFeature),
      42, uint(QDeclarativeGeoServiceProvider::ReverseGeocodingFeature),
      43, uint(QDeclarativeGeoServiceProvider::LocalizedGeocodingFeature),
      44, uint(QDeclarativeGeoServiceProvider::AnyGeocodingFeatures),
      46, uint(QDeclarativeGeoServiceProvider::NoMappingFeatures),
      47, uint(QDeclarativeGeoServiceProvider::OnlineMappingFeature),
      48, uint(QDeclarativeGeoServiceProvider::OfflineMappingFeature),
      49, uint(QDeclarativeGeoServiceProvider::LocalizedMappingFeature),
      50, uint(QDeclarativeGeoServiceProvider::AnyMappingFeatures),
      46, uint(QDeclarativeGeoServiceProvider::NoMappingFeatures),
      47, uint(QDeclarativeGeoServiceProvider::OnlineMappingFeature),
      48, uint(QDeclarativeGeoServiceProvider::OfflineMappingFeature),
      49, uint(QDeclarativeGeoServiceProvider::LocalizedMappingFeature),
      50, uint(QDeclarativeGeoServiceProvider::AnyMappingFeatures),
      52, uint(QDeclarativeGeoServiceProvider::NoPlacesFeatures),
      53, uint(QDeclarativeGeoServiceProvider::OnlinePlacesFeature),
      54, uint(QDeclarativeGeoServiceProvider::OfflinePlacesFeature),
      55, uint(QDeclarativeGeoServiceProvider::SavePlaceFeature),
      56, uint(QDeclarativeGeoServiceProvider::RemovePlaceFeature),
      57, uint(QDeclarativeGeoServiceProvider::SaveCategoryFeature),
      58, uint(QDeclarativeGeoServiceProvider::RemoveCategoryFeature),
      59, uint(QDeclarativeGeoServiceProvider::PlaceRecommendationsFeature),
      60, uint(QDeclarativeGeoServiceProvider::SearchSuggestionsFeature),
      61, uint(QDeclarativeGeoServiceProvider::LocalizedPlacesFeature),
      62, uint(QDeclarativeGeoServiceProvider::NotificationsFeature),
      63, uint(QDeclarativeGeoServiceProvider::PlaceMatchingFeature),
      64, uint(QDeclarativeGeoServiceProvider::AnyPlacesFeatures),
      52, uint(QDeclarativeGeoServiceProvider::NoPlacesFeatures),
      53, uint(QDeclarativeGeoServiceProvider::OnlinePlacesFeature),
      54, uint(QDeclarativeGeoServiceProvider::OfflinePlacesFeature),
      55, uint(QDeclarativeGeoServiceProvider::SavePlaceFeature),
      56, uint(QDeclarativeGeoServiceProvider::RemovePlaceFeature),
      57, uint(QDeclarativeGeoServiceProvider::SaveCategoryFeature),
      58, uint(QDeclarativeGeoServiceProvider::RemoveCategoryFeature),
      59, uint(QDeclarativeGeoServiceProvider::PlaceRecommendationsFeature),
      60, uint(QDeclarativeGeoServiceProvider::SearchSuggestionsFeature),
      61, uint(QDeclarativeGeoServiceProvider::LocalizedPlacesFeature),
      62, uint(QDeclarativeGeoServiceProvider::NotificationsFeature),
      63, uint(QDeclarativeGeoServiceProvider::PlaceMatchingFeature),
      64, uint(QDeclarativeGeoServiceProvider::AnyPlacesFeatures),

       0        // eod
};

void QDeclarativeGeoServiceProvider::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QDeclarativeGeoServiceProvider *_t = static_cast<QDeclarativeGeoServiceProvider *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->nameChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->localesChanged(); break;
        case 2: _t->attached(); break;
        case 3: _t->preferredChanged((*reinterpret_cast< const QStringList(*)>(_a[1]))); break;
        case 4: _t->allowExperimentalChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: { bool _r = _t->supportsRouting((*reinterpret_cast< const RoutingFeatures(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 6: { bool _r = _t->supportsRouting();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 7: { bool _r = _t->supportsGeocoding((*reinterpret_cast< const GeocodingFeatures(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 8: { bool _r = _t->supportsGeocoding();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 9: { bool _r = _t->supportsMapping((*reinterpret_cast< const MappingFeatures(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 10: { bool _r = _t->supportsMapping();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 11: { bool _r = _t->supportsPlaces((*reinterpret_cast< const PlacesFeatures(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 12: { bool _r = _t->supportsPlaces();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QDeclarativeGeoServiceProvider::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QDeclarativeGeoServiceProvider::nameChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QDeclarativeGeoServiceProvider::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QDeclarativeGeoServiceProvider::localesChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QDeclarativeGeoServiceProvider::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QDeclarativeGeoServiceProvider::attached)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (QDeclarativeGeoServiceProvider::*_t)(const QStringList & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QDeclarativeGeoServiceProvider::preferredChanged)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (QDeclarativeGeoServiceProvider::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QDeclarativeGeoServiceProvider::allowExperimentalChanged)) {
                *result = 4;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 3:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QDeclarativeGeoServiceProviderRequirements* >(); break;
        case 2:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QQmlListProperty<QDeclarativeGeoServiceProviderParameter> >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QDeclarativeGeoServiceProvider *_t = static_cast<QDeclarativeGeoServiceProvider *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->name(); break;
        case 1: *reinterpret_cast< QStringList*>(_v) = _t->availableServiceProviders(); break;
        case 2: *reinterpret_cast< QQmlListProperty<QDeclarativeGeoServiceProviderParameter>*>(_v) = _t->parameters(); break;
        case 3: *reinterpret_cast< QDeclarativeGeoServiceProviderRequirements**>(_v) = _t->requirements(); break;
        case 4: *reinterpret_cast< QStringList*>(_v) = _t->locales(); break;
        case 5: *reinterpret_cast< QStringList*>(_v) = _t->preferred(); break;
        case 6: *reinterpret_cast< bool*>(_v) = _t->allowExperimental(); break;
        case 7: *reinterpret_cast< bool*>(_v) = _t->isAttached(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QDeclarativeGeoServiceProvider *_t = static_cast<QDeclarativeGeoServiceProvider *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setName(*reinterpret_cast< QString*>(_v)); break;
        case 3: _t->setRequirements(*reinterpret_cast< QDeclarativeGeoServiceProviderRequirements**>(_v)); break;
        case 4: _t->setLocales(*reinterpret_cast< QStringList*>(_v)); break;
        case 5: _t->setPreferred(*reinterpret_cast< QStringList*>(_v)); break;
        case 6: _t->setAllowExperimental(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QDeclarativeGeoServiceProvider::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QDeclarativeGeoServiceProvider.data,
      qt_meta_data_QDeclarativeGeoServiceProvider,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QDeclarativeGeoServiceProvider::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QDeclarativeGeoServiceProvider::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QDeclarativeGeoServiceProvider.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "QQmlParserStatus"))
        return static_cast< QQmlParserStatus*>(this);
    if (!strcmp(_clname, "org.qt-project.Qt.QQmlParserStatus"))
        return static_cast< QQmlParserStatus*>(this);
    return QObject::qt_metacast(_clname);
}

int QDeclarativeGeoServiceProvider::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 8;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QDeclarativeGeoServiceProvider::nameChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QDeclarativeGeoServiceProvider::localesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void QDeclarativeGeoServiceProvider::attached()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void QDeclarativeGeoServiceProvider::preferredChanged(const QStringList & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QDeclarativeGeoServiceProvider::allowExperimentalChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
struct qt_meta_stringdata_QDeclarativeGeoServiceProviderRequirements_t {
    QByteArrayData data[19];
    char stringdata0[452];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QDeclarativeGeoServiceProviderRequirements_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QDeclarativeGeoServiceProviderRequirements_t qt_meta_stringdata_QDeclarativeGeoServiceProviderRequirements = {
    {
QT_MOC_LITERAL(0, 0, 42), // "QDeclarativeGeoServiceProvide..."
QT_MOC_LITERAL(1, 43, 26), // "mappingRequirementsChanged"
QT_MOC_LITERAL(2, 70, 0), // ""
QT_MOC_LITERAL(3, 71, 47), // "QDeclarativeGeoServiceProvide..."
QT_MOC_LITERAL(4, 119, 8), // "features"
QT_MOC_LITERAL(5, 128, 26), // "routingRequirementsChanged"
QT_MOC_LITERAL(6, 155, 47), // "QDeclarativeGeoServiceProvide..."
QT_MOC_LITERAL(7, 203, 28), // "geocodingRequirementsChanged"
QT_MOC_LITERAL(8, 232, 49), // "QDeclarativeGeoServiceProvide..."
QT_MOC_LITERAL(9, 282, 25), // "placesRequirementsChanged"
QT_MOC_LITERAL(10, 308, 46), // "QDeclarativeGeoServiceProvide..."
QT_MOC_LITERAL(11, 355, 19), // "requirementsChanged"
QT_MOC_LITERAL(12, 375, 7), // "matches"
QT_MOC_LITERAL(13, 383, 26), // "const QGeoServiceProvider*"
QT_MOC_LITERAL(14, 410, 8), // "provider"
QT_MOC_LITERAL(15, 419, 7), // "mapping"
QT_MOC_LITERAL(16, 427, 7), // "routing"
QT_MOC_LITERAL(17, 435, 9), // "geocoding"
QT_MOC_LITERAL(18, 445, 6) // "places"

    },
    "QDeclarativeGeoServiceProviderRequirements\0"
    "mappingRequirementsChanged\0\0"
    "QDeclarativeGeoServiceProvider::MappingFeatures\0"
    "features\0routingRequirementsChanged\0"
    "QDeclarativeGeoServiceProvider::RoutingFeatures\0"
    "geocodingRequirementsChanged\0"
    "QDeclarativeGeoServiceProvider::GeocodingFeatures\0"
    "placesRequirementsChanged\0"
    "QDeclarativeGeoServiceProvider::PlacesFeatures\0"
    "requirementsChanged\0matches\0"
    "const QGeoServiceProvider*\0provider\0"
    "mapping\0routing\0geocoding\0places"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QDeclarativeGeoServiceProviderRequirements[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       4,   60, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x06 /* Public */,
       5,    1,   47,    2, 0x06 /* Public */,
       7,    1,   50,    2, 0x06 /* Public */,
       9,    1,   53,    2, 0x06 /* Public */,
      11,    0,   56,    2, 0x06 /* Public */,

 // methods: name, argc, parameters, tag, flags
      12,    1,   57,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 6,    4,
    QMetaType::Void, 0x80000000 | 8,    4,
    QMetaType::Void, 0x80000000 | 10,    4,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Bool, 0x80000000 | 13,   14,

 // properties: name, type, flags
      15, 0x80000000 | 3, 0x0049500b,
      16, 0x80000000 | 6, 0x0049500b,
      17, 0x80000000 | 8, 0x0049500b,
      18, 0x80000000 | 10, 0x0049500b,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,

       0        // eod
};

void QDeclarativeGeoServiceProviderRequirements::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QDeclarativeGeoServiceProviderRequirements *_t = static_cast<QDeclarativeGeoServiceProviderRequirements *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->mappingRequirementsChanged((*reinterpret_cast< const QDeclarativeGeoServiceProvider::MappingFeatures(*)>(_a[1]))); break;
        case 1: _t->routingRequirementsChanged((*reinterpret_cast< const QDeclarativeGeoServiceProvider::RoutingFeatures(*)>(_a[1]))); break;
        case 2: _t->geocodingRequirementsChanged((*reinterpret_cast< const QDeclarativeGeoServiceProvider::GeocodingFeatures(*)>(_a[1]))); break;
        case 3: _t->placesRequirementsChanged((*reinterpret_cast< const QDeclarativeGeoServiceProvider::PlacesFeatures(*)>(_a[1]))); break;
        case 4: _t->requirementsChanged(); break;
        case 5: { bool _r = _t->matches((*reinterpret_cast< const QGeoServiceProvider*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QDeclarativeGeoServiceProviderRequirements::*_t)(const QDeclarativeGeoServiceProvider::MappingFeatures & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QDeclarativeGeoServiceProviderRequirements::mappingRequirementsChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QDeclarativeGeoServiceProviderRequirements::*_t)(const QDeclarativeGeoServiceProvider::RoutingFeatures & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QDeclarativeGeoServiceProviderRequirements::routingRequirementsChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QDeclarativeGeoServiceProviderRequirements::*_t)(const QDeclarativeGeoServiceProvider::GeocodingFeatures & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QDeclarativeGeoServiceProviderRequirements::geocodingRequirementsChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (QDeclarativeGeoServiceProviderRequirements::*_t)(const QDeclarativeGeoServiceProvider::PlacesFeatures & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QDeclarativeGeoServiceProviderRequirements::placesRequirementsChanged)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (QDeclarativeGeoServiceProviderRequirements::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QDeclarativeGeoServiceProviderRequirements::requirementsChanged)) {
                *result = 4;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QDeclarativeGeoServiceProviderRequirements *_t = static_cast<QDeclarativeGeoServiceProviderRequirements *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QDeclarativeGeoServiceProvider::MappingFeatures*>(_v) = _t->mappingRequirements(); break;
        case 1: *reinterpret_cast< QDeclarativeGeoServiceProvider::RoutingFeatures*>(_v) = _t->routingRequirements(); break;
        case 2: *reinterpret_cast< QDeclarativeGeoServiceProvider::GeocodingFeatures*>(_v) = _t->geocodingRequirements(); break;
        case 3: *reinterpret_cast< QDeclarativeGeoServiceProvider::PlacesFeatures*>(_v) = _t->placesRequirements(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QDeclarativeGeoServiceProviderRequirements *_t = static_cast<QDeclarativeGeoServiceProviderRequirements *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setMappingRequirements(*reinterpret_cast< QDeclarativeGeoServiceProvider::MappingFeatures*>(_v)); break;
        case 1: _t->setRoutingRequirements(*reinterpret_cast< QDeclarativeGeoServiceProvider::RoutingFeatures*>(_v)); break;
        case 2: _t->setGeocodingRequirements(*reinterpret_cast< QDeclarativeGeoServiceProvider::GeocodingFeatures*>(_v)); break;
        case 3: _t->setPlacesRequirements(*reinterpret_cast< QDeclarativeGeoServiceProvider::PlacesFeatures*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

static const QMetaObject * const qt_meta_extradata_QDeclarativeGeoServiceProviderRequirements[] = {
        &QDeclarativeGeoServiceProvider::staticMetaObject,
    nullptr
};

const QMetaObject QDeclarativeGeoServiceProviderRequirements::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QDeclarativeGeoServiceProviderRequirements.data,
      qt_meta_data_QDeclarativeGeoServiceProviderRequirements,  qt_static_metacall, qt_meta_extradata_QDeclarativeGeoServiceProviderRequirements, nullptr}
};


const QMetaObject *QDeclarativeGeoServiceProviderRequirements::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QDeclarativeGeoServiceProviderRequirements::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QDeclarativeGeoServiceProviderRequirements.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QDeclarativeGeoServiceProviderRequirements::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 4;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QDeclarativeGeoServiceProviderRequirements::mappingRequirementsChanged(const QDeclarativeGeoServiceProvider::MappingFeatures & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QDeclarativeGeoServiceProviderRequirements::routingRequirementsChanged(const QDeclarativeGeoServiceProvider::RoutingFeatures & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QDeclarativeGeoServiceProviderRequirements::geocodingRequirementsChanged(const QDeclarativeGeoServiceProvider::GeocodingFeatures & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QDeclarativeGeoServiceProviderRequirements::placesRequirementsChanged(const QDeclarativeGeoServiceProvider::PlacesFeatures & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QDeclarativeGeoServiceProviderRequirements::requirementsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
