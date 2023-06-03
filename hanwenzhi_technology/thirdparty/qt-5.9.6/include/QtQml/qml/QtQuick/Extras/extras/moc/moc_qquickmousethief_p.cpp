/****************************************************************************
** Meta object code from reading C++ file 'qquickmousethief_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Private/qquickmousethief_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qquickmousethief_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QQuickMouseThief_t {
    QByteArrayData data[19];
    char stringdata0[231];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QQuickMouseThief_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QQuickMouseThief_t qt_meta_stringdata_QQuickMouseThief = {
    {
QT_MOC_LITERAL(0, 0, 16), // "QQuickMouseThief"
QT_MOC_LITERAL(1, 17, 7), // "pressed"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 6), // "mouseX"
QT_MOC_LITERAL(4, 33, 6), // "mouseY"
QT_MOC_LITERAL(5, 40, 8), // "released"
QT_MOC_LITERAL(6, 49, 7), // "clicked"
QT_MOC_LITERAL(7, 57, 11), // "touchUpdate"
QT_MOC_LITERAL(8, 69, 25), // "receivedPressEventChanged"
QT_MOC_LITERAL(9, 95, 19), // "handledEventChanged"
QT_MOC_LITERAL(10, 115, 17), // "itemWindowChanged"
QT_MOC_LITERAL(11, 133, 13), // "QQuickWindow*"
QT_MOC_LITERAL(12, 147, 6), // "window"
QT_MOC_LITERAL(13, 154, 9), // "grabMouse"
QT_MOC_LITERAL(14, 164, 11), // "QQuickItem*"
QT_MOC_LITERAL(15, 176, 4), // "item"
QT_MOC_LITERAL(16, 181, 11), // "ungrabMouse"
QT_MOC_LITERAL(17, 193, 18), // "acceptCurrentEvent"
QT_MOC_LITERAL(18, 212, 18) // "receivedPressEvent"

    },
    "QQuickMouseThief\0pressed\0\0mouseX\0"
    "mouseY\0released\0clicked\0touchUpdate\0"
    "receivedPressEventChanged\0handledEventChanged\0"
    "itemWindowChanged\0QQuickWindow*\0window\0"
    "grabMouse\0QQuickItem*\0item\0ungrabMouse\0"
    "acceptCurrentEvent\0receivedPressEvent"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QQuickMouseThief[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       1,   94, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   64,    2, 0x06 /* Public */,
       5,    2,   69,    2, 0x06 /* Public */,
       6,    2,   74,    2, 0x06 /* Public */,
       7,    2,   79,    2, 0x06 /* Public */,
       8,    0,   84,    2, 0x06 /* Public */,
       9,    0,   85,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      10,    1,   86,    2, 0x08 /* Private */,

 // methods: name, argc, parameters, tag, flags
      13,    1,   89,    2, 0x02 /* Public */,
      16,    0,   92,    2, 0x02 /* Public */,
      17,    0,   93,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    3,    4,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    3,    4,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    3,    4,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    3,    4,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 11,   12,

 // methods: parameters
    QMetaType::Void, 0x80000000 | 14,   15,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
      18, QMetaType::Bool, 0x00495103,

 // properties: notify_signal_id
       4,

       0        // eod
};

void QQuickMouseThief::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QQuickMouseThief *_t = static_cast<QQuickMouseThief *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->pressed((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: _t->released((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 2: _t->clicked((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 3: _t->touchUpdate((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 4: _t->receivedPressEventChanged(); break;
        case 5: _t->handledEventChanged(); break;
        case 6: _t->itemWindowChanged((*reinterpret_cast< QQuickWindow*(*)>(_a[1]))); break;
        case 7: _t->grabMouse((*reinterpret_cast< QQuickItem*(*)>(_a[1]))); break;
        case 8: _t->ungrabMouse(); break;
        case 9: _t->acceptCurrentEvent(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QQuickItem* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QQuickMouseThief::*_t)(int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickMouseThief::pressed)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QQuickMouseThief::*_t)(int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickMouseThief::released)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QQuickMouseThief::*_t)(int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickMouseThief::clicked)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (QQuickMouseThief::*_t)(int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickMouseThief::touchUpdate)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (QQuickMouseThief::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickMouseThief::receivedPressEventChanged)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (QQuickMouseThief::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickMouseThief::handledEventChanged)) {
                *result = 5;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QQuickMouseThief *_t = static_cast<QQuickMouseThief *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->receivedPressEvent(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QQuickMouseThief *_t = static_cast<QQuickMouseThief *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setReceivedPressEvent(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QQuickMouseThief::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QQuickMouseThief.data,
      qt_meta_data_QQuickMouseThief,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QQuickMouseThief::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QQuickMouseThief::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QQuickMouseThief.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QQuickMouseThief::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
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

// SIGNAL 0
void QQuickMouseThief::pressed(int _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QQuickMouseThief::released(int _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QQuickMouseThief::clicked(int _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QQuickMouseThief::touchUpdate(int _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QQuickMouseThief::receivedPressEventChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void QQuickMouseThief::handledEventChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
