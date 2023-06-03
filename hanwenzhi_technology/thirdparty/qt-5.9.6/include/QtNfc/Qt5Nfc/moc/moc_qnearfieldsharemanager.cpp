/****************************************************************************
** Meta object code from reading C++ file 'qnearfieldsharemanager.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../qnearfieldsharemanager.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qnearfieldsharemanager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QNearFieldShareManager_t {
    QByteArrayData data[24];
    char stringdata0[410];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QNearFieldShareManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QNearFieldShareManager_t qt_meta_stringdata_QNearFieldShareManager = {
    {
QT_MOC_LITERAL(0, 0, 22), // "QNearFieldShareManager"
QT_MOC_LITERAL(1, 23, 14), // "targetDetected"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 22), // "QNearFieldShareTarget*"
QT_MOC_LITERAL(4, 62, 11), // "shareTarget"
QT_MOC_LITERAL(5, 74, 17), // "shareModesChanged"
QT_MOC_LITERAL(6, 92, 34), // "QNearFieldShareManager::Share..."
QT_MOC_LITERAL(7, 127, 5), // "modes"
QT_MOC_LITERAL(8, 133, 5), // "error"
QT_MOC_LITERAL(9, 139, 34), // "QNearFieldShareManager::Share..."
QT_MOC_LITERAL(10, 174, 10), // "ShareError"
QT_MOC_LITERAL(11, 185, 7), // "NoError"
QT_MOC_LITERAL(12, 193, 12), // "UnknownError"
QT_MOC_LITERAL(13, 206, 24), // "InvalidShareContentError"
QT_MOC_LITERAL(14, 231, 18), // "ShareCanceledError"
QT_MOC_LITERAL(15, 250, 21), // "ShareInterruptedError"
QT_MOC_LITERAL(16, 272, 18), // "ShareRejectedError"
QT_MOC_LITERAL(17, 291, 25), // "UnsupportedShareModeError"
QT_MOC_LITERAL(18, 317, 27), // "ShareAlreadyInProgressError"
QT_MOC_LITERAL(19, 345, 26), // "SharePermissionDeniedError"
QT_MOC_LITERAL(20, 372, 9), // "ShareMode"
QT_MOC_LITERAL(21, 382, 7), // "NoShare"
QT_MOC_LITERAL(22, 390, 9), // "NdefShare"
QT_MOC_LITERAL(23, 400, 9) // "FileShare"

    },
    "QNearFieldShareManager\0targetDetected\0"
    "\0QNearFieldShareTarget*\0shareTarget\0"
    "shareModesChanged\0QNearFieldShareManager::ShareModes\0"
    "modes\0error\0QNearFieldShareManager::ShareError\0"
    "ShareError\0NoError\0UnknownError\0"
    "InvalidShareContentError\0ShareCanceledError\0"
    "ShareInterruptedError\0ShareRejectedError\0"
    "UnsupportedShareModeError\0"
    "ShareAlreadyInProgressError\0"
    "SharePermissionDeniedError\0ShareMode\0"
    "NoShare\0NdefShare\0FileShare"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QNearFieldShareManager[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       2,   38, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x06 /* Public */,
       5,    1,   32,    2, 0x06 /* Public */,
       8,    1,   35,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, 0x80000000 | 9,    8,

 // enums: name, flags, count, data
      10, 0x0,    9,   46,
      20, 0x0,    3,   64,

 // enum data: key, value
      11, uint(QNearFieldShareManager::NoError),
      12, uint(QNearFieldShareManager::UnknownError),
      13, uint(QNearFieldShareManager::InvalidShareContentError),
      14, uint(QNearFieldShareManager::ShareCanceledError),
      15, uint(QNearFieldShareManager::ShareInterruptedError),
      16, uint(QNearFieldShareManager::ShareRejectedError),
      17, uint(QNearFieldShareManager::UnsupportedShareModeError),
      18, uint(QNearFieldShareManager::ShareAlreadyInProgressError),
      19, uint(QNearFieldShareManager::SharePermissionDeniedError),
      21, uint(QNearFieldShareManager::NoShare),
      22, uint(QNearFieldShareManager::NdefShare),
      23, uint(QNearFieldShareManager::FileShare),

       0        // eod
};

void QNearFieldShareManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QNearFieldShareManager *_t = static_cast<QNearFieldShareManager *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->targetDetected((*reinterpret_cast< QNearFieldShareTarget*(*)>(_a[1]))); break;
        case 1: _t->shareModesChanged((*reinterpret_cast< QNearFieldShareManager::ShareModes(*)>(_a[1]))); break;
        case 2: _t->error((*reinterpret_cast< QNearFieldShareManager::ShareError(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QNearFieldShareManager::*_t)(QNearFieldShareTarget * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QNearFieldShareManager::targetDetected)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QNearFieldShareManager::*_t)(QNearFieldShareManager::ShareModes );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QNearFieldShareManager::shareModesChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QNearFieldShareManager::*_t)(QNearFieldShareManager::ShareError );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QNearFieldShareManager::error)) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject QNearFieldShareManager::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QNearFieldShareManager.data,
      qt_meta_data_QNearFieldShareManager,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QNearFieldShareManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QNearFieldShareManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QNearFieldShareManager.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QNearFieldShareManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void QNearFieldShareManager::targetDetected(QNearFieldShareTarget * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QNearFieldShareManager::shareModesChanged(QNearFieldShareManager::ShareModes _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QNearFieldShareManager::error(QNearFieldShareManager::ShareError _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
