/****************************************************************************
** Meta object code from reading C++ file 'qdeclarative_attenuationmodel_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../qdeclarative_attenuationmodel_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qdeclarative_attenuationmodel_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QDeclarativeAttenuationModel_t {
    QByteArrayData data[2];
    char stringdata0[34];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QDeclarativeAttenuationModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QDeclarativeAttenuationModel_t qt_meta_stringdata_QDeclarativeAttenuationModel = {
    {
QT_MOC_LITERAL(0, 0, 28), // "QDeclarativeAttenuationModel"
QT_MOC_LITERAL(1, 29, 4) // "name"

    },
    "QDeclarativeAttenuationModel\0name"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QDeclarativeAttenuationModel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       1,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, QMetaType::QString, 0x00095103,

       0        // eod
};

void QDeclarativeAttenuationModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{

#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty) {
        QDeclarativeAttenuationModel *_t = static_cast<QDeclarativeAttenuationModel *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->name(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QDeclarativeAttenuationModel *_t = static_cast<QDeclarativeAttenuationModel *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setName(*reinterpret_cast< QString*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject QDeclarativeAttenuationModel::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QDeclarativeAttenuationModel.data,
      qt_meta_data_QDeclarativeAttenuationModel,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QDeclarativeAttenuationModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QDeclarativeAttenuationModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QDeclarativeAttenuationModel.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QDeclarativeAttenuationModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
   if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
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
struct qt_meta_stringdata_QDeclarativeAttenuationModelLinear_t {
    QByteArrayData data[3];
    char stringdata0[45];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QDeclarativeAttenuationModelLinear_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QDeclarativeAttenuationModelLinear_t qt_meta_stringdata_QDeclarativeAttenuationModelLinear = {
    {
QT_MOC_LITERAL(0, 0, 34), // "QDeclarativeAttenuationModelL..."
QT_MOC_LITERAL(1, 35, 5), // "start"
QT_MOC_LITERAL(2, 41, 3) // "end"

    },
    "QDeclarativeAttenuationModelLinear\0"
    "start\0end"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QDeclarativeAttenuationModelLinear[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       2,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, QMetaType::QReal, 0x00095003,
       2, QMetaType::QReal, 0x00095003,

       0        // eod
};

void QDeclarativeAttenuationModelLinear::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{

#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty) {
        QDeclarativeAttenuationModelLinear *_t = static_cast<QDeclarativeAttenuationModelLinear *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< qreal*>(_v) = _t->startDistance(); break;
        case 1: *reinterpret_cast< qreal*>(_v) = _t->endDistance(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QDeclarativeAttenuationModelLinear *_t = static_cast<QDeclarativeAttenuationModelLinear *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setStartDistance(*reinterpret_cast< qreal*>(_v)); break;
        case 1: _t->setEndDistance(*reinterpret_cast< qreal*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject QDeclarativeAttenuationModelLinear::staticMetaObject = {
    { &QDeclarativeAttenuationModel::staticMetaObject, qt_meta_stringdata_QDeclarativeAttenuationModelLinear.data,
      qt_meta_data_QDeclarativeAttenuationModelLinear,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QDeclarativeAttenuationModelLinear::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QDeclarativeAttenuationModelLinear::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QDeclarativeAttenuationModelLinear.stringdata0))
        return static_cast<void*>(this);
    return QDeclarativeAttenuationModel::qt_metacast(_clname);
}

int QDeclarativeAttenuationModelLinear::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDeclarativeAttenuationModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
   if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
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
struct qt_meta_stringdata_QDeclarativeAttenuationModelInverse_t {
    QByteArrayData data[4];
    char stringdata0[54];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QDeclarativeAttenuationModelInverse_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QDeclarativeAttenuationModelInverse_t qt_meta_stringdata_QDeclarativeAttenuationModelInverse = {
    {
QT_MOC_LITERAL(0, 0, 35), // "QDeclarativeAttenuationModelI..."
QT_MOC_LITERAL(1, 36, 5), // "start"
QT_MOC_LITERAL(2, 42, 3), // "end"
QT_MOC_LITERAL(3, 46, 7) // "rolloff"

    },
    "QDeclarativeAttenuationModelInverse\0"
    "start\0end\0rolloff"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QDeclarativeAttenuationModelInverse[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       3,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, QMetaType::QReal, 0x00095003,
       2, QMetaType::QReal, 0x00095003,
       3, QMetaType::QReal, 0x00095003,

       0        // eod
};

void QDeclarativeAttenuationModelInverse::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{

#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty) {
        QDeclarativeAttenuationModelInverse *_t = static_cast<QDeclarativeAttenuationModelInverse *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< qreal*>(_v) = _t->referenceDistance(); break;
        case 1: *reinterpret_cast< qreal*>(_v) = _t->maxDistance(); break;
        case 2: *reinterpret_cast< qreal*>(_v) = _t->rolloffFactor(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QDeclarativeAttenuationModelInverse *_t = static_cast<QDeclarativeAttenuationModelInverse *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setReferenceDistance(*reinterpret_cast< qreal*>(_v)); break;
        case 1: _t->setMaxDistance(*reinterpret_cast< qreal*>(_v)); break;
        case 2: _t->setRolloffFactor(*reinterpret_cast< qreal*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject QDeclarativeAttenuationModelInverse::staticMetaObject = {
    { &QDeclarativeAttenuationModel::staticMetaObject, qt_meta_stringdata_QDeclarativeAttenuationModelInverse.data,
      qt_meta_data_QDeclarativeAttenuationModelInverse,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QDeclarativeAttenuationModelInverse::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QDeclarativeAttenuationModelInverse::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QDeclarativeAttenuationModelInverse.stringdata0))
        return static_cast<void*>(this);
    return QDeclarativeAttenuationModel::qt_metacast(_clname);
}

int QDeclarativeAttenuationModelInverse::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDeclarativeAttenuationModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
   if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
