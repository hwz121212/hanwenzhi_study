/****************************************************************************
** Meta object code from reading C++ file 'qcorewlanengine.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../qcorewlanengine.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qcorewlanengine.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QCoreWlanEngine_t {
    QByteArrayData data[7];
    char stringdata0[90];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QCoreWlanEngine_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QCoreWlanEngine_t qt_meta_stringdata_QCoreWlanEngine = {
    {
QT_MOC_LITERAL(0, 0, 15), // "QCoreWlanEngine"
QT_MOC_LITERAL(1, 16, 15), // "doRequestUpdate"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 15), // "networksChanged"
QT_MOC_LITERAL(4, 49, 15), // "checkDisconnect"
QT_MOC_LITERAL(5, 65, 10), // "initialize"
QT_MOC_LITERAL(6, 76, 13) // "requestUpdate"

    },
    "QCoreWlanEngine\0doRequestUpdate\0\0"
    "networksChanged\0checkDisconnect\0"
    "initialize\0requestUpdate"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QCoreWlanEngine[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x08 /* Private */,
       3,    0,   40,    2, 0x08 /* Private */,
       4,    0,   41,    2, 0x08 /* Private */,

 // methods: name, argc, parameters, tag, flags
       5,    0,   42,    2, 0x02 /* Public */,
       6,    0,   43,    2, 0x02 /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void QCoreWlanEngine::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QCoreWlanEngine *_t = static_cast<QCoreWlanEngine *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->doRequestUpdate(); break;
        case 1: _t->networksChanged(); break;
        case 2: _t->checkDisconnect(); break;
        case 3: _t->initialize(); break;
        case 4: _t->requestUpdate(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject QCoreWlanEngine::staticMetaObject = {
    { &QBearerEngineImpl::staticMetaObject, qt_meta_stringdata_QCoreWlanEngine.data,
      qt_meta_data_QCoreWlanEngine,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QCoreWlanEngine::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QCoreWlanEngine::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QCoreWlanEngine.stringdata0))
        return static_cast<void*>(this);
    return QBearerEngineImpl::qt_metacast(_clname);
}

int QCoreWlanEngine::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QBearerEngineImpl::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}
struct qt_meta_stringdata_QScanThread_t {
    QByteArrayData data[3];
    char stringdata0[29];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QScanThread_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QScanThread_t qt_meta_stringdata_QScanThread = {
    {
QT_MOC_LITERAL(0, 0, 11), // "QScanThread"
QT_MOC_LITERAL(1, 12, 15), // "networksChanged"
QT_MOC_LITERAL(2, 28, 0) // ""

    },
    "QScanThread\0networksChanged\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QScanThread[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,

       0        // eod
};

void QScanThread::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QScanThread *_t = static_cast<QScanThread *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->networksChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QScanThread::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QScanThread::networksChanged)) {
                *result = 0;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject QScanThread::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_QScanThread.data,
      qt_meta_data_QScanThread,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QScanThread::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QScanThread::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QScanThread.stringdata0))
        return static_cast<void*>(this);
    return QThread::qt_metacast(_clname);
}

int QScanThread::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
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
    return _id;
}

// SIGNAL 0
void QScanThread::networksChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
