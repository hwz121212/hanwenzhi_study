/****************************************************************************
** Meta object code from reading C++ file 'qquickevents_p_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../5.9.6/QtQuick/private/qquickevents_p_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qquickevents_p_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QQuickKeyEvent_t {
    QByteArrayData data[11];
    char stringdata0[112];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QQuickKeyEvent_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QQuickKeyEvent_t qt_meta_stringdata_QQuickKeyEvent = {
    {
QT_MOC_LITERAL(0, 0, 14), // "QQuickKeyEvent"
QT_MOC_LITERAL(1, 15, 7), // "matches"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 25), // "QKeySequence::StandardKey"
QT_MOC_LITERAL(4, 50, 3), // "key"
QT_MOC_LITERAL(5, 54, 4), // "text"
QT_MOC_LITERAL(6, 59, 9), // "modifiers"
QT_MOC_LITERAL(7, 69, 12), // "isAutoRepeat"
QT_MOC_LITERAL(8, 82, 5), // "count"
QT_MOC_LITERAL(9, 88, 14), // "nativeScanCode"
QT_MOC_LITERAL(10, 103, 8) // "accepted"

    },
    "QQuickKeyEvent\0matches\0\0"
    "QKeySequence::StandardKey\0key\0text\0"
    "modifiers\0isAutoRepeat\0count\0"
    "nativeScanCode\0accepted"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QQuickKeyEvent[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       7,   23, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // methods: name, argc, parameters, tag, flags
       1,    1,   20,    2, 0x82 /* Public | MethodRevisioned */,

 // methods: revision
       2,

 // methods: parameters
    QMetaType::Bool, 0x80000000 | 3,    4,

 // properties: name, type, flags
       4, QMetaType::Int, 0x00095001,
       5, QMetaType::QString, 0x00095001,
       6, QMetaType::Int, 0x00095001,
       7, QMetaType::Bool, 0x00095001,
       8, QMetaType::Int, 0x00095001,
       9, QMetaType::UInt, 0x00095001,
      10, QMetaType::Bool, 0x00095103,

       0        // eod
};

