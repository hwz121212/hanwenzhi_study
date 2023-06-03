/****************************************************************************
** Meta object code from reading C++ file 'qmlprofilerclient.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../qmlprofilerclient.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qmlprofilerclient.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QmlProfilerClient_t {
    QByteArrayData data[6];
    char stringdata0[65];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QmlProfilerClient_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QmlProfilerClient_t qt_meta_stringdata_QmlProfilerClient = {
    {
QT_MOC_LITERAL(0, 0, 17), // "QmlProfilerClient"
QT_MOC_LITERAL(1, 18, 14), // "enabledChanged"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 7), // "enabled"
QT_MOC_LITERAL(4, 42, 16), // "recordingStarted"
QT_MOC_LITERAL(5, 59, 5) // "error"

    },
    "QmlProfilerClient\0enabledChanged\0\0"
    "enabled\0recordingStarted\0error"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QmlProfilerClient[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x06 /* Public */,
       4,    0,   32,    2, 0x06 /* Public */,
       5,    1,   33,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    5,

       0        // eod
};

void QmlProfilerClient::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QmlProfilerClient *_t = static_cast<QmlProfilerClient *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->enabledChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->recordingStarted(); break;
        case 2: _t->error((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QmlProfilerClient::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QmlProfilerClient::enabledChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QmlProfilerClient::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QmlProfilerClient::recordingStarted)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QmlProfilerClient::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QmlProfilerClient::error)) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject QmlProfilerClient::staticMetaObject = {
    { &QQmlProfilerClient::staticMetaObject, qt_meta_stringdata_QmlProfilerClient.data,
      qt_meta_data_QmlProfilerClient,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QmlProfilerClient::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QmlProfilerClient::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QmlProfilerClient.stringdata0))
        return static_cast<void*>(this);
    return QQmlProfilerClient::qt_metacast(_clname);
}

int QmlProfilerClient::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QQmlProfilerClient::qt_metacall(_c, _id, _a);
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
void QmlProfilerClient::enabledChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QmlProfilerClient::recordingStarted()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void QmlProfilerClient::error(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
