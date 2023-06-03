/****************************************************************************
** Meta object code from reading C++ file 'qmousehandler.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../qmousehandler.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qmousehandler.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Qt3DInput__QMouseHandler_t {
    QByteArrayData data[22];
    char stringdata0[304];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Qt3DInput__QMouseHandler_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Qt3DInput__QMouseHandler_t qt_meta_stringdata_Qt3DInput__QMouseHandler = {
    {
QT_MOC_LITERAL(0, 0, 24), // "Qt3DInput::QMouseHandler"
QT_MOC_LITERAL(1, 25, 19), // "sourceDeviceChanged"
QT_MOC_LITERAL(2, 45, 0), // ""
QT_MOC_LITERAL(3, 46, 13), // "QMouseDevice*"
QT_MOC_LITERAL(4, 60, 11), // "mouseDevice"
QT_MOC_LITERAL(5, 72, 20), // "containsMouseChanged"
QT_MOC_LITERAL(6, 93, 13), // "containsMouse"
QT_MOC_LITERAL(7, 107, 7), // "clicked"
QT_MOC_LITERAL(8, 115, 23), // "Qt3DInput::QMouseEvent*"
QT_MOC_LITERAL(9, 139, 5), // "mouse"
QT_MOC_LITERAL(10, 145, 13), // "doubleClicked"
QT_MOC_LITERAL(11, 159, 7), // "entered"
QT_MOC_LITERAL(12, 167, 6), // "exited"
QT_MOC_LITERAL(13, 174, 7), // "pressed"
QT_MOC_LITERAL(14, 182, 8), // "released"
QT_MOC_LITERAL(15, 191, 12), // "pressAndHold"
QT_MOC_LITERAL(16, 204, 15), // "positionChanged"
QT_MOC_LITERAL(17, 220, 5), // "wheel"
QT_MOC_LITERAL(18, 226, 23), // "Qt3DInput::QWheelEvent*"
QT_MOC_LITERAL(19, 250, 15), // "setSourceDevice"
QT_MOC_LITERAL(20, 266, 12), // "sourceDevice"
QT_MOC_LITERAL(21, 279, 24) // "Qt3DInput::QMouseDevice*"

    },
    "Qt3DInput::QMouseHandler\0sourceDeviceChanged\0"
    "\0QMouseDevice*\0mouseDevice\0"
    "containsMouseChanged\0containsMouse\0"
    "clicked\0Qt3DInput::QMouseEvent*\0mouse\0"
    "doubleClicked\0entered\0exited\0pressed\0"
    "released\0pressAndHold\0positionChanged\0"
    "wheel\0Qt3DInput::QWheelEvent*\0"
    "setSourceDevice\0sourceDevice\0"
    "Qt3DInput::QMouseDevice*"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Qt3DInput__QMouseHandler[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       2,  106, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      11,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   74,    2, 0x06 /* Public */,
       5,    1,   77,    2, 0x06 /* Public */,
       7,    1,   80,    2, 0x06 /* Public */,
      10,    1,   83,    2, 0x06 /* Public */,
      11,    0,   86,    2, 0x06 /* Public */,
      12,    0,   87,    2, 0x06 /* Public */,
      13,    1,   88,    2, 0x06 /* Public */,
      14,    1,   91,    2, 0x06 /* Public */,
      15,    1,   94,    2, 0x06 /* Public */,
      16,    1,   97,    2, 0x06 /* Public */,
      17,    1,  100,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      19,    1,  103,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, 0x80000000 | 18,   17,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // properties: name, type, flags
      20, 0x80000000 | 21, 0x0049510b,
       6, QMetaType::Bool, 0x00495001,

 // properties: notify_signal_id
       0,
       1,

       0        // eod
};

