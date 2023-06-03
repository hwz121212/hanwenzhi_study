/****************************************************************************
** Meta object code from reading C++ file 'qinapptransaction.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../qinapptransaction.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qinapptransaction.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QInAppTransaction_t {
    QByteArrayData data[21];
    char stringdata0[260];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QInAppTransaction_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QInAppTransaction_t qt_meta_stringdata_QInAppTransaction = {
    {
QT_MOC_LITERAL(0, 0, 17), // "QInAppTransaction"
QT_MOC_LITERAL(1, 18, 8), // "finalize"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 16), // "platformProperty"
QT_MOC_LITERAL(4, 45, 12), // "propertyName"
QT_MOC_LITERAL(5, 58, 6), // "status"
QT_MOC_LITERAL(6, 65, 17), // "TransactionStatus"
QT_MOC_LITERAL(7, 83, 7), // "product"
QT_MOC_LITERAL(8, 91, 14), // "QInAppProduct*"
QT_MOC_LITERAL(9, 106, 7), // "orderId"
QT_MOC_LITERAL(10, 114, 13), // "failureReason"
QT_MOC_LITERAL(11, 128, 13), // "FailureReason"
QT_MOC_LITERAL(12, 142, 11), // "errorString"
QT_MOC_LITERAL(13, 154, 9), // "timestamp"
QT_MOC_LITERAL(14, 164, 7), // "Unknown"
QT_MOC_LITERAL(15, 172, 16), // "PurchaseApproved"
QT_MOC_LITERAL(16, 189, 14), // "PurchaseFailed"
QT_MOC_LITERAL(17, 204, 16), // "PurchaseRestored"
QT_MOC_LITERAL(18, 221, 9), // "NoFailure"
QT_MOC_LITERAL(19, 231, 14), // "CanceledByUser"
QT_MOC_LITERAL(20, 246, 13) // "ErrorOccurred"

    },
    "QInAppTransaction\0finalize\0\0"
    "platformProperty\0propertyName\0status\0"
    "TransactionStatus\0product\0QInAppProduct*\0"
    "orderId\0failureReason\0FailureReason\0"
    "errorString\0timestamp\0Unknown\0"
    "PurchaseApproved\0PurchaseFailed\0"
    "PurchaseRestored\0NoFailure\0CanceledByUser\0"
    "ErrorOccurred"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QInAppTransaction[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       6,   28, // properties
       2,   46, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // methods: name, argc, parameters, tag, flags
       1,    0,   24,    2, 0x02 /* Public */,
       3,    1,   25,    2, 0x02 /* Public */,

 // methods: parameters
    QMetaType::Void,
    QMetaType::QString, QMetaType::QString,    4,

 // properties: name, type, flags
       5, 0x80000000 | 6, 0x00095409,
       7, 0x80000000 | 8, 0x00095409,
       9, QMetaType::QString, 0x00095401,
      10, 0x80000000 | 11, 0x00095409,
      12, QMetaType::QString, 0x00095401,
      13, QMetaType::QDateTime, 0x00095401,

 // enums: name, flags, count, data
       6, 0x0,    4,   54,
      11, 0x0,    3,   62,

 // enum data: key, value
      14, uint(QInAppTransaction::Unknown),
      15, uint(QInAppTransaction::PurchaseApproved),
      16, uint(QInAppTransaction::PurchaseFailed),
      17, uint(QInAppTransaction::PurchaseRestored),
      18, uint(QInAppTransaction::NoFailure),
      19, uint(QInAppTransaction::CanceledByUser),
      20, uint(QInAppTransaction::ErrorOccurred),

       0        // eod
};

void QInAppTransaction::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QInAppTransaction *_t = static_cast<QInAppTransaction *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->finalize(); break;
        case 1: { QString _r = _t->platformProperty((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QInAppTransaction *_t = static_cast<QInAppTransaction *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< TransactionStatus*>(_v) = _t->status(); break;
        case 1: *reinterpret_cast< QInAppProduct**>(_v) = _t->product(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->orderId(); break;
        case 3: *reinterpret_cast< FailureReason*>(_v) = _t->failureReason(); break;
        case 4: *reinterpret_cast< QString*>(_v) = _t->errorString(); break;
        case 5: *reinterpret_cast< QDateTime*>(_v) = _t->timestamp(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QInAppTransaction::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QInAppTransaction.data,
      qt_meta_data_QInAppTransaction,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QInAppTransaction::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QInAppTransaction::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QInAppTransaction.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QInAppTransaction::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 6;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
