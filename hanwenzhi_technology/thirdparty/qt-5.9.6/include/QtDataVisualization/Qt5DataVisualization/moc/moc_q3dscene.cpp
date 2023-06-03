/****************************************************************************
** Meta object code from reading C++ file 'q3dscene.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../q3dscene.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'q3dscene.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QtDataVisualization__Q3DScene_t {
    QByteArrayData data[31];
    char stringdata0[538];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QtDataVisualization__Q3DScene_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QtDataVisualization__Q3DScene_t qt_meta_stringdata_QtDataVisualization__Q3DScene = {
    {
QT_MOC_LITERAL(0, 0, 29), // "QtDataVisualization::Q3DScene"
QT_MOC_LITERAL(1, 30, 15), // "viewportChanged"
QT_MOC_LITERAL(2, 46, 0), // ""
QT_MOC_LITERAL(3, 47, 8), // "viewport"
QT_MOC_LITERAL(4, 56, 25), // "primarySubViewportChanged"
QT_MOC_LITERAL(5, 82, 11), // "subViewport"
QT_MOC_LITERAL(6, 94, 27), // "secondarySubViewportChanged"
QT_MOC_LITERAL(7, 122, 28), // "secondarySubviewOnTopChanged"
QT_MOC_LITERAL(8, 151, 16), // "isSecondaryOnTop"
QT_MOC_LITERAL(9, 168, 20), // "slicingActiveChanged"
QT_MOC_LITERAL(10, 189, 15), // "isSlicingActive"
QT_MOC_LITERAL(11, 205, 19), // "activeCameraChanged"
QT_MOC_LITERAL(12, 225, 10), // "Q3DCamera*"
QT_MOC_LITERAL(13, 236, 6), // "camera"
QT_MOC_LITERAL(14, 243, 18), // "activeLightChanged"
QT_MOC_LITERAL(15, 262, 9), // "Q3DLight*"
QT_MOC_LITERAL(16, 272, 5), // "light"
QT_MOC_LITERAL(17, 278, 23), // "devicePixelRatioChanged"
QT_MOC_LITERAL(18, 302, 10), // "pixelRatio"
QT_MOC_LITERAL(19, 313, 29), // "selectionQueryPositionChanged"
QT_MOC_LITERAL(20, 343, 8), // "position"
QT_MOC_LITERAL(21, 352, 25), // "graphPositionQueryChanged"
QT_MOC_LITERAL(22, 378, 18), // "primarySubViewport"
QT_MOC_LITERAL(23, 397, 20), // "secondarySubViewport"
QT_MOC_LITERAL(24, 418, 22), // "selectionQueryPosition"
QT_MOC_LITERAL(25, 441, 21), // "secondarySubviewOnTop"
QT_MOC_LITERAL(26, 463, 13), // "slicingActive"
QT_MOC_LITERAL(27, 477, 12), // "activeCamera"
QT_MOC_LITERAL(28, 490, 11), // "activeLight"
QT_MOC_LITERAL(29, 502, 16), // "devicePixelRatio"
QT_MOC_LITERAL(30, 519, 18) // "graphPositionQuery"

    },
    "QtDataVisualization::Q3DScene\0"
    "viewportChanged\0\0viewport\0"
    "primarySubViewportChanged\0subViewport\0"
    "secondarySubViewportChanged\0"
    "secondarySubviewOnTopChanged\0"
    "isSecondaryOnTop\0slicingActiveChanged\0"
    "isSlicingActive\0activeCameraChanged\0"
    "Q3DCamera*\0camera\0activeLightChanged\0"
    "Q3DLight*\0light\0devicePixelRatioChanged\0"
    "pixelRatio\0selectionQueryPositionChanged\0"
    "position\0graphPositionQueryChanged\0"
    "primarySubViewport\0secondarySubViewport\0"
    "selectionQueryPosition\0secondarySubviewOnTop\0"
    "slicingActive\0activeCamera\0activeLight\0"
    "devicePixelRatio\0graphPositionQuery"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QtDataVisualization__Q3DScene[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
      10,  104, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      10,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   74,    2, 0x06 /* Public */,
       4,    1,   77,    2, 0x06 /* Public */,
       6,    1,   80,    2, 0x06 /* Public */,
       7,    1,   83,    2, 0x06 /* Public */,
       9,    1,   86,    2, 0x06 /* Public */,
      11,    1,   89,    2, 0x06 /* Public */,
      14,    1,   92,    2, 0x06 /* Public */,
      17,    1,   95,    2, 0x06 /* Public */,
      19,    1,   98,    2, 0x06 /* Public */,
      21,    1,  101,    2, 0x86 /* Public | MethodRevisioned */,

 // signals: revision
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       1,

 // signals: parameters
    QMetaType::Void, QMetaType::QRect,    3,
    QMetaType::Void, QMetaType::QRect,    5,
    QMetaType::Void, QMetaType::QRect,    5,
    QMetaType::Void, QMetaType::Bool,    8,
    QMetaType::Void, QMetaType::Bool,   10,
    QMetaType::Void, 0x80000000 | 12,   13,
    QMetaType::Void, 0x80000000 | 15,   16,
    QMetaType::Void, QMetaType::Float,   18,
    QMetaType::Void, QMetaType::QPoint,   20,
    QMetaType::Void, QMetaType::QPoint,   20,

 // properties: name, type, flags
       3, QMetaType::QRect, 0x00495001,
      22, QMetaType::QRect, 0x00495103,
      23, QMetaType::QRect, 0x00495103,
      24, QMetaType::QPoint, 0x00495103,
      25, QMetaType::Bool, 0x00495103,
      26, QMetaType::Bool, 0x00495103,
      27, 0x80000000 | 12, 0x0049510b,
      28, 0x80000000 | 15, 0x0049510b,
      29, QMetaType::Float, 0x00495103,
      30, QMetaType::QPoint, 0x00c95103,

 // properties: notify_signal_id
       0,
       1,
       2,
       8,
       3,
       4,
       5,
       6,
       7,
       9,

 // properties: revision
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       1,

       0        // eod
};

