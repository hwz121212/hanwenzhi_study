/****************************************************************************
** Meta object code from reading C++ file 'qscxmlevent.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../qscxmlevent.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qscxmlevent.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QScxmlEvent_t {
    QByteArrayData data[18];
    char stringdata0[165];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QScxmlEvent_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QScxmlEvent_t qt_meta_stringdata_QScxmlEvent = {
    {
QT_MOC_LITERAL(0, 0, 11), // "QScxmlEvent"
QT_MOC_LITERAL(1, 12, 5), // "clear"
QT_MOC_LITERAL(2, 18, 0), // ""
QT_MOC_LITERAL(3, 19, 4), // "name"
QT_MOC_LITERAL(4, 24, 9), // "eventType"
QT_MOC_LITERAL(5, 34, 9), // "EventType"
QT_MOC_LITERAL(6, 44, 9), // "scxmlType"
QT_MOC_LITERAL(7, 54, 6), // "sendId"
QT_MOC_LITERAL(8, 61, 6), // "origin"
QT_MOC_LITERAL(9, 68, 10), // "originType"
QT_MOC_LITERAL(10, 79, 8), // "invokeId"
QT_MOC_LITERAL(11, 88, 5), // "delay"
QT_MOC_LITERAL(12, 94, 4), // "data"
QT_MOC_LITERAL(13, 99, 10), // "errorEvent"
QT_MOC_LITERAL(14, 110, 12), // "errorMessage"
QT_MOC_LITERAL(15, 123, 13), // "PlatformEvent"
QT_MOC_LITERAL(16, 137, 13), // "InternalEvent"
QT_MOC_LITERAL(17, 151, 13) // "ExternalEvent"

    },
    "QScxmlEvent\0clear\0\0name\0eventType\0"
    "EventType\0scxmlType\0sendId\0origin\0"
    "originType\0invokeId\0delay\0data\0"
    "errorEvent\0errorMessage\0PlatformEvent\0"
    "InternalEvent\0ExternalEvent"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QScxmlEvent[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
      11,   20, // properties
       1,   53, // enums/sets
       0,    0, // constructors
       4,       // flags
       0,       // signalCount

 // methods: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x02 /* Public */,

 // methods: parameters
    QMetaType::Void,

 // properties: name, type, flags
       3, QMetaType::QString, 0x00095103,
       4, 0x80000000 | 5, 0x0009510b,
       6, QMetaType::QString, 0x00095001,
       7, QMetaType::QString, 0x00095103,
       8, QMetaType::QString, 0x00095103,
       9, QMetaType::QString, 0x00095103,
      10, QMetaType::QString, 0x00095103,
      11, QMetaType::Int, 0x00095103,
      12, QMetaType::QVariant, 0x00095103,
      13, QMetaType::Bool, 0x00095001,
      14, QMetaType::QString, 0x00095103,

 // enums: name, flags, count, data
       5, 0x0,    3,   57,

 // enum data: key, value
      15, uint(QScxmlEvent::PlatformEvent),
      16, uint(QScxmlEvent::InternalEvent),
      17, uint(QScxmlEvent::ExternalEvent),

       0        // eod
};

void QScxmlEvent::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QScxmlEvent *_t = reinterpret_cast<QScxmlEvent *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->clear(); break;
        default: ;
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QScxmlEvent *_t = reinterpret_cast<QScxmlEvent *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->name(); break;
        case 1: *reinterpret_cast< EventType*>(_v) = _t->eventType(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->scxmlType(); break;
        case 3: *reinterpret_cast< QString*>(_v) = _t->sendId(); break;
        case 4: *reinterpret_cast< QString*>(_v) = _t->origin(); break;
        case 5: *reinterpret_cast< QString*>(_v) = _t->originType(); break;
        case 6: *reinterpret_cast< QString*>(_v) = _t->invokeId(); break;
        case 7: *reinterpret_cast< int*>(_v) = _t->delay(); break;
        case 8: *reinterpret_cast< QVariant*>(_v) = _t->data(); break;
        case 9: *reinterpret_cast< bool*>(_v) = _t->isErrorEvent(); break;
        case 10: *reinterpret_cast< QString*>(_v) = _t->errorMessage(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QScxmlEvent *_t = reinterpret_cast<QScxmlEvent *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setName(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setEventType(*reinterpret_cast< EventType*>(_v)); break;
        case 3: _t->setSendId(*reinterpret_cast< QString*>(_v)); break;
        case 4: _t->setOrigin(*reinterpret_cast< QString*>(_v)); break;
        case 5: _t->setOriginType(*reinterpret_cast< QString*>(_v)); break;
        case 6: _t->setInvokeId(*reinterpret_cast< QString*>(_v)); break;
        case 7: _t->setDelay(*reinterpret_cast< int*>(_v)); break;
        case 8: _t->setData(*reinterpret_cast< QVariant*>(_v)); break;
        case 10: _t->setErrorMessage(*reinterpret_cast< QString*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_a);
}

const QMetaObject QScxmlEvent::staticMetaObject = {
    { nullptr, qt_meta_stringdata_QScxmlEvent.data,
      qt_meta_data_QScxmlEvent,  qt_static_metacall, nullptr, nullptr}
};

QT_WARNING_POP
QT_END_MOC_NAMESPACE
