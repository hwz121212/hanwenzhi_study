/****************************************************************************
** Meta object code from reading C++ file 'qnearfieldmanager.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../qnearfieldmanager.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qnearfieldmanager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QNearFieldManager_t {
    QByteArrayData data[11];
    char stringdata0[173];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QNearFieldManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QNearFieldManager_t qt_meta_stringdata_QNearFieldManager = {
    {
QT_MOC_LITERAL(0, 0, 17), // "QNearFieldManager"
QT_MOC_LITERAL(1, 18, 14), // "targetDetected"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 17), // "QNearFieldTarget*"
QT_MOC_LITERAL(4, 52, 6), // "target"
QT_MOC_LITERAL(5, 59, 10), // "targetLost"
QT_MOC_LITERAL(6, 70, 16), // "TargetAccessMode"
QT_MOC_LITERAL(7, 87, 14), // "NoTargetAccess"
QT_MOC_LITERAL(8, 102, 20), // "NdefReadTargetAccess"
QT_MOC_LITERAL(9, 123, 21), // "NdefWriteTargetAccess"
QT_MOC_LITERAL(10, 145, 27) // "TagTypeSpecificTargetAccess"

    },
    "QNearFieldManager\0targetDetected\0\0"
    "QNearFieldTarget*\0target\0targetLost\0"
    "TargetAccessMode\0NoTargetAccess\0"
    "NdefReadTargetAccess\0NdefWriteTargetAccess\0"
    "TagTypeSpecificTargetAccess"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QNearFieldManager[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       1,   30, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x06 /* Public */,
       5,    1,   27,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,

 // enums: name, flags, count, data
       6, 0x0,    4,   34,

 // enum data: key, value
       7, uint(QNearFieldManager::NoTargetAccess),
       8, uint(QNearFieldManager::NdefReadTargetAccess),
       9, uint(QNearFieldManager::NdefWriteTargetAccess),
      10, uint(QNearFieldManager::TagTypeSpecificTargetAccess),

       0        // eod
};

void QNearFieldManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QNearFieldManager *_t = static_cast<QNearFieldManager *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->targetDetected((*reinterpret_cast< QNearFieldTarget*(*)>(_a[1]))); break;
        case 1: _t->targetLost((*reinterpret_cast< QNearFieldTarget*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNearFieldTarget* >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNearFieldTarget* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QNearFieldManager::*_t)(QNearFieldTarget * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QNearFieldManager::targetDetected)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QNearFieldManager::*_t)(QNearFieldTarget * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QNearFieldManager::targetLost)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject QNearFieldManager::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QNearFieldManager.data,
      qt_meta_data_QNearFieldManager,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QNearFieldManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QNearFieldManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QNearFieldManager.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QNearFieldManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void QNearFieldManager::targetDetected(QNearFieldTarget * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QNearFieldManager::targetLost(QNearFieldTarget * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
