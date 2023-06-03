/****************************************************************************
** Meta object code from reading C++ file 'qgeopositioninfosource_geocluemaster.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../qgeopositioninfosource_geocluemaster.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgeopositioninfosource_geocluemaster.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QGeoPositionInfoSourceGeoclueMaster_t {
    QByteArrayData data[23];
    char stringdata0[282];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QGeoPositionInfoSourceGeoclueMaster_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QGeoPositionInfoSourceGeoclueMaster_t qt_meta_stringdata_QGeoPositionInfoSourceGeoclueMaster = {
    {
QT_MOC_LITERAL(0, 0, 35), // "QGeoPositionInfoSourceGeoclue..."
QT_MOC_LITERAL(1, 36, 23), // "positionProviderChanged"
QT_MOC_LITERAL(2, 60, 0), // ""
QT_MOC_LITERAL(3, 61, 4), // "name"
QT_MOC_LITERAL(4, 66, 11), // "description"
QT_MOC_LITERAL(5, 78, 7), // "service"
QT_MOC_LITERAL(6, 86, 4), // "path"
QT_MOC_LITERAL(7, 91, 20), // "requestUpdateTimeout"
QT_MOC_LITERAL(8, 112, 19), // "getPositionFinished"
QT_MOC_LITERAL(9, 132, 24), // "QDBusPendingCallWatcher*"
QT_MOC_LITERAL(10, 157, 7), // "watcher"
QT_MOC_LITERAL(11, 165, 15), // "positionChanged"
QT_MOC_LITERAL(12, 181, 6), // "fields"
QT_MOC_LITERAL(13, 188, 9), // "timestamp"
QT_MOC_LITERAL(14, 198, 8), // "latitude"
QT_MOC_LITERAL(15, 207, 9), // "longitude"
QT_MOC_LITERAL(16, 217, 8), // "altitude"
QT_MOC_LITERAL(17, 226, 8), // "Accuracy"
QT_MOC_LITERAL(18, 235, 8), // "accuracy"
QT_MOC_LITERAL(19, 244, 15), // "velocityChanged"
QT_MOC_LITERAL(20, 260, 5), // "speed"
QT_MOC_LITERAL(21, 266, 9), // "direction"
QT_MOC_LITERAL(22, 276, 5) // "climb"

    },
    "QGeoPositionInfoSourceGeoclueMaster\0"
    "positionProviderChanged\0\0name\0description\0"
    "service\0path\0requestUpdateTimeout\0"
    "getPositionFinished\0QDBusPendingCallWatcher*\0"
    "watcher\0positionChanged\0fields\0timestamp\0"
    "latitude\0longitude\0altitude\0Accuracy\0"
    "accuracy\0velocityChanged\0speed\0direction\0"
    "climb"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QGeoPositionInfoSourceGeoclueMaster[] = {

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
      11,    6,   52,    2, 0x08 /* Private */,
      19,    5,   65,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString,    3,    4,    5,    6,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Double, QMetaType::Double, QMetaType::Double, 0x80000000 | 17,   12,   13,   14,   15,   16,   18,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Double, QMetaType::Double, QMetaType::Double,   12,   13,   20,   21,   22,

       0        // eod
};

void QGeoPositionInfoSourceGeoclueMaster::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QGeoPositionInfoSourceGeoclueMaster *_t = static_cast<QGeoPositionInfoSourceGeoclueMaster *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->positionProviderChanged((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4]))); break;
        case 1: _t->requestUpdateTimeout(); break;
        case 2: _t->getPositionFinished((*reinterpret_cast< QDBusPendingCallWatcher*(*)>(_a[1]))); break;
        case 3: _t->positionChanged((*reinterpret_cast< qint32(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4])),(*reinterpret_cast< double(*)>(_a[5])),(*reinterpret_cast< const Accuracy(*)>(_a[6]))); break;
        case 4: _t->velocityChanged((*reinterpret_cast< qint32(*)>(_a[1])),(*reinterpret_cast< qint32(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4])),(*reinterpret_cast< double(*)>(_a[5]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 5:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Accuracy >(); break;
            }
            break;
        }
    }
}

const QMetaObject QGeoPositionInfoSourceGeoclueMaster::staticMetaObject = {
    { &QGeoPositionInfoSource::staticMetaObject, qt_meta_stringdata_QGeoPositionInfoSourceGeoclueMaster.data,
      qt_meta_data_QGeoPositionInfoSourceGeoclueMaster,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QGeoPositionInfoSourceGeoclueMaster::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QGeoPositionInfoSourceGeoclueMaster::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QGeoPositionInfoSourceGeoclueMaster.stringdata0))
        return static_cast<void*>(this);
    return QGeoPositionInfoSource::qt_metacast(_clname);
}

int QGeoPositionInfoSourceGeoclueMaster::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGeoPositionInfoSource::qt_metacall(_c, _id, _a);
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
