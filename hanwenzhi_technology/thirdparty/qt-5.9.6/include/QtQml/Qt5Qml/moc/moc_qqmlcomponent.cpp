/****************************************************************************
** Meta object code from reading C++ file 'qqmlcomponent.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../qqmlcomponent.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qqmlcomponent.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QQmlComponent_t {
    QByteArrayData data[24];
    char stringdata0[251];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QQmlComponent_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QQmlComponent_t qt_meta_stringdata_QQmlComponent = {
    {
QT_MOC_LITERAL(0, 0, 13), // "QQmlComponent"
QT_MOC_LITERAL(1, 14, 13), // "statusChanged"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 21), // "QQmlComponent::Status"
QT_MOC_LITERAL(4, 51, 15), // "progressChanged"
QT_MOC_LITERAL(5, 67, 7), // "loadUrl"
QT_MOC_LITERAL(6, 75, 3), // "url"
QT_MOC_LITERAL(7, 79, 15), // "CompilationMode"
QT_MOC_LITERAL(8, 95, 4), // "mode"
QT_MOC_LITERAL(9, 100, 7), // "setData"
QT_MOC_LITERAL(10, 108, 7), // "baseUrl"
QT_MOC_LITERAL(11, 116, 11), // "errorString"
QT_MOC_LITERAL(12, 128, 12), // "createObject"
QT_MOC_LITERAL(13, 141, 15), // "QQmlV4Function*"
QT_MOC_LITERAL(14, 157, 14), // "incubateObject"
QT_MOC_LITERAL(15, 172, 8), // "progress"
QT_MOC_LITERAL(16, 181, 6), // "status"
QT_MOC_LITERAL(17, 188, 6), // "Status"
QT_MOC_LITERAL(18, 195, 17), // "PreferSynchronous"
QT_MOC_LITERAL(19, 213, 12), // "Asynchronous"
QT_MOC_LITERAL(20, 226, 4), // "Null"
QT_MOC_LITERAL(21, 231, 5), // "Ready"
QT_MOC_LITERAL(22, 237, 7), // "Loading"
QT_MOC_LITERAL(23, 245, 5) // "Error"

    },
    "QQmlComponent\0statusChanged\0\0"
    "QQmlComponent::Status\0progressChanged\0"
    "loadUrl\0url\0CompilationMode\0mode\0"
    "setData\0baseUrl\0errorString\0createObject\0"
    "QQmlV4Function*\0incubateObject\0progress\0"
    "status\0Status\0PreferSynchronous\0"
    "Asynchronous\0Null\0Ready\0Loading\0Error"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QQmlComponent[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       3,   80, // properties
       2,   92, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x06 /* Public */,
       4,    1,   57,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,   60,    2, 0x0a /* Public */,
       5,    2,   63,    2, 0x0a /* Public */,
       9,    2,   68,    2, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
      11,    0,   73,    2, 0x02 /* Public */,
      12,    1,   74,    2, 0x01 /* Protected */,
      14,    1,   77,    2, 0x01 /* Protected */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, QMetaType::QReal,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::QUrl,    6,
    QMetaType::Void, QMetaType::QUrl, 0x80000000 | 7,    6,    8,
    QMetaType::Void, QMetaType::QByteArray, QMetaType::QUrl,    2,   10,

 // methods: parameters
    QMetaType::QString,
    QMetaType::Void, 0x80000000 | 13,    2,
    QMetaType::Void, 0x80000000 | 13,    2,

 // properties: name, type, flags
      15, QMetaType::QReal, 0x00495001,
      16, 0x80000000 | 17, 0x00495009,
       6, QMetaType::QUrl, 0x00095401,

 // properties: notify_signal_id
       1,
       0,
       0,

 // enums: name, flags, count, data
       7, 0x0,    2,  100,
      17, 0x0,    4,  104,

 // enum data: key, value
      18, uint(QQmlComponent::PreferSynchronous),
      19, uint(QQmlComponent::Asynchronous),
      20, uint(QQmlComponent::Null),
      21, uint(QQmlComponent::Ready),
      22, uint(QQmlComponent::Loading),
      23, uint(QQmlComponent::Error),

       0        // eod
};

void QQmlComponent::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QQmlComponent *_t = static_cast<QQmlComponent *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->statusChanged((*reinterpret_cast< QQmlComponent::Status(*)>(_a[1]))); break;
        case 1: _t->progressChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 2: _t->loadUrl((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 3: _t->loadUrl((*reinterpret_cast< const QUrl(*)>(_a[1])),(*reinterpret_cast< CompilationMode(*)>(_a[2]))); break;
        case 4: _t->setData((*reinterpret_cast< const QByteArray(*)>(_a[1])),(*reinterpret_cast< const QUrl(*)>(_a[2]))); break;
        case 5: { QString _r = _t->errorString();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 6: _t->createObject((*reinterpret_cast< QQmlV4Function*(*)>(_a[1]))); break;
        case 7: _t->incubateObject((*reinterpret_cast< QQmlV4Function*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QQmlComponent::*_t)(QQmlComponent::Status );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQmlComponent::statusChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QQmlComponent::*_t)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQmlComponent::progressChanged)) {
                *result = 1;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QQmlComponent *_t = static_cast<QQmlComponent *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< qreal*>(_v) = _t->progress(); break;
        case 1: *reinterpret_cast< Status*>(_v) = _t->status(); break;
        case 2: *reinterpret_cast< QUrl*>(_v) = _t->url(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QQmlComponent::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QQmlComponent.data,
      qt_meta_data_QQmlComponent,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QQmlComponent::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QQmlComponent::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QQmlComponent.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QQmlComponent::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
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
void QQmlComponent::statusChanged(QQmlComponent::Status _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QQmlComponent::progressChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
