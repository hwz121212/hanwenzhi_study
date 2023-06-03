/****************************************************************************
** Meta object code from reading C++ file 'qmetaobjectpublisher_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../5.9.6/QtWebChannel/private/qmetaobjectpublisher_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qmetaobjectpublisher_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QMetaObjectPublisher_t {
    QByteArrayData data[8];
    char stringdata0[110];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QMetaObjectPublisher_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QMetaObjectPublisher_t qt_meta_stringdata_QMetaObjectPublisher = {
    {
QT_MOC_LITERAL(0, 0, 20), // "QMetaObjectPublisher"
QT_MOC_LITERAL(1, 21, 19), // "blockUpdatesChanged"
QT_MOC_LITERAL(2, 41, 0), // ""
QT_MOC_LITERAL(3, 42, 5), // "block"
QT_MOC_LITERAL(4, 48, 13), // "handleMessage"
QT_MOC_LITERAL(5, 62, 7), // "message"
QT_MOC_LITERAL(6, 70, 29), // "QWebChannelAbstractTransport*"
QT_MOC_LITERAL(7, 100, 9) // "transport"

    },
    "QMetaObjectPublisher\0blockUpdatesChanged\0"
    "\0block\0handleMessage\0message\0"
    "QWebChannelAbstractTransport*\0transport"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QMetaObjectPublisher[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    2,   27,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::QJsonObject, 0x80000000 | 6,    5,    7,

       0        // eod
};

void QMetaObjectPublisher::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QMetaObjectPublisher *_t = static_cast<QMetaObjectPublisher *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->blockUpdatesChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->handleMessage((*reinterpret_cast< const QJsonObject(*)>(_a[1])),(*reinterpret_cast< QWebChannelAbstractTransport*(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QMetaObjectPublisher::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QMetaObjectPublisher::blockUpdatesChanged)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject QMetaObjectPublisher::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QMetaObjectPublisher.data,
      qt_meta_data_QMetaObjectPublisher,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QMetaObjectPublisher::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QMetaObjectPublisher::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QMetaObjectPublisher.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QMetaObjectPublisher::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
    return _id;
}

// SIGNAL 0
void QMetaObjectPublisher::blockUpdatesChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
