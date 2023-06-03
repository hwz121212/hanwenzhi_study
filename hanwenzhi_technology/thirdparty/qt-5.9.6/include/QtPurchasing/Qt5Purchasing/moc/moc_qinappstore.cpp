/****************************************************************************
** Meta object code from reading C++ file 'qinappstore.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../qinappstore.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qinappstore.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QInAppStore_t {
    QByteArrayData data[19];
    char stringdata0[281];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QInAppStore_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QInAppStore_t qt_meta_stringdata_QInAppStore = {
    {
QT_MOC_LITERAL(0, 0, 11), // "QInAppStore"
QT_MOC_LITERAL(1, 12, 17), // "productRegistered"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 14), // "QInAppProduct*"
QT_MOC_LITERAL(4, 46, 7), // "product"
QT_MOC_LITERAL(5, 54, 14), // "productUnknown"
QT_MOC_LITERAL(6, 69, 26), // "QInAppProduct::ProductType"
QT_MOC_LITERAL(7, 96, 11), // "productType"
QT_MOC_LITERAL(8, 108, 10), // "identifier"
QT_MOC_LITERAL(9, 119, 16), // "transactionReady"
QT_MOC_LITERAL(10, 136, 18), // "QInAppTransaction*"
QT_MOC_LITERAL(11, 155, 11), // "transaction"
QT_MOC_LITERAL(12, 167, 23), // "registerPendingProducts"
QT_MOC_LITERAL(13, 191, 15), // "registerProduct"
QT_MOC_LITERAL(14, 207, 16), // "restorePurchases"
QT_MOC_LITERAL(15, 224, 17), // "registeredProduct"
QT_MOC_LITERAL(16, 242, 19), // "setPlatformProperty"
QT_MOC_LITERAL(17, 262, 12), // "propertyName"
QT_MOC_LITERAL(18, 275, 5) // "value"

    },
    "QInAppStore\0productRegistered\0\0"
    "QInAppProduct*\0product\0productUnknown\0"
    "QInAppProduct::ProductType\0productType\0"
    "identifier\0transactionReady\0"
    "QInAppTransaction*\0transaction\0"
    "registerPendingProducts\0registerProduct\0"
    "restorePurchases\0registeredProduct\0"
    "setPlatformProperty\0propertyName\0value"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QInAppStore[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   59,    2, 0x06 /* Public */,
       5,    2,   62,    2, 0x06 /* Public */,
       9,    1,   67,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      12,    0,   70,    2, 0x08 /* Private */,
      13,    1,   71,    2, 0x08 /* Private */,

 // methods: name, argc, parameters, tag, flags
      14,    0,   74,    2, 0x02 /* Public */,
      13,    2,   75,    2, 0x02 /* Public */,
      15,    1,   80,    2, 0x02 /* Public */,
      16,    2,   83,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 6, QMetaType::QString,    7,    8,
    QMetaType::Void, 0x80000000 | 10,   11,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 3,    2,

 // methods: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 6, QMetaType::QString,    7,    8,
    0x80000000 | 3, QMetaType::QString,    8,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   17,   18,

       0        // eod
};

void QInAppStore::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QInAppStore *_t = static_cast<QInAppStore *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->productRegistered((*reinterpret_cast< QInAppProduct*(*)>(_a[1]))); break;
        case 1: _t->productUnknown((*reinterpret_cast< QInAppProduct::ProductType(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 2: _t->transactionReady((*reinterpret_cast< QInAppTransaction*(*)>(_a[1]))); break;
        case 3: _t->registerPendingProducts(); break;
        case 4: _t->registerProduct((*reinterpret_cast< QInAppProduct*(*)>(_a[1]))); break;
        case 5: _t->restorePurchases(); break;
        case 6: _t->registerProduct((*reinterpret_cast< QInAppProduct::ProductType(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 7: { QInAppProduct* _r = _t->registeredProduct((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QInAppProduct**>(_a[0]) = std::move(_r); }  break;
        case 8: _t->setPlatformProperty((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QInAppProduct* >(); break;
            }
            break;
        case 4:
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
            typedef void (QInAppStore::*_t)(QInAppProduct * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QInAppStore::productRegistered)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QInAppStore::*_t)(QInAppProduct::ProductType , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QInAppStore::productUnknown)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QInAppStore::*_t)(QInAppTransaction * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QInAppStore::transactionReady)) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject QInAppStore::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QInAppStore.data,
      qt_meta_data_QInAppStore,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QInAppStore::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QInAppStore::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QInAppStore.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QInAppStore::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void QInAppStore::productRegistered(QInAppProduct * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QInAppStore::productUnknown(QInAppProduct::ProductType _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QInAppStore::transactionReady(QInAppTransaction * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