void Qt3DInput::QMouseHandler::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QMouseHandler *_t = static_cast<QMouseHandler *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sourceDeviceChanged((*reinterpret_cast< QMouseDevice*(*)>(_a[1]))); break;
        case 1: _t->containsMouseChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->clicked((*reinterpret_cast< Qt3DInput::QMouseEvent*(*)>(_a[1]))); break;
        case 3: _t->doubleClicked((*reinterpret_cast< Qt3DInput::QMouseEvent*(*)>(_a[1]))); break;
        case 4: _t->entered(); break;
        case 5: _t->exited(); break;
        case 6: _t->pressed((*reinterpret_cast< Qt3DInput::QMouseEvent*(*)>(_a[1]))); break;
        case 7: _t->released((*reinterpret_cast< Qt3DInput::QMouseEvent*(*)>(_a[1]))); break;
        case 8: _t->pressAndHold((*reinterpret_cast< Qt3DInput::QMouseEvent*(*)>(_a[1]))); break;
        case 9: _t->positionChanged((*reinterpret_cast< Qt3DInput::QMouseEvent*(*)>(_a[1]))); break;
        case 10: _t->wheel((*reinterpret_cast< Qt3DInput::QWheelEvent*(*)>(_a[1]))); break;
        case 11: _t->setSourceDevice((*reinterpret_cast< QMouseDevice*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Qt3DInput::QMouseEvent* >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Qt3DInput::QMouseEvent* >(); break;
            }
            break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Qt3DInput::QMouseEvent* >(); break;
            }
            break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Qt3DInput::QMouseEvent* >(); break;
            }
            break;
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Qt3DInput::QMouseEvent* >(); break;
            }
            break;
        case 9:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Qt3DInput::QMouseEvent* >(); break;
            }
            break;
        case 10:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Qt3DInput::QWheelEvent* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QMouseHandler::*_t)(QMouseDevice * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QMouseHandler::sourceDeviceChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QMouseHandler::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QMouseHandler::containsMouseChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QMouseHandler::*_t)(Qt3DInput::QMouseEvent * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QMouseHandler::clicked)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (QMouseHandler::*_t)(Qt3DInput::QMouseEvent * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QMouseHandler::doubleClicked)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (QMouseHandler::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QMouseHandler::entered)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (QMouseHandler::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QMouseHandler::exited)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (QMouseHandler::*_t)(Qt3DInput::QMouseEvent * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QMouseHandler::pressed)) {
                *result = 6;
                return;
            }
        }
        {
            typedef void (QMouseHandler::*_t)(Qt3DInput::QMouseEvent * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QMouseHandler::released)) {
                *result = 7;
                return;
            }
        }
        {
            typedef void (QMouseHandler::*_t)(Qt3DInput::QMouseEvent * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QMouseHandler::pressAndHold)) {
                *result = 8;
                return;
            }
        }
        {
            typedef void (QMouseHandler::*_t)(Qt3DInput::QMouseEvent * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QMouseHandler::positionChanged)) {
                *result = 9;
                return;
            }
        }
        {
            typedef void (QMouseHandler::*_t)(Qt3DInput::QWheelEvent * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QMouseHandler::wheel)) {
                *result = 10;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QMouseHandler *_t = static_cast<QMouseHandler *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< Qt3DInput::QMouseDevice**>(_v) = _t->sourceDevice(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->containsMouse(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QMouseHandler *_t = static_cast<QMouseHandler *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setSourceDevice(*reinterpret_cast< Qt3DInput::QMouseDevice**>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject Qt3DInput::QMouseHandler::staticMetaObject = {
    { &Qt3DCore::QComponent::staticMetaObject, qt_meta_stringdata_Qt3DInput__QMouseHandler.data,
      qt_meta_data_Qt3DInput__QMouseHandler,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Qt3DInput::QMouseHandler::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Qt3DInput::QMouseHandler::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Qt3DInput__QMouseHandler.stringdata0))
        return static_cast<void*>(this);
    return Qt3DCore::QComponent::qt_metacast(_clname);
}

int Qt3DInput::QMouseHandler::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Qt3DCore::QComponent::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
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
void Qt3DInput::QMouseHandler::sourceDeviceChanged(QMouseDevice * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Qt3DInput::QMouseHandler::containsMouseChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Qt3DInput::QMouseHandler::clicked(Qt3DInput::QMouseEvent * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void Qt3DInput::QMouseHandler::doubleClicked(Qt3DInput::QMouseEvent * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void Qt3DInput::QMouseHandler::entered()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void Qt3DInput::QMouseHandler::exited()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void Qt3DInput::QMouseHandler::pressed(Qt3DInput::QMouseEvent * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void Qt3DInput::QMouseHandler::released(Qt3DInput::QMouseEvent * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void Qt3DInput::QMouseHandler::pressAndHold(Qt3DInput::QMouseEvent * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void Qt3DInput::QMouseHandler::positionChanged(Qt3DInput::QMouseEvent * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void Qt3DInput::QMouseHandler::wheel(Qt3DInput::QWheelEvent * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
