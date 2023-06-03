/****************************************************************************
** Meta object code from reading C++ file 'eventconnection_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../eventconnection_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'eventconnection_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QScxmlEventConnection_t {
    QByteArrayData data[10];
    char stringdata0[124];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QScxmlEventConnection_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QScxmlEventConnection_t qt_meta_stringdata_QScxmlEventConnection = {
    {
QT_MOC_LITERAL(0, 0, 21), // "QScxmlEventConnection"
QT_MOC_LITERAL(1, 22, 13), // "eventsChanged"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 19), // "stateMachineChanged"
QT_MOC_LITERAL(4, 57, 8), // "occurred"
QT_MOC_LITERAL(5, 66, 11), // "QScxmlEvent"
QT_MOC_LITERAL(6, 78, 5), // "event"
QT_MOC_LITERAL(7, 84, 6), // "events"
QT_MOC_LITERAL(8, 91, 12), // "stateMachine"
QT_MOC_LITERAL(9, 104, 19) // "QScxmlStateMachine*"

    },
    "QScxmlEventConnection\0eventsChanged\0"
    "\0stateMachineChanged\0occurred\0QScxmlEvent\0"
    "event\0events\0stateMachine\0QScxmlStateMachine*"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QScxmlEventConnection[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       2,   34, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x06 /* Public */,
       3,    0,   30,    2, 0x06 /* Public */,
       4,    1,   31,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5,    6,

 // properties: name, type, flags
       7, QMetaType::QStringList, 0x00495103,
       8, 0x80000000 | 9, 0x0049510b,

 // properties: notify_signal_id
       0,
       1,

       0        // eod
};

void QScxmlEventConnection::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QScxmlEventConnection *_t = static_cast<QScxmlEventConnection *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->eventsChanged(); break;
        case 1: _t->stateMachineChanged(); break;
        case 2: _t->occurred((*reinterpret_cast< const QScxmlEvent(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QScxmlEvent >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QScxmlEventConnection::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QScxmlEventConnection::eventsChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QScxmlEventConnection::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QScxmlEventConnection::stateMachineChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QScxmlEventConnection::*_t)(const QScxmlEvent & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QScxmlEventConnection::occurred)) {
                *result = 2;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QScxmlStateMachine* >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QScxmlEventConnection *_t = static_cast<QScxmlEventConnection *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QStringList*>(_v) = _t->events(); break;
        case 1: *reinterpret_cast< QScxmlStateMachine**>(_v) = _t->stateMachine(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QScxmlEventConnection *_t = static_cast<QScxmlEventConnection *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setEvents(*reinterpret_cast< QStringList*>(_v)); break;
        case 1: _t->setStateMachine(*reinterpret_cast< QScxmlStateMachine**>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QScxmlEventConnection::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QScxmlEventConnection.data,
      qt_meta_data_QScxmlEventConnection,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QScxmlEventConnection::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QScxmlEventConnection::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QScxmlEventConnection.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "QQmlParserStatus"))
        return static_cast< QQmlParserStatus*>(this);
    if (!strcmp(_clname, "org.qt-project.Qt.QQmlParserStatus"))
        return static_cast< QQmlParserStatus*>(this);
    return QObject::qt_metacast(_clname);
}

int QScxmlEventConnection::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            qt_static_metacall(this, _c, _id, _a);
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
void QScxmlEventConnection::eventsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QScxmlEventConnection::stateMachineChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void QScxmlEventConnection::occurred(const QScxmlEvent & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
