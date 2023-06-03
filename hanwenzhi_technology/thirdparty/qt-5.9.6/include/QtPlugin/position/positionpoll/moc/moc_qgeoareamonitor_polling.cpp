/****************************************************************************
** Meta object code from reading C++ file 'qgeoareamonitor_polling.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../qgeoareamonitor_polling.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgeoareamonitor_polling.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QGeoAreaMonitorPolling_t {
    QByteArrayData data[13];
    char stringdata0[171];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QGeoAreaMonitorPolling_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QGeoAreaMonitorPolling_t qt_meta_stringdata_QGeoAreaMonitorPolling = {
    {
QT_MOC_LITERAL(0, 0, 22), // "QGeoAreaMonitorPolling"
QT_MOC_LITERAL(1, 23, 13), // "positionError"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 29), // "QGeoPositionInfoSource::Error"
QT_MOC_LITERAL(4, 68, 5), // "error"
QT_MOC_LITERAL(5, 74, 7), // "timeout"
QT_MOC_LITERAL(6, 82, 19), // "QGeoAreaMonitorInfo"
QT_MOC_LITERAL(7, 102, 7), // "monitor"
QT_MOC_LITERAL(8, 110, 16), // "processAreaEvent"
QT_MOC_LITERAL(9, 127, 5), // "minfo"
QT_MOC_LITERAL(10, 133, 16), // "QGeoPositionInfo"
QT_MOC_LITERAL(11, 150, 5), // "pinfo"
QT_MOC_LITERAL(12, 156, 14) // "isEnteredEvent"

    },
    "QGeoAreaMonitorPolling\0positionError\0"
    "\0QGeoPositionInfoSource::Error\0error\0"
    "timeout\0QGeoAreaMonitorInfo\0monitor\0"
    "processAreaEvent\0minfo\0QGeoPositionInfo\0"
    "pinfo\0isEnteredEvent"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QGeoAreaMonitorPolling[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x08 /* Private */,
       5,    1,   32,    2, 0x08 /* Private */,
       8,    3,   35,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, 0x80000000 | 6, 0x80000000 | 10, QMetaType::Bool,    9,   11,   12,

       0        // eod
};

void QGeoAreaMonitorPolling::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QGeoAreaMonitorPolling *_t = static_cast<QGeoAreaMonitorPolling *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->positionError((*reinterpret_cast< QGeoPositionInfoSource::Error(*)>(_a[1]))); break;
        case 1: _t->timeout((*reinterpret_cast< const QGeoAreaMonitorInfo(*)>(_a[1]))); break;
        case 2: _t->processAreaEvent((*reinterpret_cast< const QGeoAreaMonitorInfo(*)>(_a[1])),(*reinterpret_cast< const QGeoPositionInfo(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        default: ;
        }
    }
}

const QMetaObject QGeoAreaMonitorPolling::staticMetaObject = {
    { &QGeoAreaMonitorSource::staticMetaObject, qt_meta_stringdata_QGeoAreaMonitorPolling.data,
      qt_meta_data_QGeoAreaMonitorPolling,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QGeoAreaMonitorPolling::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QGeoAreaMonitorPolling::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QGeoAreaMonitorPolling.stringdata0))
        return static_cast<void*>(this);
    return QGeoAreaMonitorSource::qt_metacast(_clname);
}

int QGeoAreaMonitorPolling::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGeoAreaMonitorSource::qt_metacall(_c, _id, _a);
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
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
