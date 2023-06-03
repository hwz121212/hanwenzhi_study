/****************************************************************************
** Meta object code from reading C++ file 'qmouseevent.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../qmouseevent.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qmouseevent.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Qt3DInput__QMouseEvent_t {
    QByteArrayData data[23];
    char stringdata0[290];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Qt3DInput__QMouseEvent_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Qt3DInput__QMouseEvent_t qt_meta_stringdata_Qt3DInput__QMouseEvent = {
    {
QT_MOC_LITERAL(0, 0, 22), // "Qt3DInput::QMouseEvent"
QT_MOC_LITERAL(1, 23, 1), // "x"
QT_MOC_LITERAL(2, 25, 1), // "y"
QT_MOC_LITERAL(3, 27, 7), // "wasHeld"
QT_MOC_LITERAL(4, 35, 6), // "button"
QT_MOC_LITERAL(5, 42, 31), // "Qt3DInput::QMouseEvent::Buttons"
QT_MOC_LITERAL(6, 74, 7), // "buttons"
QT_MOC_LITERAL(7, 82, 9), // "modifiers"
QT_MOC_LITERAL(8, 92, 33), // "Qt3DInput::QMouseEvent::Modif..."
QT_MOC_LITERAL(9, 126, 8), // "accepted"
QT_MOC_LITERAL(10, 135, 7), // "Buttons"
QT_MOC_LITERAL(11, 143, 10), // "LeftButton"
QT_MOC_LITERAL(12, 154, 11), // "RightButton"
QT_MOC_LITERAL(13, 166, 12), // "MiddleButton"
QT_MOC_LITERAL(14, 179, 10), // "BackButton"
QT_MOC_LITERAL(15, 190, 8), // "NoButton"
QT_MOC_LITERAL(16, 199, 9), // "Modifiers"
QT_MOC_LITERAL(17, 209, 10), // "NoModifier"
QT_MOC_LITERAL(18, 220, 13), // "ShiftModifier"
QT_MOC_LITERAL(19, 234, 15), // "ControlModifier"
QT_MOC_LITERAL(20, 250, 11), // "AltModifier"
QT_MOC_LITERAL(21, 262, 12), // "MetaModifier"
QT_MOC_LITERAL(22, 275, 14) // "KeypadModifier"

    },
    "Qt3DInput::QMouseEvent\0x\0y\0wasHeld\0"
    "button\0Qt3DInput::QMouseEvent::Buttons\0"
    "buttons\0modifiers\0Qt3DInput::QMouseEvent::Modifiers\0"
    "accepted\0Buttons\0LeftButton\0RightButton\0"
    "MiddleButton\0BackButton\0NoButton\0"
    "Modifiers\0NoModifier\0ShiftModifier\0"
    "ControlModifier\0AltModifier\0MetaModifier\0"
    "KeypadModifier"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Qt3DInput__QMouseEvent[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       7,   14, // properties
       2,   35, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, QMetaType::Int, 0x00095401,
       2, QMetaType::Int, 0x00095401,
       3, QMetaType::Bool, 0x00095401,
       4, 0x80000000 | 5, 0x00095409,
       6, QMetaType::Int, 0x00095401,
       7, 0x80000000 | 8, 0x00095409,
       9, QMetaType::Bool, 0x00095103,

 // enums: name, flags, count, data
      10, 0x0,    5,   43,
      16, 0x0,    6,   53,

 // enum data: key, value
      11, uint(Qt3DInput::QMouseEvent::LeftButton),
      12, uint(Qt3DInput::QMouseEvent::RightButton),
      13, uint(Qt3DInput::QMouseEvent::MiddleButton),
      14, uint(Qt3DInput::QMouseEvent::BackButton),
      15, uint(Qt3DInput::QMouseEvent::NoButton),
      17, uint(Qt3DInput::QMouseEvent::NoModifier),
      18, uint(Qt3DInput::QMouseEvent::ShiftModifier),
      19, uint(Qt3DInput::QMouseEvent::ControlModifier),
      20, uint(Qt3DInput::QMouseEvent::AltModifier),
      21, uint(Qt3DInput::QMouseEvent::MetaModifier),
      22, uint(Qt3DInput::QMouseEvent::KeypadModifier),

       0        // eod
};

void Qt3DInput::QMouseEvent::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{

#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty) {
        QMouseEvent *_t = static_cast<QMouseEvent *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->x(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->y(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->wasHeld(); break;
        case 3: *reinterpret_cast< Qt3DInput::QMouseEvent::Buttons*>(_v) = _t->button(); break;
        case 4: *reinterpret_cast< int*>(_v) = _t->buttons(); break;
        case 5: *reinterpret_cast< Qt3DInput::QMouseEvent::Modifiers*>(_v) = _t->modifiers(); break;
        case 6: *reinterpret_cast< bool*>(_v) = _t->isAccepted(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QMouseEvent *_t = static_cast<QMouseEvent *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 6: _t->setAccepted(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject Qt3DInput::QMouseEvent::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Qt3DInput__QMouseEvent.data,
      qt_meta_data_Qt3DInput__QMouseEvent,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Qt3DInput::QMouseEvent::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Qt3DInput::QMouseEvent::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Qt3DInput__QMouseEvent.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Qt3DInput::QMouseEvent::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
   if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
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
struct qt_meta_stringdata_Qt3DInput__QWheelEvent_t {
    QByteArrayData data[21];
    char stringdata0[254];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Qt3DInput__QWheelEvent_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Qt3DInput__QWheelEvent_t qt_meta_stringdata_Qt3DInput__QWheelEvent = {
    {
QT_MOC_LITERAL(0, 0, 22), // "Qt3DInput::QWheelEvent"
QT_MOC_LITERAL(1, 23, 1), // "x"
QT_MOC_LITERAL(2, 25, 1), // "y"
QT_MOC_LITERAL(3, 27, 10), // "angleDelta"
QT_MOC_LITERAL(4, 38, 7), // "buttons"
QT_MOC_LITERAL(5, 46, 9), // "modifiers"
QT_MOC_LITERAL(6, 56, 33), // "Qt3DInput::QWheelEvent::Modif..."
QT_MOC_LITERAL(7, 90, 8), // "accepted"
QT_MOC_LITERAL(8, 99, 7), // "Buttons"
QT_MOC_LITERAL(9, 107, 10), // "LeftButton"
QT_MOC_LITERAL(10, 118, 11), // "RightButton"
QT_MOC_LITERAL(11, 130, 12), // "MiddleButton"
QT_MOC_LITERAL(12, 143, 10), // "BackButton"
QT_MOC_LITERAL(13, 154, 8), // "NoButton"
QT_MOC_LITERAL(14, 163, 9), // "Modifiers"
QT_MOC_LITERAL(15, 173, 10), // "NoModifier"
QT_MOC_LITERAL(16, 184, 13), // "ShiftModifier"
QT_MOC_LITERAL(17, 198, 15), // "ControlModifier"
QT_MOC_LITERAL(18, 214, 11), // "AltModifier"
QT_MOC_LITERAL(19, 226, 12), // "MetaModifier"
QT_MOC_LITERAL(20, 239, 14) // "KeypadModifier"

    },
    "Qt3DInput::QWheelEvent\0x\0y\0angleDelta\0"
    "buttons\0modifiers\0Qt3DInput::QWheelEvent::Modifiers\0"
    "accepted\0Buttons\0LeftButton\0RightButton\0"
    "MiddleButton\0BackButton\0NoButton\0"
    "Modifiers\0NoModifier\0ShiftModifier\0"
    "ControlModifier\0AltModifier\0MetaModifier\0"
    "KeypadModifier"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Qt3DInput__QWheelEvent[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       6,   14, // properties
       2,   32, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, QMetaType::Int, 0x00095401,
       2, QMetaType::Int, 0x00095401,
       3, QMetaType::QPoint, 0x00095401,
       4, QMetaType::Int, 0x00095401,
       5, 0x80000000 | 6, 0x00095409,
       7, QMetaType::Bool, 0x00095103,

 // enums: name, flags, count, data
       8, 0x0,    5,   40,
      14, 0x0,    6,   50,

 // enum data: key, value
       9, uint(Qt3DInput::QWheelEvent::LeftButton),
      10, uint(Qt3DInput::QWheelEvent::RightButton),
      11, uint(Qt3DInput::QWheelEvent::MiddleButton),
      12, uint(Qt3DInput::QWheelEvent::BackButton),
      13, uint(Qt3DInput::QWheelEvent::NoButton),
      15, uint(Qt3DInput::QWheelEvent::NoModifier),
      16, uint(Qt3DInput::QWheelEvent::ShiftModifier),
      17, uint(Qt3DInput::QWheelEvent::ControlModifier),
      18, uint(Qt3DInput::QWheelEvent::AltModifier),
      19, uint(Qt3DInput::QWheelEvent::MetaModifier),
      20, uint(Qt3DInput::QWheelEvent::KeypadModifier),

       0        // eod
};

void Qt3DInput::QWheelEvent::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{

#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty) {
        QWheelEvent *_t = static_cast<QWheelEvent *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->x(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->y(); break;
        case 2: *reinterpret_cast< QPoint*>(_v) = _t->angleDelta(); break;
        case 3: *reinterpret_cast< int*>(_v) = _t->buttons(); break;
        case 4: *reinterpret_cast< Qt3DInput::QWheelEvent::Modifiers*>(_v) = _t->modifiers(); break;
        case 5: *reinterpret_cast< bool*>(_v) = _t->isAccepted(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QWheelEvent *_t = static_cast<QWheelEvent *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 5: _t->setAccepted(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject Qt3DInput::QWheelEvent::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Qt3DInput__QWheelEvent.data,
      qt_meta_data_Qt3DInput__QWheelEvent,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Qt3DInput::QWheelEvent::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Qt3DInput::QWheelEvent::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Qt3DInput__QWheelEvent.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Qt3DInput::QWheelEvent::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
   if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 6;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
