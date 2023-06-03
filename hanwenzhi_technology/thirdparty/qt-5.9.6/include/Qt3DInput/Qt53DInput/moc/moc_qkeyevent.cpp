/****************************************************************************
** Meta object code from reading C++ file 'qkeyevent.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../qkeyevent.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qkeyevent.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Qt3DInput__QKeyEvent_t {
    QByteArrayData data[12];
    char stringdata0[123];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Qt3DInput__QKeyEvent_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Qt3DInput__QKeyEvent_t qt_meta_stringdata_Qt3DInput__QKeyEvent = {
    {
QT_MOC_LITERAL(0, 0, 20), // "Qt3DInput::QKeyEvent"
QT_MOC_LITERAL(1, 21, 7), // "matches"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 25), // "QKeySequence::StandardKey"
QT_MOC_LITERAL(4, 56, 4), // "key_"
QT_MOC_LITERAL(5, 61, 3), // "key"
QT_MOC_LITERAL(6, 65, 4), // "text"
QT_MOC_LITERAL(7, 70, 9), // "modifiers"
QT_MOC_LITERAL(8, 80, 12), // "isAutoRepeat"
QT_MOC_LITERAL(9, 93, 5), // "count"
QT_MOC_LITERAL(10, 99, 14), // "nativeScanCode"
QT_MOC_LITERAL(11, 114, 8) // "accepted"

    },
    "Qt3DInput::QKeyEvent\0matches\0\0"
    "QKeySequence::StandardKey\0key_\0key\0"
    "text\0modifiers\0isAutoRepeat\0count\0"
    "nativeScanCode\0accepted"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Qt3DInput__QKeyEvent[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       7,   22, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // methods: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x02 /* Public */,

 // methods: parameters
    QMetaType::Bool, 0x80000000 | 3,    4,

 // properties: name, type, flags
       5, QMetaType::Int, 0x00095401,
       6, QMetaType::QString, 0x00095401,
       7, QMetaType::Int, 0x00095401,
       8, QMetaType::Bool, 0x00095401,
       9, QMetaType::Int, 0x00095401,
      10, QMetaType::UInt, 0x00095401,
      11, QMetaType::Bool, 0x00095103,

       0        // eod
};

void Qt3DInput::QKeyEvent::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QKeyEvent *_t = static_cast<QKeyEvent *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: { bool _r = _t->matches((*reinterpret_cast< QKeySequence::StandardKey(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QKeyEvent *_t = static_cast<QKeyEvent *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->key(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->text(); break;
        case 2: *reinterpret_cast< int*>(_v) = _t->modifiers(); break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->isAutoRepeat(); break;
        case 4: *reinterpret_cast< int*>(_v) = _t->count(); break;
        case 5: *reinterpret_cast< quint32*>(_v) = _t->nativeScanCode(); break;
        case 6: *reinterpret_cast< bool*>(_v) = _t->isAccepted(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QKeyEvent *_t = static_cast<QKeyEvent *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 6: _t->setAccepted(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject Qt3DInput::QKeyEvent::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Qt3DInput__QKeyEvent.data,
      qt_meta_data_Qt3DInput__QKeyEvent,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Qt3DInput::QKeyEvent::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Qt3DInput::QKeyEvent::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Qt3DInput__QKeyEvent.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Qt3DInput::QKeyEvent::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 7;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
