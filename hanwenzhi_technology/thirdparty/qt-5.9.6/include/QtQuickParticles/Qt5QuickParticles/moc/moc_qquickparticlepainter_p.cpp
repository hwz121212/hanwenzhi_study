/****************************************************************************
** Meta object code from reading C++ file 'qquickparticlepainter_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../5.9.6/QtQuickParticles/private/qquickparticlepainter_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qquickparticlepainter_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QQuickParticlePainter_t {
    QByteArrayData data[14];
    char stringdata0[176];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QQuickParticlePainter_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QQuickParticlePainter_t qt_meta_stringdata_QQuickParticlePainter = {
    {
QT_MOC_LITERAL(0, 0, 21), // "QQuickParticlePainter"
QT_MOC_LITERAL(1, 22, 12), // "countChanged"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 13), // "systemChanged"
QT_MOC_LITERAL(4, 50, 21), // "QQuickParticleSystem*"
QT_MOC_LITERAL(5, 72, 3), // "arg"
QT_MOC_LITERAL(6, 76, 13), // "groupsChanged"
QT_MOC_LITERAL(7, 90, 9), // "setSystem"
QT_MOC_LITERAL(8, 100, 9), // "setGroups"
QT_MOC_LITERAL(9, 110, 16), // "calcSystemOffset"
QT_MOC_LITERAL(10, 127, 12), // "resetPending"
QT_MOC_LITERAL(11, 140, 21), // "sceneGraphInvalidated"
QT_MOC_LITERAL(12, 162, 6), // "system"
QT_MOC_LITERAL(13, 169, 6) // "groups"

    },
    "QQuickParticlePainter\0countChanged\0\0"
    "systemChanged\0QQuickParticleSystem*\0"
    "arg\0groupsChanged\0setSystem\0setGroups\0"
    "calcSystemOffset\0resetPending\0"
    "sceneGraphInvalidated\0system\0groups"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QQuickParticlePainter[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       2,   72, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x06 /* Public */,
       3,    1,   55,    2, 0x06 /* Public */,
       6,    1,   58,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    1,   61,    2, 0x0a /* Public */,
       8,    1,   64,    2, 0x0a /* Public */,
       9,    1,   67,    2, 0x0a /* Public */,
       9,    0,   70,    2, 0x2a /* Public | MethodCloned */,
      11,    0,   71,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, QMetaType::QStringList,    5,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, QMetaType::QStringList,    5,
    QMetaType::Void, QMetaType::Bool,   10,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
      12, 0x80000000 | 4, 0x0049510b,
      13, QMetaType::QStringList, 0x00495103,

 // properties: notify_signal_id
       1,
       2,

       0        // eod
};

void QQuickParticlePainter::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QQuickParticlePainter *_t = static_cast<QQuickParticlePainter *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->countChanged(); break;
        case 1: _t->systemChanged((*reinterpret_cast< QQuickParticleSystem*(*)>(_a[1]))); break;
        case 2: _t->groupsChanged((*reinterpret_cast< const QStringList(*)>(_a[1]))); break;
        case 3: _t->setSystem((*reinterpret_cast< QQuickParticleSystem*(*)>(_a[1]))); break;
        case 4: _t->setGroups((*reinterpret_cast< const QStringList(*)>(_a[1]))); break;
        case 5: _t->calcSystemOffset((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->calcSystemOffset(); break;
        case 7: _t->sceneGraphInvalidated(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QQuickParticleSystem* >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QQuickParticleSystem* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QQuickParticlePainter::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickParticlePainter::countChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QQuickParticlePainter::*_t)(QQuickParticleSystem * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickParticlePainter::systemChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QQuickParticlePainter::*_t)(const QStringList & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickParticlePainter::groupsChanged)) {
                *result = 2;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QQuickParticleSystem* >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QQuickParticlePainter *_t = static_cast<QQuickParticlePainter *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QQuickParticleSystem**>(_v) = _t->system(); break;
        case 1: *reinterpret_cast< QStringList*>(_v) = _t->groups(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QQuickParticlePainter *_t = static_cast<QQuickParticlePainter *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setSystem(*reinterpret_cast< QQuickParticleSystem**>(_v)); break;
        case 1: _t->setGroups(*reinterpret_cast< QStringList*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QQuickParticlePainter::staticMetaObject = {
    { &QQuickItem::staticMetaObject, qt_meta_stringdata_QQuickParticlePainter.data,
      qt_meta_data_QQuickParticlePainter,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QQuickParticlePainter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QQuickParticlePainter::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QQuickParticlePainter.stringdata0))
        return static_cast<void*>(this);
    return QQuickItem::qt_metacast(_clname);
}

int QQuickParticlePainter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QQuickItem::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 2;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QQuickParticlePainter::countChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QQuickParticlePainter::systemChanged(QQuickParticleSystem * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QQuickParticlePainter::groupsChanged(const QStringList & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
