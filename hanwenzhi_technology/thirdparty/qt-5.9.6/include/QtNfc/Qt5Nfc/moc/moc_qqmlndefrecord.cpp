/****************************************************************************
** Meta object code from reading C++ file 'qqmlndefrecord.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../qqmlndefrecord.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qqmlndefrecord.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QQmlNdefRecord_t {
    QByteArrayData data[16];
    char stringdata0[160];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QQmlNdefRecord_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QQmlNdefRecord_t qt_meta_stringdata_QQmlNdefRecord = {
    {
QT_MOC_LITERAL(0, 0, 14), // "QQmlNdefRecord"
QT_MOC_LITERAL(1, 15, 11), // "typeChanged"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 21), // "typeNameFormatChanged"
QT_MOC_LITERAL(4, 50, 13), // "recordChanged"
QT_MOC_LITERAL(5, 64, 4), // "type"
QT_MOC_LITERAL(6, 69, 14), // "typeNameFormat"
QT_MOC_LITERAL(7, 84, 14), // "TypeNameFormat"
QT_MOC_LITERAL(8, 99, 6), // "record"
QT_MOC_LITERAL(9, 106, 11), // "QNdefRecord"
QT_MOC_LITERAL(10, 118, 5), // "Empty"
QT_MOC_LITERAL(11, 124, 6), // "NfcRtd"
QT_MOC_LITERAL(12, 131, 4), // "Mime"
QT_MOC_LITERAL(13, 136, 3), // "Uri"
QT_MOC_LITERAL(14, 140, 11), // "ExternalRtd"
QT_MOC_LITERAL(15, 152, 7) // "Unknown"

    },
    "QQmlNdefRecord\0typeChanged\0\0"
    "typeNameFormatChanged\0recordChanged\0"
    "type\0typeNameFormat\0TypeNameFormat\0"
    "record\0QNdefRecord\0Empty\0NfcRtd\0Mime\0"
    "Uri\0ExternalRtd\0Unknown"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QQmlNdefRecord[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       3,   32, // properties
       1,   44, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x06 /* Public */,
       3,    0,   30,    2, 0x06 /* Public */,
       4,    0,   31,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
       5, QMetaType::QString, 0x00495103,
       6, 0x80000000 | 7, 0x0049510b,
       8, 0x80000000 | 9, 0x0049510b,

 // properties: notify_signal_id
       0,
       1,
       2,

 // enums: name, flags, count, data
       7, 0x0,    6,   48,

 // enum data: key, value
      10, uint(QQmlNdefRecord::Empty),
      11, uint(QQmlNdefRecord::NfcRtd),
      12, uint(QQmlNdefRecord::Mime),
      13, uint(QQmlNdefRecord::Uri),
      14, uint(QQmlNdefRecord::ExternalRtd),
      15, uint(QQmlNdefRecord::Unknown),

       0        // eod
};

void QQmlNdefRecord::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QQmlNdefRecord *_t = static_cast<QQmlNdefRecord *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->typeChanged(); break;
        case 1: _t->typeNameFormatChanged(); break;
        case 2: _t->recordChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QQmlNdefRecord::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQmlNdefRecord::typeChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QQmlNdefRecord::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQmlNdefRecord::typeNameFormatChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QQmlNdefRecord::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQmlNdefRecord::recordChanged)) {
                *result = 2;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QQmlNdefRecord *_t = static_cast<QQmlNdefRecord *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->type(); break;
        case 1: *reinterpret_cast< TypeNameFormat*>(_v) = _t->typeNameFormat(); break;
        case 2: *reinterpret_cast< QNdefRecord*>(_v) = _t->record(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QQmlNdefRecord *_t = static_cast<QQmlNdefRecord *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setType(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setTypeNameFormat(*reinterpret_cast< TypeNameFormat*>(_v)); break;
        case 2: _t->setRecord(*reinterpret_cast< QNdefRecord*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_a);
}

const QMetaObject QQmlNdefRecord::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QQmlNdefRecord.data,
      qt_meta_data_QQmlNdefRecord,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QQmlNdefRecord::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QQmlNdefRecord::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QQmlNdefRecord.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QQmlNdefRecord::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 3;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QQmlNdefRecord::typeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QQmlNdefRecord::typeNameFormatChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void QQmlNdefRecord::recordChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
