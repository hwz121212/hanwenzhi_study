/****************************************************************************
** Meta object code from reading C++ file 'quicktestevent_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../5.9.6/QtQuickTest/private/quicktestevent_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'quicktestevent_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QQuickTouchEventSequence_t {
    QByteArrayData data[11];
    char stringdata0[80];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QQuickTouchEventSequence_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QQuickTouchEventSequence_t qt_meta_stringdata_QQuickTouchEventSequence = {
    {
QT_MOC_LITERAL(0, 0, 24), // "QQuickTouchEventSequence"
QT_MOC_LITERAL(1, 25, 5), // "press"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 7), // "touchId"
QT_MOC_LITERAL(4, 40, 4), // "item"
QT_MOC_LITERAL(5, 45, 1), // "x"
QT_MOC_LITERAL(6, 47, 1), // "y"
QT_MOC_LITERAL(7, 49, 4), // "move"
QT_MOC_LITERAL(8, 54, 7), // "release"
QT_MOC_LITERAL(9, 62, 10), // "stationary"
QT_MOC_LITERAL(10, 73, 6) // "commit"

    },
    "QQuickTouchEventSequence\0press\0\0touchId\0"
    "item\0x\0y\0move\0release\0stationary\0"
    "commit"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QQuickTouchEventSequence[] = {

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
       1,    4,   39,    2, 0x0a /* Public */,
       7,    4,   48,    2, 0x0a /* Public */,
       8,    4,   57,    2, 0x0a /* Public */,
       9,    1,   66,    2, 0x0a /* Public */,
      10,    0,   69,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::QObjectStar, QMetaType::Int, QMetaType::QObjectStar, QMetaType::QReal, QMetaType::QReal,    3,    4,    5,    6,
    QMetaType::QObjectStar, QMetaType::Int, QMetaType::QObjectStar, QMetaType::QReal, QMetaType::QReal,    3,    4,    5,    6,
    QMetaType::QObjectStar, QMetaType::Int, QMetaType::QObjectStar, QMetaType::QReal, QMetaType::QReal,    3,    4,    5,    6,
    QMetaType::QObjectStar, QMetaType::Int,    3,
    QMetaType::QObjectStar,

       0        // eod
};