void QQuickKeyEvent::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QQuickKeyEvent *_t = static_cast<QQuickKeyEvent *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: { bool _r = _t->matches((*reinterpret_cast< QKeySequence::StandardKey(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QQuickKeyEvent *_t = static_cast<QQuickKeyEvent *>(_o);
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
        QQuickKeyEvent *_t = static_cast<QQuickKeyEvent *>(_o);
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

const QMetaObject QQuickKeyEvent::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QQuickKeyEvent.data,
      qt_meta_data_QQuickKeyEvent,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QQuickKeyEvent::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QQuickKeyEvent::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QQuickKeyEvent.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QQuickKeyEvent::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_QQuickMouseEvent_t {
    QByteArrayData data[10];
    char stringdata0[78];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QQuickMouseEvent_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QQuickMouseEvent_t qt_meta_stringdata_QQuickMouseEvent = {
    {
QT_MOC_LITERAL(0, 0, 16), // "QQuickMouseEvent"
QT_MOC_LITERAL(1, 17, 1), // "x"
QT_MOC_LITERAL(2, 19, 1), // "y"
QT_MOC_LITERAL(3, 21, 6), // "button"
QT_MOC_LITERAL(4, 28, 7), // "buttons"
QT_MOC_LITERAL(5, 36, 9), // "modifiers"
QT_MOC_LITERAL(6, 46, 6), // "source"
QT_MOC_LITERAL(7, 53, 7), // "wasHeld"
QT_MOC_LITERAL(8, 61, 7), // "isClick"
QT_MOC_LITERAL(9, 69, 8) // "accepted"

    },
    "QQuickMouseEvent\0x\0y\0button\0buttons\0"
    "modifiers\0source\0wasHeld\0isClick\0"
    "accepted"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QQuickMouseEvent[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       9,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, QMetaType::QReal, 0x00095001,
       2, QMetaType::QReal, 0x00095001,
       3, QMetaType::Int, 0x00095001,
       4, QMetaType::Int, 0x00095001,
       5, QMetaType::Int, 0x00095001,
       6, QMetaType::Int, 0x00895001,
       7, QMetaType::Bool, 0x00095001,
       8, QMetaType::Bool, 0x00095001,
       9, QMetaType::Bool, 0x00095103,

 // properties: revision
       0,
       0,
       0,
       0,
       0,
       7,
       0,
       0,
       0,

       0        // eod
};

void QQuickMouseEvent::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{

#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty) {
        QQuickMouseEvent *_t = static_cast<QQuickMouseEvent *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< qreal*>(_v) = _t->x(); break;
        case 1: *reinterpret_cast< qreal*>(_v) = _t->y(); break;
        case 2: *reinterpret_cast< int*>(_v) = _t->button(); break;
        case 3: *reinterpret_cast< int*>(_v) = _t->buttons(); break;
        case 4: *reinterpret_cast< int*>(_v) = _t->modifiers(); break;
        case 5: *reinterpret_cast< int*>(_v) = _t->source(); break;
        case 6: *reinterpret_cast< bool*>(_v) = _t->wasHeld(); break;
        case 7: *reinterpret_cast< bool*>(_v) = _t->isClick(); break;
        case 8: *reinterpret_cast< bool*>(_v) = _t->isAccepted(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QQuickMouseEvent *_t = static_cast<QQuickMouseEvent *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 8: _t->setAccepted(*reinterpret_cast< bool*>(_v)); break;
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

const QMetaObject QQuickMouseEvent::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QQuickMouseEvent.data,
      qt_meta_data_QQuickMouseEvent,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QQuickMouseEvent::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QQuickMouseEvent::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QQuickMouseEvent.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QQuickMouseEvent::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
   if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 9;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
struct qt_meta_stringdata_QQuickWheelEvent_t {
    QByteArrayData data[9];
    char stringdata0[79];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QQuickWheelEvent_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QQuickWheelEvent_t qt_meta_stringdata_QQuickWheelEvent = {
    {
QT_MOC_LITERAL(0, 0, 16), // "QQuickWheelEvent"
QT_MOC_LITERAL(1, 17, 1), // "x"
QT_MOC_LITERAL(2, 19, 1), // "y"
QT_MOC_LITERAL(3, 21, 10), // "angleDelta"
QT_MOC_LITERAL(4, 32, 10), // "pixelDelta"
QT_MOC_LITERAL(5, 43, 7), // "buttons"
QT_MOC_LITERAL(6, 51, 9), // "modifiers"
QT_MOC_LITERAL(7, 61, 8), // "inverted"
QT_MOC_LITERAL(8, 70, 8) // "accepted"

    },
    "QQuickWheelEvent\0x\0y\0angleDelta\0"
    "pixelDelta\0buttons\0modifiers\0inverted\0"
    "accepted"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QQuickWheelEvent[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       8,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, QMetaType::QReal, 0x00095001,
       2, QMetaType::QReal, 0x00095001,
       3, QMetaType::QPoint, 0x00095001,
       4, QMetaType::QPoint, 0x00095001,
       5, QMetaType::Int, 0x00095001,
       6, QMetaType::Int, 0x00095001,
       7, QMetaType::Bool, 0x00095001,
       8, QMetaType::Bool, 0x00095103,

       0        // eod
};

void QQuickWheelEvent::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{

#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty) {
        QQuickWheelEvent *_t = static_cast<QQuickWheelEvent *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< qreal*>(_v) = _t->x(); break;
        case 1: *reinterpret_cast< qreal*>(_v) = _t->y(); break;
        case 2: *reinterpret_cast< QPoint*>(_v) = _t->angleDelta(); break;
        case 3: *reinterpret_cast< QPoint*>(_v) = _t->pixelDelta(); break;
        case 4: *reinterpret_cast< int*>(_v) = _t->buttons(); break;
        case 5: *reinterpret_cast< int*>(_v) = _t->modifiers(); break;
        case 6: *reinterpret_cast< bool*>(_v) = _t->inverted(); break;
        case 7: *reinterpret_cast< bool*>(_v) = _t->isAccepted(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QQuickWheelEvent *_t = static_cast<QQuickWheelEvent *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 7: _t->setAccepted(*reinterpret_cast< bool*>(_v)); break;
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

const QMetaObject QQuickWheelEvent::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QQuickWheelEvent.data,
      qt_meta_data_QQuickWheelEvent,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QQuickWheelEvent::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QQuickWheelEvent::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QQuickWheelEvent.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QQuickWheelEvent::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
   if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
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
struct qt_meta_stringdata_QQuickCloseEvent_t {
    QByteArrayData data[2];
    char stringdata0[26];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QQuickCloseEvent_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QQuickCloseEvent_t qt_meta_stringdata_QQuickCloseEvent = {
    {
QT_MOC_LITERAL(0, 0, 16), // "QQuickCloseEvent"
QT_MOC_LITERAL(1, 17, 8) // "accepted"

    },
    "QQuickCloseEvent\0accepted"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QQuickCloseEvent[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       1,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, QMetaType::Bool, 0x00095103,

       0        // eod
};

void QQuickCloseEvent::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{

#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty) {
        QQuickCloseEvent *_t = static_cast<QQuickCloseEvent *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->isAccepted(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QQuickCloseEvent *_t = static_cast<QQuickCloseEvent *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setAccepted(*reinterpret_cast< bool*>(_v)); break;
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

const QMetaObject QQuickCloseEvent::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QQuickCloseEvent.data,
      qt_meta_data_QQuickCloseEvent,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QQuickCloseEvent::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QQuickCloseEvent::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QQuickCloseEvent.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QQuickCloseEvent::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
   if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 1;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
struct qt_meta_stringdata_QQuickEventPoint_t {
    QByteArrayData data[13];
    char stringdata0[120];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QQuickEventPoint_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QQuickEventPoint_t qt_meta_stringdata_QQuickEventPoint = {
    {
QT_MOC_LITERAL(0, 0, 16), // "QQuickEventPoint"
QT_MOC_LITERAL(1, 17, 8), // "scenePos"
QT_MOC_LITERAL(2, 26, 5), // "state"
QT_MOC_LITERAL(3, 32, 5), // "State"
QT_MOC_LITERAL(4, 38, 7), // "pointId"
QT_MOC_LITERAL(5, 46, 8), // "timeHeld"
QT_MOC_LITERAL(6, 55, 8), // "accepted"
QT_MOC_LITERAL(7, 64, 7), // "grabber"
QT_MOC_LITERAL(8, 72, 11), // "QQuickItem*"
QT_MOC_LITERAL(9, 84, 7), // "Pressed"
QT_MOC_LITERAL(10, 92, 7), // "Updated"
QT_MOC_LITERAL(11, 100, 10), // "Stationary"
QT_MOC_LITERAL(12, 111, 8) // "Released"

    },
    "QQuickEventPoint\0scenePos\0state\0State\0"
    "pointId\0timeHeld\0accepted\0grabber\0"
    "QQuickItem*\0Pressed\0Updated\0Stationary\0"
    "Released"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QQuickEventPoint[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       6,   14, // properties
       1,   32, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, QMetaType::QPointF, 0x00095001,
       2, 0x80000000 | 3, 0x00095009,
       4, QMetaType::ULongLong, 0x00095001,
       5, QMetaType::QReal, 0x00095001,
       6, QMetaType::Bool, 0x00095103,
       7, 0x80000000 | 8, 0x0009510b,

 // enums: name, flags, count, data
       3, 0x0,    4,   36,

 // enum data: key, value
       9, uint(QQuickEventPoint::Pressed),
      10, uint(QQuickEventPoint::Updated),
      11, uint(QQuickEventPoint::Stationary),
      12, uint(QQuickEventPoint::Released),

       0        // eod
};

void QQuickEventPoint::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 5:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QQuickItem* >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QQuickEventPoint *_t = static_cast<QQuickEventPoint *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QPointF*>(_v) = _t->scenePos(); break;
        case 1: *reinterpret_cast< State*>(_v) = _t->state(); break;
        case 2: *reinterpret_cast< quint64*>(_v) = _t->pointId(); break;
        case 3: *reinterpret_cast< qreal*>(_v) = _t->timeHeld(); break;
        case 4: *reinterpret_cast< bool*>(_v) = _t->isAccepted(); break;
        case 5: *reinterpret_cast< QQuickItem**>(_v) = _t->grabber(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QQuickEventPoint *_t = static_cast<QQuickEventPoint *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 4: _t->setAccepted(*reinterpret_cast< bool*>(_v)); break;
        case 5: _t->setGrabber(*reinterpret_cast< QQuickItem**>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_o);
}

const QMetaObject QQuickEventPoint::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QQuickEventPoint.data,
      qt_meta_data_QQuickEventPoint,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QQuickEventPoint::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QQuickEventPoint::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QQuickEventPoint.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QQuickEventPoint::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_QQuickEventTouchPoint_t {
    QByteArrayData data[5];
    char stringdata0[73];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QQuickEventTouchPoint_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QQuickEventTouchPoint_t qt_meta_stringdata_QQuickEventTouchPoint = {
    {
QT_MOC_LITERAL(0, 0, 21), // "QQuickEventTouchPoint"
QT_MOC_LITERAL(1, 22, 8), // "rotation"
QT_MOC_LITERAL(2, 31, 8), // "pressure"
QT_MOC_LITERAL(3, 40, 8), // "uniqueId"
QT_MOC_LITERAL(4, 49, 23) // "QPointingDeviceUniqueId"

    },
    "QQuickEventTouchPoint\0rotation\0pressure\0"
    "uniqueId\0QPointingDeviceUniqueId"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QQuickEventTouchPoint[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       3,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, QMetaType::QReal, 0x00095001,
       2, QMetaType::QReal, 0x00095001,
       3, 0x80000000 | 4, 0x00095009,

       0        // eod
};

void QQuickEventTouchPoint::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{

#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty) {
        QQuickEventTouchPoint *_t = static_cast<QQuickEventTouchPoint *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< qreal*>(_v) = _t->rotation(); break;
        case 1: *reinterpret_cast< qreal*>(_v) = _t->pressure(); break;
        case 2: *reinterpret_cast< QPointingDeviceUniqueId*>(_v) = _t->uniqueId(); break;
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

const QMetaObject QQuickEventTouchPoint::staticMetaObject = {
    { &QQuickEventPoint::staticMetaObject, qt_meta_stringdata_QQuickEventTouchPoint.data,
      qt_meta_data_QQuickEventTouchPoint,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QQuickEventTouchPoint::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QQuickEventTouchPoint::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QQuickEventTouchPoint.stringdata0))
        return static_cast<void*>(this);
    return QQuickEventPoint::qt_metacast(_clname);
}

int QQuickEventTouchPoint::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QQuickEventPoint::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
   if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 3;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
struct qt_meta_stringdata_QQuickPointerEvent_t {
    QByteArrayData data[8];
    char stringdata0[117];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QQuickPointerEvent_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QQuickPointerEvent_t qt_meta_stringdata_QQuickPointerEvent = {
    {
QT_MOC_LITERAL(0, 0, 18), // "QQuickPointerEvent"
QT_MOC_LITERAL(1, 19, 6), // "device"
QT_MOC_LITERAL(2, 26, 26), // "const QQuickPointerDevice*"
QT_MOC_LITERAL(3, 53, 9), // "modifiers"
QT_MOC_LITERAL(4, 63, 21), // "Qt::KeyboardModifiers"
QT_MOC_LITERAL(5, 85, 6), // "button"
QT_MOC_LITERAL(6, 92, 16), // "Qt::MouseButtons"
QT_MOC_LITERAL(7, 109, 7) // "buttons"

    },
    "QQuickPointerEvent\0device\0"
    "const QQuickPointerDevice*\0modifiers\0"
    "Qt::KeyboardModifiers\0button\0"
    "Qt::MouseButtons\0buttons"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QQuickPointerEvent[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       4,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, 0x80000000 | 2, 0x00095009,
       3, 0x80000000 | 4, 0x00095009,
       5, 0x80000000 | 6, 0x00095009,
       7, 0x80000000 | 6, 0x00095009,

       0        // eod
};

void QQuickPointerEvent::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{

#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty) {
        QQuickPointerEvent *_t = static_cast<QQuickPointerEvent *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< const QQuickPointerDevice**>(_v) = _t->device(); break;
        case 1: *reinterpret_cast< Qt::KeyboardModifiers*>(_v) = _t->modifiers(); break;
        case 2: *reinterpret_cast< Qt::MouseButtons*>(_v) = _t->button(); break;
        case 3: *reinterpret_cast< Qt::MouseButtons*>(_v) = _t->buttons(); break;
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

const QMetaObject QQuickPointerEvent::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QQuickPointerEvent.data,
      qt_meta_data_QQuickPointerEvent,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QQuickPointerEvent::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QQuickPointerEvent::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QQuickPointerEvent.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QQuickPointerEvent::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
   if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
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
struct qt_meta_stringdata_QQuickPointerMouseEvent_t {
    QByteArrayData data[1];
    char stringdata0[24];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QQuickPointerMouseEvent_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QQuickPointerMouseEvent_t qt_meta_stringdata_QQuickPointerMouseEvent = {
    {
QT_MOC_LITERAL(0, 0, 23) // "QQuickPointerMouseEvent"

    },
    "QQuickPointerMouseEvent"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QQuickPointerMouseEvent[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void QQuickPointerMouseEvent::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject QQuickPointerMouseEvent::staticMetaObject = {
    { &QQuickPointerEvent::staticMetaObject, qt_meta_stringdata_QQuickPointerMouseEvent.data,
      qt_meta_data_QQuickPointerMouseEvent,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QQuickPointerMouseEvent::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QQuickPointerMouseEvent::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QQuickPointerMouseEvent.stringdata0))
        return static_cast<void*>(this);
    return QQuickPointerEvent::qt_metacast(_clname);
}

int QQuickPointerMouseEvent::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QQuickPointerEvent::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_QQuickPointerTouchEvent_t {
    QByteArrayData data[1];
    char stringdata0[24];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QQuickPointerTouchEvent_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QQuickPointerTouchEvent_t qt_meta_stringdata_QQuickPointerTouchEvent = {
    {
QT_MOC_LITERAL(0, 0, 23) // "QQuickPointerTouchEvent"

    },
    "QQuickPointerTouchEvent"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QQuickPointerTouchEvent[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void QQuickPointerTouchEvent::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject QQuickPointerTouchEvent::staticMetaObject = {
    { &QQuickPointerEvent::staticMetaObject, qt_meta_stringdata_QQuickPointerTouchEvent.data,
      qt_meta_data_QQuickPointerTouchEvent,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QQuickPointerTouchEvent::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QQuickPointerTouchEvent::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QQuickPointerTouchEvent.stringdata0))
        return static_cast<void*>(this);
    return QQuickPointerEvent::qt_metacast(_clname);
}

int QQuickPointerTouchEvent::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QQuickPointerEvent::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_QQuickPointerDevice_t {
    QByteArrayData data[38];
    char stringdata0[390];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QQuickPointerDevice_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QQuickPointerDevice_t qt_meta_stringdata_QQuickPointerDevice = {
    {
QT_MOC_LITERAL(0, 0, 19), // "QQuickPointerDevice"
QT_MOC_LITERAL(1, 20, 4), // "type"
QT_MOC_LITERAL(2, 25, 10), // "DeviceType"
QT_MOC_LITERAL(3, 36, 11), // "pointerType"
QT_MOC_LITERAL(4, 48, 11), // "PointerType"
QT_MOC_LITERAL(5, 60, 12), // "capabilities"
QT_MOC_LITERAL(6, 73, 12), // "Capabilities"
QT_MOC_LITERAL(7, 86, 18), // "maximumTouchPoints"
QT_MOC_LITERAL(8, 105, 11), // "buttonCount"
QT_MOC_LITERAL(9, 117, 4), // "name"
QT_MOC_LITERAL(10, 122, 8), // "uniqueId"
QT_MOC_LITERAL(11, 131, 23), // "QPointingDeviceUniqueId"
QT_MOC_LITERAL(12, 155, 13), // "UnknownDevice"
QT_MOC_LITERAL(13, 169, 5), // "Mouse"
QT_MOC_LITERAL(14, 175, 11), // "TouchScreen"
QT_MOC_LITERAL(15, 187, 8), // "TouchPad"
QT_MOC_LITERAL(16, 196, 4), // "Puck"
QT_MOC_LITERAL(17, 201, 6), // "Stylus"
QT_MOC_LITERAL(18, 208, 8), // "Airbrush"
QT_MOC_LITERAL(19, 217, 10), // "AllDevices"
QT_MOC_LITERAL(20, 228, 11), // "DeviceTypes"
QT_MOC_LITERAL(21, 240, 14), // "GenericPointer"
QT_MOC_LITERAL(22, 255, 6), // "Finger"
QT_MOC_LITERAL(23, 262, 3), // "Pen"
QT_MOC_LITERAL(24, 266, 6), // "Eraser"
QT_MOC_LITERAL(25, 273, 6), // "Cursor"
QT_MOC_LITERAL(26, 280, 15), // "AllPointerTypes"
QT_MOC_LITERAL(27, 296, 12), // "PointerTypes"
QT_MOC_LITERAL(28, 309, 14), // "CapabilityFlag"
QT_MOC_LITERAL(29, 324, 8), // "Position"
QT_MOC_LITERAL(30, 333, 4), // "Area"
QT_MOC_LITERAL(31, 338, 8), // "Pressure"
QT_MOC_LITERAL(32, 347, 8), // "Velocity"
QT_MOC_LITERAL(33, 356, 6), // "Scroll"
QT_MOC_LITERAL(34, 363, 5), // "Hover"
QT_MOC_LITERAL(35, 369, 8), // "Rotation"
QT_MOC_LITERAL(36, 378, 5), // "XTilt"
QT_MOC_LITERAL(37, 384, 5) // "YTilt"

    },
    "QQuickPointerDevice\0type\0DeviceType\0"
    "pointerType\0PointerType\0capabilities\0"
    "Capabilities\0maximumTouchPoints\0"
    "buttonCount\0name\0uniqueId\0"
    "QPointingDeviceUniqueId\0UnknownDevice\0"
    "Mouse\0TouchScreen\0TouchPad\0Puck\0Stylus\0"
    "Airbrush\0AllDevices\0DeviceTypes\0"
    "GenericPointer\0Finger\0Pen\0Eraser\0"
    "Cursor\0AllPointerTypes\0PointerTypes\0"
    "CapabilityFlag\0Position\0Area\0Pressure\0"
    "Velocity\0Scroll\0Hover\0Rotation\0XTilt\0"
    "YTilt"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QQuickPointerDevice[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       7,   14, // properties
       6,   35, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, 0x80000000 | 2, 0x00095409,
       3, 0x80000000 | 4, 0x00095409,
       5, 0x80000000 | 6, 0x00095409,
       7, QMetaType::Int, 0x00095401,
       8, QMetaType::Int, 0x00095401,
       9, QMetaType::QString, 0x00095401,
      10, 0x80000000 | 11, 0x00095409,

 // enums: name, flags, count, data
       2, 0x0,    8,   59,
      20, 0x1,    8,   75,
       4, 0x0,    6,   91,
      27, 0x1,    6,  103,
      28, 0x0,    9,  115,
       6, 0x1,    9,  133,

 // enum data: key, value
      12, uint(QQuickPointerDevice::UnknownDevice),
      13, uint(QQuickPointerDevice::Mouse),
      14, uint(QQuickPointerDevice::TouchScreen),
      15, uint(QQuickPointerDevice::TouchPad),
      16, uint(QQuickPointerDevice::Puck),
      17, uint(QQuickPointerDevice::Stylus),
      18, uint(QQuickPointerDevice::Airbrush),
      19, uint(QQuickPointerDevice::AllDevices),
      12, uint(QQuickPointerDevice::UnknownDevice),
      13, uint(QQuickPointerDevice::Mouse),
      14, uint(QQuickPointerDevice::TouchScreen),
      15, uint(QQuickPointerDevice::TouchPad),
      16, uint(QQuickPointerDevice::Puck),
      17, uint(QQuickPointerDevice::Stylus),
      18, uint(QQuickPointerDevice::Airbrush),
      19, uint(QQuickPointerDevice::AllDevices),
      21, uint(QQuickPointerDevice::GenericPointer),
      22, uint(QQuickPointerDevice::Finger),
      23, uint(QQuickPointerDevice::Pen),
      24, uint(QQuickPointerDevice::Eraser),
      25, uint(QQuickPointerDevice::Cursor),
      26, uint(QQuickPointerDevice::AllPointerTypes),
      21, uint(QQuickPointerDevice::GenericPointer),
      22, uint(QQuickPointerDevice::Finger),
      23, uint(QQuickPointerDevice::Pen),
      24, uint(QQuickPointerDevice::Eraser),
      25, uint(QQuickPointerDevice::Cursor),
      26, uint(QQuickPointerDevice::AllPointerTypes),
      29, uint(QQuickPointerDevice::Position),
      30, uint(QQuickPointerDevice::Area),
      31, uint(QQuickPointerDevice::Pressure),
      32, uint(QQuickPointerDevice::Velocity),
      33, uint(QQuickPointerDevice::Scroll),
      34, uint(QQuickPointerDevice::Hover),
      35, uint(QQuickPointerDevice::Rotation),
      36, uint(QQuickPointerDevice::XTilt),
      37, uint(QQuickPointerDevice::YTilt),
      29, uint(QQuickPointerDevice::Position),
      30, uint(QQuickPointerDevice::Area),
      31, uint(QQuickPointerDevice::Pressure),
      32, uint(QQuickPointerDevice::Velocity),
      33, uint(QQuickPointerDevice::Scroll),
      34, uint(QQuickPointerDevice::Hover),
      35, uint(QQuickPointerDevice::Rotation),
      36, uint(QQuickPointerDevice::XTilt),
      37, uint(QQuickPointerDevice::YTilt),

       0        // eod
};

void QQuickPointerDevice::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{

#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty) {
        QQuickPointerDevice *_t = static_cast<QQuickPointerDevice *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< DeviceType*>(_v) = _t->type(); break;
        case 1: *reinterpret_cast< PointerType*>(_v) = _t->pointerType(); break;
        case 2: *reinterpret_cast<int*>(_v) = QFlag(_t->capabilities()); break;
        case 3: *reinterpret_cast< int*>(_v) = _t->maximumTouchPoints(); break;
        case 4: *reinterpret_cast< int*>(_v) = _t->buttonCount(); break;
        case 5: *reinterpret_cast< QString*>(_v) = _t->name(); break;
        case 6: *reinterpret_cast< QPointingDeviceUniqueId*>(_v) = _t->uniqueId(); break;
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

const QMetaObject QQuickPointerDevice::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QQuickPointerDevice.data,
      qt_meta_data_QQuickPointerDevice,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QQuickPointerDevice::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QQuickPointerDevice::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QQuickPointerDevice.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QQuickPointerDevice::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
