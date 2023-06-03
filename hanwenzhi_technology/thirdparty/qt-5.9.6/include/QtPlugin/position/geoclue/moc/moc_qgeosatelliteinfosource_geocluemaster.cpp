/****************************************************************************
** Meta object code from reading C++ file 'qgeosatelliteinfosource_geocluemaster.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../qgeosatelliteinfosource_geocluemaster.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgeosatelliteinfosource_geocluemaster.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QGeoSatelliteInfoSourceGeoclueMaster_t {
    QByteArrayData data[21];
    char stringdata0[301];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QGeoSatelliteInfoSourceGeoclueMaster_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QGeoSatelliteInfoSourceGeoclueMaster_t qt_meta_stringdata_QGeoSatelliteInfoSourceGeoclueMaster = {
    {
QT_MOC_LITERAL(0, 0, 36), // "QGeoSatelliteInfoSourceGeoclu..."
QT_MOC_LITERAL(1, 37, 23), // "positionProviderChanged"
QT_MOC_LITERAL(2, 61, 0), // ""
QT_MOC_LITERAL(3, 62, 4), // "name"
QT_MOC_LITERAL(4, 67, 11), // "description"
QT_MOC_LITERAL(5, 79, 7), // "service"
QT_MOC_LITERAL(6, 87, 4), // "path"
QT_MOC_LITERAL(7, 92, 20), // "requestUpdateTimeout"
QT_MOC_LITERAL(8, 113, 20), // "getSatelliteFinished"
QT_MOC_LITERAL(9, 134, 24), // "QDBusPendingCallWatcher*"
QT_MOC_LITERAL(10, 159, 7), // "watcher"
QT_MOC_LITERAL(11, 167, 16), // "satelliteChanged"
QT_MOC_LITERAL(12, 184, 9), // "timestamp"
QT_MOC_LITERAL(13, 194, 14), // "satellitesUsed"
QT_MOC_LITERAL(14, 209, 17), // "satellitesVisible"
QT_MOC_LITERAL(15, 227, 10), // "QList<int>"
QT_MOC_LITERAL(16, 238, 7), // "usedPrn"
QT_MOC_LITERAL(17, 246, 24), // "QList<QGeoSatelliteInfo>"
QT_MOC_LITERAL(18, 271, 8), // "satInfos"
QT_MOC_LITERAL(19, 280, 12), // "QDBusMessage"
QT_MOC_LITERAL(20, 293, 7) // "message"

    },
    "QGeoSatelliteInfoSourceGeoclueMaster\0"
    "positionProviderChanged\0\0name\0description\0"
    "service\0path\0requestUpdateTimeout\0"
    "getSatelliteFinished\0QDBusPendingCallWatcher*\0"
    "watcher\0satelliteChanged\0timestamp\0"
    "satellitesUsed\0satellitesVisible\0"
    "QList<int>\0usedPrn\0QList<QGeoSatelliteInfo>\0"
    "satInfos\0QDBusMessage\0message"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QGeoSatelliteInfoSourceGeoclueMaster[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    4,   39,    2, 0x08 /* Private */,
       7,    0,   48,    2, 0x08 /* Private */,
       8,    1,   49,    2, 0x08 /* Private */,
      11,    5,   52,    2, 0x08 /* Private */,
      11,    1,   63,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString,    3,    4,    5,    6,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int, 0x80000000 | 15, 0x80000000 | 17,   12,   13,   14,   16,   18,
    QMetaType::Void, 0x80000000 | 19,   20,

       0        // eod
};

void QGeoSatelliteInfoSourceGeoclueMaster::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QGeoSatelliteInfoSourceGeoclueMaster *_t = static_cast<QGeoSatelliteInfoSourceGeoclueMaster *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->positionProviderChanged((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4]))); break;
        case 1: _t->requestUpdateTimeout(); break;
        case 2: _t->getSatelliteFinished((*reinterpret_cast< QDBusPendingCallWatcher*(*)>(_a[1]))); break;
        case 3: _t->satelliteChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< const QList<int>(*)>(_a[4])),(*reinterpret_cast< const QList<QGeoSatelliteInfo>(*)>(_a[5]))); break;
        case 4: _t->satelliteChanged((*reinterpret_cast< const QDBusMessage(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 4:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<QGeoSatelliteInfo> >(); break;
            case 3:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<int> >(); break;
            }
            break;
        }
    }
}

const QMetaObject QGeoSatelliteInfoSourceGeoclueMaster::staticMetaObject = {
    { &QGeoSatelliteInfoSource::staticMetaObject, qt_meta_stringdata_QGeoSatelliteInfoSourceGeoclueMaster.data,
      qt_meta_data_QGeoSatelliteInfoSourceGeoclueMaster,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QGeoSatelliteInfoSourceGeoclueMaster::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QGeoSatelliteInfoSourceGeoclueMaster::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QGeoSatelliteInfoSourceGeoclueMaster.stringdata0))
        return static_cast<void*>(this);
    return QGeoSatelliteInfoSource::qt_metacast(_clname);
}

int QGeoSatelliteInfoSourceGeoclueMaster::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGeoSatelliteInfoSource::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
