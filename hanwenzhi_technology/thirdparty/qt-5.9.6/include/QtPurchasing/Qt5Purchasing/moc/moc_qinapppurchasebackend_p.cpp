/****************************************************************************
** Meta object code from reading C++ file 'qinapppurchasebackend_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../5.9.6/QtPurchasing/private/qinapppurchasebackend_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qinapppurchasebackend_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QInAppPurchaseBackend_t {
    QByteArrayData data[13];
    char stringdata0[186];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QInAppPurchaseBackend_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QInAppPurchaseBackend_t qt_meta_stringdata_QInAppPurchaseBackend = {
    {
QT_MOC_LITERAL(0, 0, 21), // "QInAppPurchaseBackend"
QT_MOC_LITERAL(1, 22, 5), // "ready"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 16), // "transactionReady"
QT_MOC_LITERAL(4, 46, 18), // "QInAppTransaction*"
QT_MOC_LITERAL(5, 65, 11), // "transaction"
QT_MOC_LITERAL(6, 77, 18), // "productQueryFailed"
QT_MOC_LITERAL(7, 96, 26), // "QInAppProduct::ProductType"
QT_MOC_LITERAL(8, 123, 11), // "productType"
QT_MOC_LITERAL(9, 135, 10), // "identifier"
QT_MOC_LITERAL(10, 146, 16), // "productQueryDone"
QT_MOC_LITERAL(11, 163, 14), // "QInAppProduct*"
QT_MOC_LITERAL(12, 178, 7) // "product"

    },
    "QInAppPurchaseBackend\0ready\0\0"
    "transactionReady\0QInAppTransaction*\0"
    "transaction\0productQueryFailed\0"
    "QInAppProduct::ProductType\0productType\0"
    "identifier\0productQueryDone\0QInAppProduct*\0"
    "product"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QInAppPurchaseBackend[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x06 /* Public */,
       3,    1,   35,    2, 0x06 /* Public */,
       6,    2,   38,    2, 0x06 /* Public */,
      10,    1,   43,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, 0x80000000 | 7, QMetaType::QString,    8,    9,
    QMetaType::Void, 0x80000000 | 11,   12,

       0        // eod
};

void QInAppPurchaseBackend::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QInAppPurchaseBackend *_t = static_cast<QInAppPurchaseBackend *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->ready(); break;
        case 1: _t->transactionReady((*reinterpret_cast< QInAppTransaction*(*)>(_a[1]))); break;
        case 2: _t->productQueryFailed((*reinterpret_cast< QInAppProduct::ProductType(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 3: _t->productQueryDone((*reinterpret_cast< QInAppProduct*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QInAppProduct* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QInAppPurchaseBackend::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QInAppPurchaseBackend::ready)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QInAppPurchaseBackend::*_t)(QInAppTransaction * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QInAppPurchaseBackend::transactionReady)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QInAppPurchaseBackend::*_t)(QInAppProduct::ProductType , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QInAppPurchaseBackend::productQueryFailed)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (QInAppPurchaseBackend::*_t)(QInAppProduct * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QInAppPurchaseBackend::productQueryDone)) {
                *result = 3;
                return;
            }
        }
    }
}

const QMetaObject QInAppPurchaseBackend::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QInAppPurchaseBackend.data,
      qt_meta_data_QInAppPurchaseBackend,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QInAppPurchaseBackend::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QInAppPurchaseBackend::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QInAppPurchaseBackend.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QInAppPurchaseBackend::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
    return _id;
}

// SIGNAL 0
void QInAppPurchaseBackend::ready()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QInAppPurchaseBackend::transactionReady(QInAppTransaction * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QInAppPurchaseBackend::productQueryFailed(QInAppProduct::ProductType _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QInAppPurchaseBackend::productQueryDone(QInAppProduct * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
