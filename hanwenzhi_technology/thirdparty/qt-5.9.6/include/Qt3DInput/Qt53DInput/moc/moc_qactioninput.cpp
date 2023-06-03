/****************************************************************************
** Meta object code from reading C++ file 'qactioninput.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../qactioninput.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QVector>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qactioninput.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Qt3DInput__QActionInput_t {
    QByteArrayData data[11];
    char stringdata0[182];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Qt3DInput__QActionInput_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Qt3DInput__QActionInput_t qt_meta_stringdata_Qt3DInput__QActionInput = {
    {
QT_MOC_LITERAL(0, 0, 23), // "Qt3DInput::QActionInput"
QT_MOC_LITERAL(1, 24, 19), // "sourceDeviceChanged"
QT_MOC_LITERAL(2, 44, 0), // ""
QT_MOC_LITERAL(3, 45, 24), // "QAbstractPhysicalDevice*"
QT_MOC_LITERAL(4, 70, 12), // "sourceDevice"
QT_MOC_LITERAL(5, 83, 14), // "buttonsChanged"
QT_MOC_LITERAL(6, 98, 12), // "QVector<int>"
QT_MOC_LITERAL(7, 111, 7), // "buttons"
QT_MOC_LITERAL(8, 119, 15), // "setSourceDevice"
QT_MOC_LITERAL(9, 135, 10), // "setButtons"
QT_MOC_LITERAL(10, 146, 35) // "Qt3DInput::QAbstractPhysicalD..."

    },
    "Qt3DInput::QActionInput\0sourceDeviceChanged\0"
    "\0QAbstractPhysicalDevice*\0sourceDevice\0"
    "buttonsChanged\0QVector<int>\0buttons\0"
    "setSourceDevice\0setButtons\0"
    "Qt3DInput::QAbstractPhysicalDevice*"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Qt3DInput__QActionInput[] = {

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
       5,    1,   37,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    1,   40,    2, 0x0a /* Public */,
       9,    1,   43,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 6,    7,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 6,    7,

 // properties: name, type, flags
       4, 0x80000000 | 10, 0x0049510b,
       7, 0x80000000 | 6, 0x0049510b,

 // properties: notify_signal_id
       0,
       1,

       0        // eod
};

void Qt3DInput::QActionInput::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QActionInput *_t = static_cast<QActionInput *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sourceDeviceChanged((*reinterpret_cast< QAbstractPhysicalDevice*(*)>(_a[1]))); break;
        case 1: _t->buttonsChanged((*reinterpret_cast< const QVector<int>(*)>(_a[1]))); break;
        case 2: _t->setSourceDevice((*reinterpret_cast< QAbstractPhysicalDevice*(*)>(_a[1]))); break;
        case 3: _t->setButtons((*reinterpret_cast< const QVector<int>(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<int> >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<int> >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QActionInput::*_t)(QAbstractPhysicalDevice * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QActionInput::sourceDeviceChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QActionInput::*_t)(const QVector<int> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QActionInput::buttonsChanged)) {
                *result = 1;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<int> >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QActionInput *_t = static_cast<QActionInput *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< Qt3DInput::QAbstractPhysicalDevice**>(_v) = _t->sourceDevice(); break;
        case 1: *reinterpret_cast< QVector<int>*>(_v) = _t->buttons(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QActionInput *_t = static_cast<QActionInput *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setSourceDevice(*reinterpret_cast< Qt3DInput::QAbstractPhysicalDevice**>(_v)); break;
        case 1: _t->setButtons(*reinterpret_cast< QVector<int>*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject Qt3DInput::QActionInput::staticMetaObject = {
    { &Qt3DInput::QAbstractActionInput::staticMetaObject, qt_meta_stringdata_Qt3DInput__QActionInput.data,
      qt_meta_data_Qt3DInput__QActionInput,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Qt3DInput::QActionInput::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Qt3DInput::QActionInput::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Qt3DInput__QActionInput.stringdata0))
        return static_cast<void*>(this);
    return Qt3DInput::QAbstractActionInput::qt_metacast(_clname);
}

int Qt3DInput::QActionInput::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            qt_static_metacall(this, _c, _id, _a);
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
void Qt3DInput::QActionInput::sourceDeviceChanged(QAbstractPhysicalDevice * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Qt3DInput::QActionInput::buttonsChanged(const QVector<int> & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
