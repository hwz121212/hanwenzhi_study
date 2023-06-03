/****************************************************************************
** Meta object code from reading C++ file 'qskyboxentity.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../qskyboxentity.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qskyboxentity.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Qt3DExtras__QSkyboxEntity_t {
    QByteArrayData data[13];
    char stringdata0[180];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Qt3DExtras__QSkyboxEntity_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Qt3DExtras__QSkyboxEntity_t qt_meta_stringdata_Qt3DExtras__QSkyboxEntity = {
    {
QT_MOC_LITERAL(0, 0, 25), // "Qt3DExtras::QSkyboxEntity"
QT_MOC_LITERAL(1, 26, 15), // "baseNameChanged"
QT_MOC_LITERAL(2, 42, 0), // ""
QT_MOC_LITERAL(3, 43, 4), // "path"
QT_MOC_LITERAL(4, 48, 16), // "extensionChanged"
QT_MOC_LITERAL(5, 65, 9), // "extension"
QT_MOC_LITERAL(6, 75, 26), // "gammaCorrectEnabledChanged"
QT_MOC_LITERAL(7, 102, 7), // "enabled"
QT_MOC_LITERAL(8, 110, 11), // "setBaseName"
QT_MOC_LITERAL(9, 122, 12), // "setExtension"
QT_MOC_LITERAL(10, 135, 22), // "setGammaCorrectEnabled"
QT_MOC_LITERAL(11, 158, 8), // "baseName"
QT_MOC_LITERAL(12, 167, 12) // "gammaCorrect"

    },
    "Qt3DExtras::QSkyboxEntity\0baseNameChanged\0"
    "\0path\0extensionChanged\0extension\0"
    "gammaCorrectEnabledChanged\0enabled\0"
    "setBaseName\0setExtension\0"
    "setGammaCorrectEnabled\0baseName\0"
    "gammaCorrect"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Qt3DExtras__QSkyboxEntity[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       3,   62, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x06 /* Public */,
       4,    1,   47,    2, 0x06 /* Public */,
       6,    1,   50,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    1,   53,    2, 0x0a /* Public */,
       9,    1,   56,    2, 0x0a /* Public */,
      10,    1,   59,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::Bool,    7,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::Bool,    7,

 // properties: name, type, flags
      11, QMetaType::QString, 0x00495103,
       5, QMetaType::QString, 0x00495103,
      12, QMetaType::Bool, 0x00c95003,

 // properties: notify_signal_id
       0,
       1,
       2,

 // properties: revision
       0,
       0,
       9,

       0        // eod
};

void Qt3DExtras::QSkyboxEntity::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QSkyboxEntity *_t = static_cast<QSkyboxEntity *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->baseNameChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->extensionChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->gammaCorrectEnabledChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->setBaseName((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->setExtension((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->setGammaCorrectEnabled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QSkyboxEntity::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QSkyboxEntity::baseNameChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QSkyboxEntity::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QSkyboxEntity::extensionChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QSkyboxEntity::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QSkyboxEntity::gammaCorrectEnabledChanged)) {
                *result = 2;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QSkyboxEntity *_t = static_cast<QSkyboxEntity *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->baseName(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->extension(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->isGammaCorrectEnabled(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QSkyboxEntity *_t = static_cast<QSkyboxEntity *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setBaseName(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setExtension(*reinterpret_cast< QString*>(_v)); break;
        case 2: _t->setGammaCorrectEnabled(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject Qt3DExtras::QSkyboxEntity::staticMetaObject = {
    { &Qt3DCore::QEntity::staticMetaObject, qt_meta_stringdata_Qt3DExtras__QSkyboxEntity.data,
      qt_meta_data_Qt3DExtras__QSkyboxEntity,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Qt3DExtras::QSkyboxEntity::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Qt3DExtras::QSkyboxEntity::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Qt3DExtras__QSkyboxEntity.stringdata0))
        return static_cast<void*>(this);
    return Qt3DCore::QEntity::qt_metacast(_clname);
}

int Qt3DExtras::QSkyboxEntity::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Qt3DCore::QEntity::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
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
void Qt3DExtras::QSkyboxEntity::baseNameChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Qt3DExtras::QSkyboxEntity::extensionChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Qt3DExtras::QSkyboxEntity::gammaCorrectEnabledChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
