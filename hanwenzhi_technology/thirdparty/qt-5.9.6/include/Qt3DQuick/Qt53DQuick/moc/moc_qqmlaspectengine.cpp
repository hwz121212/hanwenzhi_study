/****************************************************************************
** Meta object code from reading C++ file 'qqmlaspectengine.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../qqmlaspectengine.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qqmlaspectengine.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Qt3DCore__Quick__QQmlAspectEngine_t {
    QByteArrayData data[7];
    char stringdata0[99];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Qt3DCore__Quick__QQmlAspectEngine_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Qt3DCore__Quick__QQmlAspectEngine_t qt_meta_stringdata_Qt3DCore__Quick__QQmlAspectEngine = {
    {
QT_MOC_LITERAL(0, 0, 33), // "Qt3DCore::Quick::QQmlAspectEn..."
QT_MOC_LITERAL(1, 34, 13), // "statusChanged"
QT_MOC_LITERAL(2, 48, 0), // ""
QT_MOC_LITERAL(3, 49, 6), // "Status"
QT_MOC_LITERAL(4, 56, 12), // "sceneCreated"
QT_MOC_LITERAL(5, 69, 10), // "rootObject"
QT_MOC_LITERAL(6, 80, 18) // "_q_continueExecute"

    },
    "Qt3DCore::Quick::QQmlAspectEngine\0"
    "statusChanged\0\0Status\0sceneCreated\0"
    "rootObject\0_q_continueExecute"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Qt3DCore__Quick__QQmlAspectEngine[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x06 /* Public */,
       4,    1,   32,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    0,   35,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, QMetaType::QObjectStar,    5,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void Qt3DCore::Quick::QQmlAspectEngine::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QQmlAspectEngine *_t = static_cast<QQmlAspectEngine *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->statusChanged((*reinterpret_cast< Status(*)>(_a[1]))); break;
        case 1: _t->sceneCreated((*reinterpret_cast< QObject*(*)>(_a[1]))); break;
        case 2: _t->d_func()->_q_continueExecute(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QQmlAspectEngine::*_t)(Status );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQmlAspectEngine::statusChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QQmlAspectEngine::*_t)(QObject * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQmlAspectEngine::sceneCreated)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject Qt3DCore::Quick::QQmlAspectEngine::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Qt3DCore__Quick__QQmlAspectEngine.data,
      qt_meta_data_Qt3DCore__Quick__QQmlAspectEngine,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Qt3DCore::Quick::QQmlAspectEngine::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Qt3DCore::Quick::QQmlAspectEngine::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Qt3DCore__Quick__QQmlAspectEngine.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Qt3DCore::Quick::QQmlAspectEngine::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
    return _id;
}

// SIGNAL 0
void Qt3DCore::Quick::QQmlAspectEngine::statusChanged(Status _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Qt3DCore::Quick::QQmlAspectEngine::sceneCreated(QObject * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
