/****************************************************************************
** Meta object code from reading C++ file 'qsceneloader.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../qsceneloader.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qsceneloader.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Qt3DRender__QSceneLoader_t {
    QByteArrayData data[28];
    char stringdata0[348];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Qt3DRender__QSceneLoader_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Qt3DRender__QSceneLoader_t qt_meta_stringdata_Qt3DRender__QSceneLoader = {
    {
QT_MOC_LITERAL(0, 0, 24), // "Qt3DRender::QSceneLoader"
QT_MOC_LITERAL(1, 25, 13), // "sourceChanged"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 6), // "source"
QT_MOC_LITERAL(4, 47, 13), // "statusChanged"
QT_MOC_LITERAL(5, 61, 6), // "Status"
QT_MOC_LITERAL(6, 68, 6), // "status"
QT_MOC_LITERAL(7, 75, 9), // "setSource"
QT_MOC_LITERAL(8, 85, 3), // "arg"
QT_MOC_LITERAL(9, 89, 9), // "setStatus"
QT_MOC_LITERAL(10, 99, 6), // "entity"
QT_MOC_LITERAL(11, 106, 18), // "Qt3DCore::QEntity*"
QT_MOC_LITERAL(12, 125, 10), // "entityName"
QT_MOC_LITERAL(13, 136, 11), // "entityNames"
QT_MOC_LITERAL(14, 148, 9), // "component"
QT_MOC_LITERAL(15, 158, 21), // "Qt3DCore::QComponent*"
QT_MOC_LITERAL(16, 180, 13), // "ComponentType"
QT_MOC_LITERAL(17, 194, 13), // "componentType"
QT_MOC_LITERAL(18, 208, 4), // "None"
QT_MOC_LITERAL(19, 213, 7), // "Loading"
QT_MOC_LITERAL(20, 221, 5), // "Ready"
QT_MOC_LITERAL(21, 227, 5), // "Error"
QT_MOC_LITERAL(22, 233, 16), // "UnknownComponent"
QT_MOC_LITERAL(23, 250, 25), // "GeometryRendererComponent"
QT_MOC_LITERAL(24, 276, 18), // "TransformComponent"
QT_MOC_LITERAL(25, 295, 17), // "MaterialComponent"
QT_MOC_LITERAL(26, 313, 14), // "LightComponent"
QT_MOC_LITERAL(27, 328, 19) // "CameraLensComponent"

    },
    "Qt3DRender::QSceneLoader\0sourceChanged\0"
    "\0source\0statusChanged\0Status\0status\0"
    "setSource\0arg\0setStatus\0entity\0"
    "Qt3DCore::QEntity*\0entityName\0entityNames\0"
    "component\0Qt3DCore::QComponent*\0"
    "ComponentType\0componentType\0None\0"
    "Loading\0Ready\0Error\0UnknownComponent\0"
    "GeometryRendererComponent\0TransformComponent\0"
    "MaterialComponent\0LightComponent\0"
    "CameraLensComponent"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Qt3DRender__QSceneLoader[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       2,   77, // properties
       2,   85, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   56,    2, 0x06 /* Public */,
       4,    1,   59,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    1,   62,    2, 0x0a /* Public */,
       9,    1,   65,    2, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
      10,    1,   68,    2, 0x82 /* Public | MethodRevisioned */,
      13,    0,   71,    2, 0x82 /* Public | MethodRevisioned */,
      14,    2,   72,    2, 0x82 /* Public | MethodRevisioned */,

 // signals: revision
       0,
       0,

 // slots: revision
       0,
       0,

 // methods: revision
       9,
       9,
       9,

 // signals: parameters
    QMetaType::Void, QMetaType::QUrl,    3,
    QMetaType::Void, 0x80000000 | 5,    6,

 // slots: parameters
    QMetaType::Void, QMetaType::QUrl,    8,
    QMetaType::Void, 0x80000000 | 5,    6,

 // methods: parameters
    0x80000000 | 11, QMetaType::QString,   12,
    QMetaType::QStringList,
    0x80000000 | 15, QMetaType::QString, 0x80000000 | 16,   12,   17,

 // properties: name, type, flags
       3, QMetaType::QUrl, 0x00495103,
       6, 0x80000000 | 5, 0x00495009,

 // properties: notify_signal_id
       0,
       1,

 // enums: name, flags, count, data
       5, 0x0,    4,   93,
      16, 0x0,    6,  101,

 // enum data: key, value
      18, uint(Qt3DRender::QSceneLoader::None),
      19, uint(Qt3DRender::QSceneLoader::Loading),
      20, uint(Qt3DRender::QSceneLoader::Ready),
      21, uint(Qt3DRender::QSceneLoader::Error),
      22, uint(Qt3DRender::QSceneLoader::UnknownComponent),
      23, uint(Qt3DRender::QSceneLoader::GeometryRendererComponent),
      24, uint(Qt3DRender::QSceneLoader::TransformComponent),
      25, uint(Qt3DRender::QSceneLoader::MaterialComponent),
      26, uint(Qt3DRender::QSceneLoader::LightComponent),
      27, uint(Qt3DRender::QSceneLoader::CameraLensComponent),

       0        // eod
};

void Qt3DRender::QSceneLoader::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QSceneLoader *_t = static_cast<QSceneLoader *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sourceChanged((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 1: _t->statusChanged((*reinterpret_cast< Status(*)>(_a[1]))); break;
        case 2: _t->setSource((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 3: _t->setStatus((*reinterpret_cast< Status(*)>(_a[1]))); break;
        case 4: { Qt3DCore::QEntity* _r = _t->entity((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< Qt3DCore::QEntity**>(_a[0]) = std::move(_r); }  break;
        case 5: { QStringList _r = _t->entityNames();
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = std::move(_r); }  break;
        case 6: { Qt3DCore::QComponent* _r = _t->component((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< ComponentType(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< Qt3DCore::QComponent**>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QSceneLoader::*_t)(const QUrl & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QSceneLoader::sourceChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QSceneLoader::*_t)(Status );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QSceneLoader::statusChanged)) {
                *result = 1;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QSceneLoader *_t = static_cast<QSceneLoader *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QUrl*>(_v) = _t->source(); break;
        case 1: *reinterpret_cast< Status*>(_v) = _t->status(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QSceneLoader *_t = static_cast<QSceneLoader *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setSource(*reinterpret_cast< QUrl*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject Qt3DRender::QSceneLoader::staticMetaObject = {
    { &Qt3DCore::QComponent::staticMetaObject, qt_meta_stringdata_Qt3DRender__QSceneLoader.data,
      qt_meta_data_Qt3DRender__QSceneLoader,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Qt3DRender::QSceneLoader::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Qt3DRender::QSceneLoader::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Qt3DRender__QSceneLoader.stringdata0))
        return static_cast<void*>(this);
    return Qt3DCore::QComponent::qt_metacast(_clname);
}

int Qt3DRender::QSceneLoader::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Qt3DCore::QComponent::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
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
void Qt3DRender::QSceneLoader::sourceChanged(const QUrl & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Qt3DRender::QSceneLoader::statusChanged(Status _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
