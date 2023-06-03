/****************************************************************************
** Meta object code from reading C++ file 'qinputsequence.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../qinputsequence.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qinputsequence.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Qt3DInput__QInputSequence_t {
    QByteArrayData data[8];
    char stringdata0[116];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Qt3DInput__QInputSequence_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Qt3DInput__QInputSequence_t qt_meta_stringdata_Qt3DInput__QInputSequence = {
    {
QT_MOC_LITERAL(0, 0, 25), // "Qt3DInput::QInputSequence"
QT_MOC_LITERAL(1, 26, 14), // "timeoutChanged"
QT_MOC_LITERAL(2, 41, 0), // ""
QT_MOC_LITERAL(3, 42, 7), // "timeout"
QT_MOC_LITERAL(4, 50, 21), // "buttonIntervalChanged"
QT_MOC_LITERAL(5, 72, 14), // "buttonInterval"
QT_MOC_LITERAL(6, 87, 10), // "setTimeout"
QT_MOC_LITERAL(7, 98, 17) // "setButtonInterval"

    },
    "Qt3DInput::QInputSequence\0timeoutChanged\0"
    "\0timeout\0buttonIntervalChanged\0"
    "buttonInterval\0setTimeout\0setButtonInterval"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Qt3DInput__QInputSequence[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       2,   46, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06 /* Public */,
       4,    1,   37,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    1,   40,    2, 0x0a /* Public */,
       7,    1,   43,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    5,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    5,

 // properties: name, type, flags
       3, QMetaType::Int, 0x00495103,
       5, QMetaType::Int, 0x00495103,

 // properties: notify_signal_id
       0,
       1,

       0        // eod
};

void Qt3DInput::QInputSequence::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QInputSequence *_t = static_cast<QInputSequence *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->timeoutChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->buttonIntervalChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->setTimeout((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->setButtonInterval((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QInputSequence::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QInputSequence::timeoutChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QInputSequence::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QInputSequence::buttonIntervalChanged)) {
                *result = 1;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QInputSequence *_t = static_cast<QInputSequence *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->timeout(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->buttonInterval(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QInputSequence *_t = static_cast<QInputSequence *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setTimeout(*reinterpret_cast< int*>(_v)); break;
        case 1: _t->setButtonInterval(*reinterpret_cast< int*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject Qt3DInput::QInputSequence::staticMetaObject = {
    { &Qt3DInput::QAbstractActionInput::staticMetaObject, qt_meta_stringdata_Qt3DInput__QInputSequence.data,
      qt_meta_data_Qt3DInput__QInputSequence,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Qt3DInput::QInputSequence::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Qt3DInput::QInputSequence::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Qt3DInput__QInputSequence.stringdata0))
        return static_cast<void*>(this);
    return Qt3DInput::QAbstractActionInput::qt_metacast(_clname);
}

int Qt3DInput::QInputSequence::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Qt3DInput::QAbstractActionInput::qt_metacall(_c, _id, _a);
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
void Qt3DInput::QInputSequence::timeoutChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Qt3DInput::QInputSequence::buttonIntervalChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