void QQuickTouchEventSequence::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QQuickTouchEventSequence *_t = static_cast<QQuickTouchEventSequence *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: { QObject* _r = _t->press((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QObject*(*)>(_a[2])),(*reinterpret_cast< qreal(*)>(_a[3])),(*reinterpret_cast< qreal(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< QObject**>(_a[0]) = std::move(_r); }  break;
        case 1: { QObject* _r = _t->move((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QObject*(*)>(_a[2])),(*reinterpret_cast< qreal(*)>(_a[3])),(*reinterpret_cast< qreal(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< QObject**>(_a[0]) = std::move(_r); }  break;
        case 2: { QObject* _r = _t->release((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QObject*(*)>(_a[2])),(*reinterpret_cast< qreal(*)>(_a[3])),(*reinterpret_cast< qreal(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< QObject**>(_a[0]) = std::move(_r); }  break;
        case 3: { QObject* _r = _t->stationary((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QObject**>(_a[0]) = std::move(_r); }  break;
        case 4: { QObject* _r = _t->commit();
            if (_a[0]) *reinterpret_cast< QObject**>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
}

const QMetaObject QQuickTouchEventSequence::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QQuickTouchEventSequence.data,
      qt_meta_data_QQuickTouchEventSequence,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QQuickTouchEventSequence::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QQuickTouchEventSequence::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QQuickTouchEventSequence.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QQuickTouchEventSequence::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}
struct qt_meta_stringdata_QuickTestEvent_t {
    QByteArrayData data[29];
    char stringdata0[307];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QuickTestEvent_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QuickTestEvent_t qt_meta_stringdata_QuickTestEvent = {
    {
QT_MOC_LITERAL(0, 0, 14), // "QuickTestEvent"
QT_MOC_LITERAL(1, 15, 8), // "keyPress"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 3), // "key"
QT_MOC_LITERAL(4, 29, 9), // "modifiers"
QT_MOC_LITERAL(5, 39, 5), // "delay"
QT_MOC_LITERAL(6, 45, 10), // "keyRelease"
QT_MOC_LITERAL(7, 56, 8), // "keyClick"
QT_MOC_LITERAL(8, 65, 12), // "keyPressChar"
QT_MOC_LITERAL(9, 78, 9), // "character"
QT_MOC_LITERAL(10, 88, 14), // "keyReleaseChar"
QT_MOC_LITERAL(11, 103, 12), // "keyClickChar"
QT_MOC_LITERAL(12, 116, 10), // "mousePress"
QT_MOC_LITERAL(13, 127, 4), // "item"
QT_MOC_LITERAL(14, 132, 1), // "x"
QT_MOC_LITERAL(15, 134, 1), // "y"
QT_MOC_LITERAL(16, 136, 6), // "button"
QT_MOC_LITERAL(17, 143, 12), // "mouseRelease"
QT_MOC_LITERAL(18, 156, 10), // "mouseClick"
QT_MOC_LITERAL(19, 167, 16), // "mouseDoubleClick"
QT_MOC_LITERAL(20, 184, 24), // "mouseDoubleClickSequence"
QT_MOC_LITERAL(21, 209, 9), // "mouseMove"
QT_MOC_LITERAL(22, 219, 7), // "buttons"
QT_MOC_LITERAL(23, 227, 10), // "mouseWheel"
QT_MOC_LITERAL(24, 238, 6), // "xDelta"
QT_MOC_LITERAL(25, 245, 6), // "yDelta"
QT_MOC_LITERAL(26, 252, 10), // "touchEvent"
QT_MOC_LITERAL(27, 263, 25), // "QQuickTouchEventSequence*"
QT_MOC_LITERAL(28, 289, 17) // "defaultMouseDelay"

    },
    "QuickTestEvent\0keyPress\0\0key\0modifiers\0"
    "delay\0keyRelease\0keyClick\0keyPressChar\0"
    "character\0keyReleaseChar\0keyClickChar\0"
    "mousePress\0item\0x\0y\0button\0mouseRelease\0"
    "mouseClick\0mouseDoubleClick\0"
    "mouseDoubleClickSequence\0mouseMove\0"
    "buttons\0mouseWheel\0xDelta\0yDelta\0"
    "touchEvent\0QQuickTouchEventSequence*\0"
    "defaultMouseDelay"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QuickTestEvent[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       1,  228, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    3,   89,    2, 0x0a /* Public */,
       6,    3,   96,    2, 0x0a /* Public */,
       7,    3,  103,    2, 0x0a /* Public */,
       8,    3,  110,    2, 0x0a /* Public */,
      10,    3,  117,    2, 0x0a /* Public */,
      11,    3,  124,    2, 0x0a /* Public */,
      12,    6,  131,    2, 0x0a /* Public */,
      17,    6,  144,    2, 0x0a /* Public */,
      18,    6,  157,    2, 0x0a /* Public */,
      19,    6,  170,    2, 0x0a /* Public */,
      20,    6,  183,    2, 0x0a /* Public */,
      21,    5,  196,    2, 0x0a /* Public */,
      23,    8,  207,    2, 0x0a /* Public */,
      26,    1,  224,    2, 0x0a /* Public */,
      26,    0,  227,    2, 0x2a /* Public | MethodCloned */,

 // slots: parameters
    QMetaType::Bool, QMetaType::Int, QMetaType::Int, QMetaType::Int,    3,    4,    5,
    QMetaType::Bool, QMetaType::Int, QMetaType::Int, QMetaType::Int,    3,    4,    5,
    QMetaType::Bool, QMetaType::Int, QMetaType::Int, QMetaType::Int,    3,    4,    5,
    QMetaType::Bool, QMetaType::QString, QMetaType::Int, QMetaType::Int,    9,    4,    5,
    QMetaType::Bool, QMetaType::QString, QMetaType::Int, QMetaType::Int,    9,    4,    5,
    QMetaType::Bool, QMetaType::QString, QMetaType::Int, QMetaType::Int,    9,    4,    5,
    QMetaType::Bool, QMetaType::QObjectStar, QMetaType::QReal, QMetaType::QReal, QMetaType::Int, QMetaType::Int, QMetaType::Int,   13,   14,   15,   16,    4,    5,
    QMetaType::Bool, QMetaType::QObjectStar, QMetaType::QReal, QMetaType::QReal, QMetaType::Int, QMetaType::Int, QMetaType::Int,   13,   14,   15,   16,    4,    5,
    QMetaType::Bool, QMetaType::QObjectStar, QMetaType::QReal, QMetaType::QReal, QMetaType::Int, QMetaType::Int, QMetaType::Int,   13,   14,   15,   16,    4,    5,
    QMetaType::Bool, QMetaType::QObjectStar, QMetaType::QReal, QMetaType::QReal, QMetaType::Int, QMetaType::Int, QMetaType::Int,   13,   14,   15,   16,    4,    5,
    QMetaType::Bool, QMetaType::QObjectStar, QMetaType::QReal, QMetaType::QReal, QMetaType::Int, QMetaType::Int, QMetaType::Int,   13,   14,   15,   16,    4,    5,
    QMetaType::Bool, QMetaType::QObjectStar, QMetaType::QReal, QMetaType::QReal, QMetaType::Int, QMetaType::Int,   13,   14,   15,    5,   22,
    QMetaType::Bool, QMetaType::QObjectStar, QMetaType::QReal, QMetaType::QReal, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int,   13,   14,   15,   22,    4,   24,   25,    5,
    0x80000000 | 27, QMetaType::QObjectStar,   13,
    0x80000000 | 27,

 // properties: name, type, flags
      28, QMetaType::Int, 0x00095801,

       0        // eod
};

void QuickTestEvent::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QuickTestEvent *_t = static_cast<QuickTestEvent *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: { bool _r = _t->keyPress((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 1: { bool _r = _t->keyRelease((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 2: { bool _r = _t->keyClick((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 3: { bool _r = _t->keyPressChar((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 4: { bool _r = _t->keyReleaseChar((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 5: { bool _r = _t->keyClickChar((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 6: { bool _r = _t->mousePress((*reinterpret_cast< QObject*(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2])),(*reinterpret_cast< qreal(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5])),(*reinterpret_cast< int(*)>(_a[6])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 7: { bool _r = _t->mouseRelease((*reinterpret_cast< QObject*(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2])),(*reinterpret_cast< qreal(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5])),(*reinterpret_cast< int(*)>(_a[6])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 8: { bool _r = _t->mouseClick((*reinterpret_cast< QObject*(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2])),(*reinterpret_cast< qreal(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5])),(*reinterpret_cast< int(*)>(_a[6])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 9: { bool _r = _t->mouseDoubleClick((*reinterpret_cast< QObject*(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2])),(*reinterpret_cast< qreal(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5])),(*reinterpret_cast< int(*)>(_a[6])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 10: { bool _r = _t->mouseDoubleClickSequence((*reinterpret_cast< QObject*(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2])),(*reinterpret_cast< qreal(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5])),(*reinterpret_cast< int(*)>(_a[6])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 11: { bool _r = _t->mouseMove((*reinterpret_cast< QObject*(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2])),(*reinterpret_cast< qreal(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 12: { bool _r = _t->mouseWheel((*reinterpret_cast< QObject*(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2])),(*reinterpret_cast< qreal(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5])),(*reinterpret_cast< int(*)>(_a[6])),(*reinterpret_cast< int(*)>(_a[7])),(*reinterpret_cast< int(*)>(_a[8])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 13: { QQuickTouchEventSequence* _r = _t->touchEvent((*reinterpret_cast< QObject*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QQuickTouchEventSequence**>(_a[0]) = std::move(_r); }  break;
        case 14: { QQuickTouchEventSequence* _r = _t->touchEvent();
            if (_a[0]) *reinterpret_cast< QQuickTouchEventSequence**>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QuickTestEvent *_t = static_cast<QuickTestEvent *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->defaultMouseDelay(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QuickTestEvent::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QuickTestEvent.data,
      qt_meta_data_QuickTestEvent,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QuickTestEvent::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QuickTestEvent::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QuickTestEvent.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QuickTestEvent::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 15;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
