/****************************************************************************
** Meta object code from reading C++ file 'qheightmapsurfacedataproxy.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../qheightmapsurfacedataproxy.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qheightmapsurfacedataproxy.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QtDataVisualization__QHeightMapSurfaceDataProxy_t {
    QByteArrayData data[17];
    char stringdata0[240];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QtDataVisualization__QHeightMapSurfaceDataProxy_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QtDataVisualization__QHeightMapSurfaceDataProxy_t qt_meta_stringdata_QtDataVisualization__QHeightMapSurfaceDataProxy = {
    {
QT_MOC_LITERAL(0, 0, 47), // "QtDataVisualization::QHeightM..."
QT_MOC_LITERAL(1, 48, 16), // "heightMapChanged"
QT_MOC_LITERAL(2, 65, 0), // ""
QT_MOC_LITERAL(3, 66, 5), // "image"
QT_MOC_LITERAL(4, 72, 20), // "heightMapFileChanged"
QT_MOC_LITERAL(5, 93, 8), // "filename"
QT_MOC_LITERAL(6, 102, 16), // "minXValueChanged"
QT_MOC_LITERAL(7, 119, 5), // "value"
QT_MOC_LITERAL(8, 125, 16), // "maxXValueChanged"
QT_MOC_LITERAL(9, 142, 16), // "minZValueChanged"
QT_MOC_LITERAL(10, 159, 16), // "maxZValueChanged"
QT_MOC_LITERAL(11, 176, 9), // "heightMap"
QT_MOC_LITERAL(12, 186, 13), // "heightMapFile"
QT_MOC_LITERAL(13, 200, 9), // "minXValue"
QT_MOC_LITERAL(14, 210, 9), // "maxXValue"
QT_MOC_LITERAL(15, 220, 9), // "minZValue"
QT_MOC_LITERAL(16, 230, 9) // "maxZValue"

    },
    "QtDataVisualization::QHeightMapSurfaceDataProxy\0"
    "heightMapChanged\0\0image\0heightMapFileChanged\0"
    "filename\0minXValueChanged\0value\0"
    "maxXValueChanged\0minZValueChanged\0"
    "maxZValueChanged\0heightMap\0heightMapFile\0"
    "minXValue\0maxXValue\0minZValue\0maxZValue"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QtDataVisualization__QHeightMapSurfaceDataProxy[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       6,   62, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x06 /* Public */,
       4,    1,   47,    2, 0x06 /* Public */,
       6,    1,   50,    2, 0x06 /* Public */,
       8,    1,   53,    2, 0x06 /* Public */,
       9,    1,   56,    2, 0x06 /* Public */,
      10,    1,   59,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QImage,    3,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::Float,    7,
    QMetaType::Void, QMetaType::Float,    7,
    QMetaType::Void, QMetaType::Float,    7,
    QMetaType::Void, QMetaType::Float,    7,

 // properties: name, type, flags
      11, QMetaType::QImage, 0x00495103,
      12, QMetaType::QString, 0x00495103,
      13, QMetaType::Float, 0x00495103,
      14, QMetaType::Float, 0x00495103,
      15, QMetaType::Float, 0x00495103,
      16, QMetaType::Float, 0x00495103,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,
       4,
       5,

       0        // eod
};

void QtDataVisualization::QHeightMapSurfaceDataProxy::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QHeightMapSurfaceDataProxy *_t = static_cast<QHeightMapSurfaceDataProxy *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->heightMapChanged((*reinterpret_cast< const QImage(*)>(_a[1]))); break;
        case 1: _t->heightMapFileChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->minXValueChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 3: _t->maxXValueChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 4: _t->minZValueChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 5: _t->maxZValueChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QHeightMapSurfaceDataProxy::*_t)(const QImage & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QHeightMapSurfaceDataProxy::heightMapChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QHeightMapSurfaceDataProxy::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QHeightMapSurfaceDataProxy::heightMapFileChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QHeightMapSurfaceDataProxy::*_t)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QHeightMapSurfaceDataProxy::minXValueChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (QHeightMapSurfaceDataProxy::*_t)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QHeightMapSurfaceDataProxy::maxXValueChanged)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (QHeightMapSurfaceDataProxy::*_t)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QHeightMapSurfaceDataProxy::minZValueChanged)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (QHeightMapSurfaceDataProxy::*_t)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QHeightMapSurfaceDataProxy::maxZValueChanged)) {
                *result = 5;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QHeightMapSurfaceDataProxy *_t = static_cast<QHeightMapSurfaceDataProxy *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QImage*>(_v) = _t->heightMap(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->heightMapFile(); break;
        case 2: *reinterpret_cast< float*>(_v) = _t->minXValue(); break;
        case 3: *reinterpret_cast< float*>(_v) = _t->maxXValue(); break;
        case 4: *reinterpret_cast< float*>(_v) = _t->minZValue(); break;
        case 5: *reinterpret_cast< float*>(_v) = _t->maxZValue(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QHeightMapSurfaceDataProxy *_t = static_cast<QHeightMapSurfaceDataProxy *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setHeightMap(*reinterpret_cast< QImage*>(_v)); break;
        case 1: _t->setHeightMapFile(*reinterpret_cast< QString*>(_v)); break;
        case 2: _t->setMinXValue(*reinterpret_cast< float*>(_v)); break;
        case 3: _t->setMaxXValue(*reinterpret_cast< float*>(_v)); break;
        case 4: _t->setMinZValue(*reinterpret_cast< float*>(_v)); break;
        case 5: _t->setMaxZValue(*reinterpret_cast< float*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QtDataVisualization::QHeightMapSurfaceDataProxy::staticMetaObject = {
    { &QSurfaceDataProxy::staticMetaObject, qt_meta_stringdata_QtDataVisualization__QHeightMapSurfaceDataProxy.data,
      qt_meta_data_QtDataVisualization__QHeightMapSurfaceDataProxy,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QtDataVisualization::QHeightMapSurfaceDataProxy::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QtDataVisualization::QHeightMapSurfaceDataProxy::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QtDataVisualization__QHeightMapSurfaceDataProxy.stringdata0))
        return static_cast<void*>(this);
    return QSurfaceDataProxy::qt_metacast(_clname);
}

int QtDataVisualization::QHeightMapSurfaceDataProxy::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QSurfaceDataProxy::qt_metacall(_c, _id, _a);
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
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 6;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QtDataVisualization::QHeightMapSurfaceDataProxy::heightMapChanged(const QImage & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QtDataVisualization::QHeightMapSurfaceDataProxy::heightMapFileChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QtDataVisualization::QHeightMapSurfaceDataProxy::minXValueChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QtDataVisualization::QHeightMapSurfaceDataProxy::maxXValueChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QtDataVisualization::QHeightMapSurfaceDataProxy::minZValueChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void QtDataVisualization::QHeightMapSurfaceDataProxy::maxZValueChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
