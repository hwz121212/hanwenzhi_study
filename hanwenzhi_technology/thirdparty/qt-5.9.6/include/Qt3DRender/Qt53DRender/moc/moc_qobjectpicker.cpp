/****************************************************************************
** Meta object code from reading C++ file 'qobjectpicker.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../qobjectpicker.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qobjectpicker.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Qt3DRender__QObjectPicker_t {
    QByteArrayData data[19];
    char stringdata0[247];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Qt3DRender__QObjectPicker_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Qt3DRender__QObjectPicker_t qt_meta_stringdata_Qt3DRender__QObjectPicker = {
    {
QT_MOC_LITERAL(0, 0, 25), // "Qt3DRender::QObjectPicker"
QT_MOC_LITERAL(1, 26, 7), // "pressed"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 23), // "Qt3DRender::QPickEvent*"
QT_MOC_LITERAL(4, 59, 4), // "pick"
QT_MOC_LITERAL(5, 64, 8), // "released"
QT_MOC_LITERAL(6, 73, 7), // "clicked"
QT_MOC_LITERAL(7, 81, 5), // "moved"
QT_MOC_LITERAL(8, 87, 7), // "entered"
QT_MOC_LITERAL(9, 95, 6), // "exited"
QT_MOC_LITERAL(10, 102, 19), // "hoverEnabledChanged"
QT_MOC_LITERAL(11, 122, 12), // "hoverEnabled"
QT_MOC_LITERAL(12, 135, 18), // "dragEnabledChanged"
QT_MOC_LITERAL(13, 154, 11), // "dragEnabled"
QT_MOC_LITERAL(14, 166, 14), // "pressedChanged"
QT_MOC_LITERAL(15, 181, 20), // "containsMouseChanged"
QT_MOC_LITERAL(16, 202, 13), // "containsMouse"
QT_MOC_LITERAL(17, 216, 15), // "setHoverEnabled"
QT_MOC_LITERAL(18, 232, 14) // "setDragEnabled"

    },
    "Qt3DRender::QObjectPicker\0pressed\0\0"
    "Qt3DRender::QPickEvent*\0pick\0released\0"
    "clicked\0moved\0entered\0exited\0"
    "hoverEnabledChanged\0hoverEnabled\0"
    "dragEnabledChanged\0dragEnabled\0"
    "pressedChanged\0containsMouseChanged\0"
    "containsMouse\0setHoverEnabled\0"
    "setDragEnabled"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Qt3DRender__QObjectPicker[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       4,  106, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      10,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   74,    2, 0x06 /* Public */,
       5,    1,   77,    2, 0x06 /* Public */,
       6,    1,   80,    2, 0x06 /* Public */,
       7,    1,   83,    2, 0x06 /* Public */,
       8,    0,   86,    2, 0x06 /* Public */,
       9,    0,   87,    2, 0x06 /* Public */,
      10,    1,   88,    2, 0x06 /* Public */,
      12,    1,   91,    2, 0x06 /* Public */,
      14,    1,   94,    2, 0x06 /* Public */,
      15,    1,   97,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      17,    1,  100,    2, 0x0a /* Public */,
      18,    1,  103,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   11,
    QMetaType::Void, QMetaType::Bool,   13,
    QMetaType::Void, QMetaType::Bool,    1,
    QMetaType::Void, QMetaType::Bool,   16,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,   11,
    QMetaType::Void, QMetaType::Bool,   13,

 // properties: name, type, flags
      11, QMetaType::Bool, 0x00495103,
      13, QMetaType::Bool, 0x00495103,
       1, QMetaType::Bool, 0x00495001,
      16, QMetaType::Bool, 0x00495001,

 // properties: notify_signal_id
       6,
       7,
       8,
       9,

       0        // eod
};

void Qt3DRender::QObjectPicker::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QObjectPicker *_t = static_cast<QObjectPicker *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->pressed((*reinterpret_cast< Qt3DRender::QPickEvent*(*)>(_a[1]))); break;
        case 1: _t->released((*reinterpret_cast< Qt3DRender::QPickEvent*(*)>(_a[1]))); break;
        case 2: _t->clicked((*reinterpret_cast< Qt3DRender::QPickEvent*(*)>(_a[1]))); break;
        case 3: _t->moved((*reinterpret_cast< Qt3DRender::QPickEvent*(*)>(_a[1]))); break;
        case 4: _t->entered(); break;
        case 5: _t->exited(); break;
        case 6: _t->hoverEnabledChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->dragEnabledChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->pressedChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->containsMouseChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: _t->setHoverEnabled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 11: _t->setDragEnabled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QObjectPicker::*_t)(Qt3DRender::QPickEvent * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QObjectPicker::pressed)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QObjectPicker::*_t)(Qt3DRender::QPickEvent * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QObjectPicker::released)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QObjectPicker::*_t)(Qt3DRender::QPickEvent * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QObjectPicker::clicked)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (QObjectPicker::*_t)(Qt3DRender::QPickEvent * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QObjectPicker::moved)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (QObjectPicker::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QObjectPicker::entered)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (QObjectPicker::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QObjectPicker::exited)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (QObjectPicker::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QObjectPicker::hoverEnabledChanged)) {
                *result = 6;
                return;
            }
        }
        {
            typedef void (QObjectPicker::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QObjectPicker::dragEnabledChanged)) {
                *result = 7;
                return;
            }
        }
        {
            typedef void (QObjectPicker::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QObjectPicker::pressedChanged)) {
                *result = 8;
                return;
            }
        }
        {
            typedef void (QObjectPicker::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QObjectPicker::containsMouseChanged)) {
                *result = 9;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QObjectPicker *_t = static_cast<QObjectPicker *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->isHoverEnabled(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->isDragEnabled(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->isPressed(); break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->containsMouse(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QObjectPicker *_t = static_cast<QObjectPicker *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setHoverEnabled(*reinterpret_cast< bool*>(_v)); break;
        case 1: _t->setDragEnabled(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject Qt3DRender::QObjectPicker::staticMetaObject = {
    { &Qt3DCore::QComponent::staticMetaObject, qt_meta_stringdata_Qt3DRender__QObjectPicker.data,
      qt_meta_data_Qt3DRender__QObjectPicker,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Qt3DRender::QObjectPicker::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Qt3DRender::QObjectPicker::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Qt3DRender__QObjectPicker.stringdata0))
        return static_cast<void*>(this);
    return Qt3DCore::QComponent::qt_metacast(_clname);
}

int Qt3DRender::QObjectPicker::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
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

// SIGNAL 0
void Qt3DRender::QObjectPicker::pressed(Qt3DRender::QPickEvent * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Qt3DRender::QObjectPicker::released(Qt3DRender::QPickEvent * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Qt3DRender::QObjectPicker::clicked(Qt3DRender::QPickEvent * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void Qt3DRender::QObjectPicker::moved(Qt3DRender::QPickEvent * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void Qt3DRender::QObjectPicker::entered()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void Qt3DRender::QObjectPicker::exited()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void Qt3DRender::QObjectPicker::hoverEnabledChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void Qt3DRender::QObjectPicker::dragEnabledChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void Qt3DRender::QObjectPicker::pressedChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void Qt3DRender::QObjectPicker::containsMouseChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