void QtDataVisualization::Q3DScene::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q3DScene *_t = static_cast<Q3DScene *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->viewportChanged((*reinterpret_cast< const QRect(*)>(_a[1]))); break;
        case 1: _t->primarySubViewportChanged((*reinterpret_cast< const QRect(*)>(_a[1]))); break;
        case 2: _t->secondarySubViewportChanged((*reinterpret_cast< const QRect(*)>(_a[1]))); break;
        case 3: _t->secondarySubviewOnTopChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->slicingActiveChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->activeCameraChanged((*reinterpret_cast< Q3DCamera*(*)>(_a[1]))); break;
        case 6: _t->activeLightChanged((*reinterpret_cast< Q3DLight*(*)>(_a[1]))); break;
        case 7: _t->devicePixelRatioChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 8: _t->selectionQueryPositionChanged((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 9: _t->graphPositionQueryChanged((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Q3DCamera* >(); break;
            }
            break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Q3DLight* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (Q3DScene::*_t)(const QRect & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Q3DScene::viewportChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (Q3DScene::*_t)(const QRect & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Q3DScene::primarySubViewportChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (Q3DScene::*_t)(const QRect & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Q3DScene::secondarySubViewportChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (Q3DScene::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Q3DScene::secondarySubviewOnTopChanged)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (Q3DScene::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Q3DScene::slicingActiveChanged)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (Q3DScene::*_t)(Q3DCamera * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Q3DScene::activeCameraChanged)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (Q3DScene::*_t)(Q3DLight * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Q3DScene::activeLightChanged)) {
                *result = 6;
                return;
            }
        }
        {
            typedef void (Q3DScene::*_t)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Q3DScene::devicePixelRatioChanged)) {
                *result = 7;
                return;
            }
        }
        {
            typedef void (Q3DScene::*_t)(const QPoint & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Q3DScene::selectionQueryPositionChanged)) {
                *result = 8;
                return;
            }
        }
        {
            typedef void (Q3DScene::*_t)(const QPoint & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Q3DScene::graphPositionQueryChanged)) {
                *result = 9;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 6:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Q3DCamera* >(); break;
        case 7:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Q3DLight* >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        Q3DScene *_t = static_cast<Q3DScene *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QRect*>(_v) = _t->viewport(); break;
        case 1: *reinterpret_cast< QRect*>(_v) = _t->primarySubViewport(); break;
        case 2: *reinterpret_cast< QRect*>(_v) = _t->secondarySubViewport(); break;
        case 3: *reinterpret_cast< QPoint*>(_v) = _t->selectionQueryPosition(); break;
        case 4: *reinterpret_cast< bool*>(_v) = _t->isSecondarySubviewOnTop(); break;
        case 5: *reinterpret_cast< bool*>(_v) = _t->isSlicingActive(); break;
        case 6: *reinterpret_cast< Q3DCamera**>(_v) = _t->activeCamera(); break;
        case 7: *reinterpret_cast< Q3DLight**>(_v) = _t->activeLight(); break;
        case 8: *reinterpret_cast< float*>(_v) = _t->devicePixelRatio(); break;
        case 9: *reinterpret_cast< QPoint*>(_v) = _t->graphPositionQuery(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        Q3DScene *_t = static_cast<Q3DScene *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 1: _t->setPrimarySubViewport(*reinterpret_cast< QRect*>(_v)); break;
        case 2: _t->setSecondarySubViewport(*reinterpret_cast< QRect*>(_v)); break;
        case 3: _t->setSelectionQueryPosition(*reinterpret_cast< QPoint*>(_v)); break;
        case 4: _t->setSecondarySubviewOnTop(*reinterpret_cast< bool*>(_v)); break;
        case 5: _t->setSlicingActive(*reinterpret_cast< bool*>(_v)); break;
        case 6: _t->setActiveCamera(*reinterpret_cast< Q3DCamera**>(_v)); break;
        case 7: _t->setActiveLight(*reinterpret_cast< Q3DLight**>(_v)); break;
        case 8: _t->setDevicePixelRatio(*reinterpret_cast< float*>(_v)); break;
        case 9: _t->setGraphPositionQuery(*reinterpret_cast< QPoint*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QtDataVisualization::Q3DScene::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QtDataVisualization__Q3DScene.data,
      qt_meta_data_QtDataVisualization__Q3DScene,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QtDataVisualization::Q3DScene::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QtDataVisualization::Q3DScene::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QtDataVisualization__Q3DScene.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QtDataVisualization::Q3DScene::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 10;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 10;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 10;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 10;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 10;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QtDataVisualization::Q3DScene::viewportChanged(const QRect & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QtDataVisualization::Q3DScene::primarySubViewportChanged(const QRect & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QtDataVisualization::Q3DScene::secondarySubViewportChanged(const QRect & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QtDataVisualization::Q3DScene::secondarySubviewOnTopChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QtDataVisualization::Q3DScene::slicingActiveChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void QtDataVisualization::Q3DScene::activeCameraChanged(Q3DCamera * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void QtDataVisualization::Q3DScene::activeLightChanged(Q3DLight * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void QtDataVisualization::Q3DScene::devicePixelRatioChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void QtDataVisualization::Q3DScene::selectionQueryPositionChanged(const QPoint & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void QtDataVisualization::Q3DScene::graphPositionQueryChanged(const QPoint & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
