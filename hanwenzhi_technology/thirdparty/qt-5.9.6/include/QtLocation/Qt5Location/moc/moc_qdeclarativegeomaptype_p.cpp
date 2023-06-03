/****************************************************************************
** Meta object code from reading C++ file 'qdeclarativegeomaptype_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../5.9.6/QtLocation/private/qdeclarativegeomaptype_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qdeclarativegeomaptype_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QDeclarativeGeoMapType_t {
    QByteArrayData data[19];
    char stringdata0[214];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QDeclarativeGeoMapType_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QDeclarativeGeoMapType_t qt_meta_stringdata_QDeclarativeGeoMapType = {
    {
QT_MOC_LITERAL(0, 0, 22), // "QDeclarativeGeoMapType"
QT_MOC_LITERAL(1, 23, 5), // "style"
QT_MOC_LITERAL(2, 29, 8), // "MapStyle"
QT_MOC_LITERAL(3, 38, 4), // "name"
QT_MOC_LITERAL(4, 43, 11), // "description"
QT_MOC_LITERAL(5, 55, 6), // "mobile"
QT_MOC_LITERAL(6, 62, 5), // "night"
QT_MOC_LITERAL(7, 68, 5), // "NoMap"
QT_MOC_LITERAL(8, 74, 9), // "StreetMap"
QT_MOC_LITERAL(9, 84, 15), // "SatelliteMapDay"
QT_MOC_LITERAL(10, 100, 17), // "SatelliteMapNight"
QT_MOC_LITERAL(11, 118, 10), // "TerrainMap"
QT_MOC_LITERAL(12, 129, 9), // "HybridMap"
QT_MOC_LITERAL(13, 139, 10), // "TransitMap"
QT_MOC_LITERAL(14, 150, 13), // "GrayStreetMap"
QT_MOC_LITERAL(15, 164, 13), // "PedestrianMap"
QT_MOC_LITERAL(16, 178, 16), // "CarNavigationMap"
QT_MOC_LITERAL(17, 195, 8), // "CycleMap"
QT_MOC_LITERAL(18, 204, 9) // "CustomMap"

    },
    "QDeclarativeGeoMapType\0style\0MapStyle\0"
    "name\0description\0mobile\0night\0NoMap\0"
    "StreetMap\0SatelliteMapDay\0SatelliteMapNight\0"
    "TerrainMap\0HybridMap\0TransitMap\0"
    "GrayStreetMap\0PedestrianMap\0"
    "CarNavigationMap\0CycleMap\0CustomMap"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QDeclarativeGeoMapType[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       5,   14, // properties
       1,   34, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, 0x80000000 | 2, 0x00095409,
       3, QMetaType::QString, 0x00095401,
       4, QMetaType::QString, 0x00095401,
       5, QMetaType::Bool, 0x00095401,
       6, QMetaType::Bool, 0x00895401,

 // properties: revision
       0,
       0,
       0,
       0,
       1,

 // enums: name, flags, count, data
       2, 0x0,   12,   38,

 // enum data: key, value
       7, uint(QDeclarativeGeoMapType::NoMap),
       8, uint(QDeclarativeGeoMapType::StreetMap),
       9, uint(QDeclarativeGeoMapType::SatelliteMapDay),
      10, uint(QDeclarativeGeoMapType::SatelliteMapNight),
      11, uint(QDeclarativeGeoMapType::TerrainMap),
      12, uint(QDeclarativeGeoMapType::HybridMap),
      13, uint(QDeclarativeGeoMapType::TransitMap),
      14, uint(QDeclarativeGeoMapType::GrayStreetMap),
      15, uint(QDeclarativeGeoMapType::PedestrianMap),
      16, uint(QDeclarativeGeoMapType::CarNavigationMap),
      17, uint(QDeclarativeGeoMapType::CycleMap),
      18, uint(QDeclarativeGeoMapType::CustomMap),

       0        // eod
};

void QDeclarativeGeoMapType::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{

#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty) {
        QDeclarativeGeoMapType *_t = static_cast<QDeclarativeGeoMapType *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< MapStyle*>(_v) = _t->style(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->name(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->description(); break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->mobile(); break;
        case 4: *reinterpret_cast< bool*>(_v) = _t->night(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject QDeclarativeGeoMapType::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QDeclarativeGeoMapType.data,
      qt_meta_data_QDeclarativeGeoMapType,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QDeclarativeGeoMapType::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QDeclarativeGeoMapType::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QDeclarativeGeoMapType.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QDeclarativeGeoMapType::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
   if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 5;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
