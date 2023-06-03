/****************************************************************************
** Meta object code from reading C++ file 'qqmlprofilerservice.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../qqmlprofilerservice.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qqmlprofilerservice.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QQmlProfilerServiceImpl_t {
    QByteArrayData data[4];
    char stringdata0[56];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QQmlProfilerServiceImpl_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QQmlProfilerServiceImpl_t qt_meta_stringdata_QQmlProfilerServiceImpl = {
    {
QT_MOC_LITERAL(0, 0, 23), // "QQmlProfilerServiceImpl"
QT_MOC_LITERAL(1, 24, 15), // "startFlushTimer"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 14) // "stopFlushTimer"

    },
    "QQmlProfilerServiceImpl\0startFlushTimer\0"
    "\0stopFlushTimer"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QQmlProfilerServiceImpl[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   24,    2, 0x06 /* Public */,
       3,    0,   25,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void QQmlProfilerServiceImpl::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QQmlProfilerServiceImpl *_t = static_cast<QQmlProfilerServiceImpl *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->startFlushTimer(); break;
        case 1: _t->stopFlushTimer(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QQmlProfilerServiceImpl::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQmlProfilerServiceImpl::startFlushTimer)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QQmlProfilerServiceImpl::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQmlProfilerServiceImpl::stopFlushTimer)) {
                *result = 1;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject QQmlProfilerServiceImpl::staticMetaObject = {
    { &QQmlConfigurableDebugService<QQmlProfilerService>::staticMetaObject, qt_meta_stringdata_QQmlProfilerServiceImpl.data,
      qt_meta_data_QQmlProfilerServiceImpl,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QQmlProfilerServiceImpl::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QQmlProfilerServiceImpl::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QQmlProfilerServiceImpl.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "QQmlProfilerDefinitions"))
        return static_cast< QQmlProfilerDefinitions*>(this);
    return QQmlConfigurableDebugService<QQmlProfilerService>::qt_metacast(_clname);
}

int QQmlProfilerServiceImpl::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QQmlConfigurableDebugService<QQmlProfilerService>::qt_metacall(_c, _id, _a);
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
void QQmlProfilerServiceImpl::startFlushTimer()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QQmlProfilerServiceImpl::stopFlushTimer()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
