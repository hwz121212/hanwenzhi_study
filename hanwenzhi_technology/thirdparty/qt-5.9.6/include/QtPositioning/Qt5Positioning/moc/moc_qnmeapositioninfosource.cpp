/****************************************************************************
** Meta object code from reading C++ file 'qnmeapositioninfosource.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../qnmeapositioninfosource.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qnmeapositioninfosource.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QNmeaPositionInfoSource_t {
    QByteArrayData data[6];
    char stringdata0[72];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QNmeaPositionInfoSource_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QNmeaPositionInfoSource_t qt_meta_stringdata_QNmeaPositionInfoSource = {
    {
QT_MOC_LITERAL(0, 0, 23), // "QNmeaPositionInfoSource"
QT_MOC_LITERAL(1, 24, 12), // "startUpdates"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 11), // "stopUpdates"
QT_MOC_LITERAL(4, 50, 13), // "requestUpdate"
QT_MOC_LITERAL(5, 64, 7) // "timeout"

    },
    "QNmeaPositionInfoSource\0startUpdates\0"
    "\0stopUpdates\0requestUpdate\0timeout"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QNmeaPositionInfoSource[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x0a /* Public */,
       3,    0,   35,    2, 0x0a /* Public */,
       4,    1,   36,    2, 0x0a /* Public */,
       4,    0,   39,    2, 0x2a /* Public | MethodCloned */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void,

       0        // eod
};

void QNmeaPositionInfoSource::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QNmeaPositionInfoSource *_t = static_cast<QNmeaPositionInfoSource *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->startUpdates(); break;
        case 1: _t->stopUpdates(); break;
        case 2: _t->requestUpdate((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->requestUpdate(); break;
        default: ;
        }
    }
}

const QMetaObject QNmeaPositionInfoSource::staticMetaObject = {
    { &QGeoPositionInfoSource::staticMetaObject, qt_meta_stringdata_QNmeaPositionInfoSource.data,
      qt_meta_data_QNmeaPositionInfoSource,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QNmeaPositionInfoSource::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QNmeaPositionInfoSource::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QNmeaPositionInfoSource.stringdata0))
        return static_cast<void*>(this);
    return QGeoPositionInfoSource::qt_metacast(_clname);
}

int QNmeaPositionInfoSource::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGeoPositionInfoSource::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
