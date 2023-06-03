/****************************************************************************
** Meta object code from reading C++ file 'qdeclarativendefurirecord_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../qdeclarativendefurirecord_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qdeclarativendefurirecord_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QDeclarativeNdefUriRecord_t {
    QByteArrayData data[7];
    char stringdata0[68];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QDeclarativeNdefUriRecord_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QDeclarativeNdefUriRecord_t qt_meta_stringdata_QDeclarativeNdefUriRecord = {
    {
QT_MOC_LITERAL(0, 0, 25), // "QDeclarativeNdefUriRecord"
QT_MOC_LITERAL(1, 26, 10), // "uriChanged"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 11), // "QNdefRecord"
QT_MOC_LITERAL(4, 50, 6), // "record"
QT_MOC_LITERAL(5, 57, 6), // "parent"
QT_MOC_LITERAL(6, 64, 3) // "uri"

    },
    "QDeclarativeNdefUriRecord\0uriChanged\0"
    "\0QNdefRecord\0record\0parent\0uri"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QDeclarativeNdefUriRecord[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       1,   28, // properties
       0,    0, // enums/sets
       2,   32, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,

 // constructors: parameters
    0x80000000 | 2, 0x80000000 | 3, QMetaType::QObjectStar,    4,    5,
    0x80000000 | 2, 0x80000000 | 3,    4,

 // properties: name, type, flags
       6, QMetaType::QString, 0x00495103,

 // properties: notify_signal_id
       0,

 // constructors: name, argc, parameters, tag, flags
       0,    2,   20,    2, 0x0e /* Public */,
       0,    1,   25,    2, 0x2e /* Public | MethodCloned */,

       0        // eod
};

void QDeclarativeNdefUriRecord::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::CreateInstance) {
        switch (_id) {
        case 0: { QDeclarativeNdefUriRecord *_r = new QDeclarativeNdefUriRecord((*reinterpret_cast< const QNdefRecord(*)>(_a[1])),(*reinterpret_cast< QObject*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast<QObject**>(_a[0]) = _r; } break;
        case 1: { QDeclarativeNdefUriRecord *_r = new QDeclarativeNdefUriRecord((*reinterpret_cast< const QNdefRecord(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast<QObject**>(_a[0]) = _r; } break;
        default: break;
        }
    } else if (_c == QMetaObject::InvokeMetaMethod) {
        QDeclarativeNdefUriRecord *_t = static_cast<QDeclarativeNdefUriRecord *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->uriChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QDeclarativeNdefUriRecord::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QDeclarativeNdefUriRecord::uriChanged)) {
                *result = 0;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QDeclarativeNdefUriRecord *_t = static_cast<QDeclarativeNdefUriRecord *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->uri(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QDeclarativeNdefUriRecord *_t = static_cast<QDeclarativeNdefUriRecord *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setUri(*reinterpret_cast< QString*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QDeclarativeNdefUriRecord::staticMetaObject = {
    { &QQmlNdefRecord::staticMetaObject, qt_meta_stringdata_QDeclarativeNdefUriRecord.data,
      qt_meta_data_QDeclarativeNdefUriRecord,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QDeclarativeNdefUriRecord::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QDeclarativeNdefUriRecord::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QDeclarativeNdefUriRecord.stringdata0))
        return static_cast<void*>(this);
    return QQmlNdefRecord::qt_metacast(_clname);
}

int QDeclarativeNdefUriRecord::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QQmlNdefRecord::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
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
void QDeclarativeNdefUriRecord::uriChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
