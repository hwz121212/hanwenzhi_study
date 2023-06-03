/****************************************************************************
** Meta object code from reading C++ file 'q3dcamera_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../5.9.6/QtDataVisualization/private/q3dcamera_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'q3dcamera_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QtDataVisualization__Q3DCameraPrivate_t {
    QByteArrayData data[11];
    char stringdata0[193];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QtDataVisualization__Q3DCameraPrivate_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QtDataVisualization__Q3DCameraPrivate_t qt_meta_stringdata_QtDataVisualization__Q3DCameraPrivate = {
    {
QT_MOC_LITERAL(0, 0, 37), // "QtDataVisualization::Q3DCamer..."
QT_MOC_LITERAL(1, 38, 19), // "minXRotationChanged"
QT_MOC_LITERAL(2, 58, 0), // ""
QT_MOC_LITERAL(3, 59, 8), // "rotation"
QT_MOC_LITERAL(4, 68, 19), // "minYRotationChanged"
QT_MOC_LITERAL(5, 88, 19), // "maxXRotationChanged"
QT_MOC_LITERAL(6, 108, 19), // "maxYRotationChanged"
QT_MOC_LITERAL(7, 128, 17), // "viewMatrixChanged"
QT_MOC_LITERAL(8, 146, 10), // "viewMatrix"
QT_MOC_LITERAL(9, 157, 27), // "viewMatrixAutoUpdateChanged"
QT_MOC_LITERAL(10, 185, 7) // "enabled"

    },
    "QtDataVisualization::Q3DCameraPrivate\0"
    "minXRotationChanged\0\0rotation\0"
    "minYRotationChanged\0maxXRotationChanged\0"
    "maxYRotationChanged\0viewMatrixChanged\0"
    "viewMatrix\0viewMatrixAutoUpdateChanged\0"
    "enabled"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QtDataVisualization__Q3DCameraPrivate[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x06 /* Public */,
       4,    1,   47,    2, 0x06 /* Public */,
       5,    1,   50,    2, 0x06 /* Public */,
       6,    1,   53,    2, 0x06 /* Public */,
       7,    1,   56,    2, 0x06 /* Public */,
       9,    1,   59,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::QMatrix4x4,    8,
    QMetaType::Void, QMetaType::Bool,   10,

       0        // eod
};

void QtDataVisualization::Q3DCameraPrivate::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q3DCameraPrivate *_t = static_cast<Q3DCameraPrivate *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->minXRotationChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 1: _t->minYRotationChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 2: _t->maxXRotationChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 3: _t->maxYRotationChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 4: _t->viewMatrixChanged((*reinterpret_cast< QMatrix4x4(*)>(_a[1]))); break;
        case 5: _t->viewMatrixAutoUpdateChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (Q3DCameraPrivate::*_t)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Q3DCameraPrivate::minXRotationChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (Q3DCameraPrivate::*_t)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Q3DCameraPrivate::minYRotationChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (Q3DCameraPrivate::*_t)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Q3DCameraPrivate::maxXRotationChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (Q3DCameraPrivate::*_t)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Q3DCameraPrivate::maxYRotationChanged)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (Q3DCameraPrivate::*_t)(QMatrix4x4 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Q3DCameraPrivate::viewMatrixChanged)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (Q3DCameraPrivate::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Q3DCameraPrivate::viewMatrixAutoUpdateChanged)) {
                *result = 5;
                return;
            }
        }
    }
}

const QMetaObject QtDataVisualization::Q3DCameraPrivate::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QtDataVisualization__Q3DCameraPrivate.data,
      qt_meta_data_QtDataVisualization__Q3DCameraPrivate,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QtDataVisualization::Q3DCameraPrivate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QtDataVisualization::Q3DCameraPrivate::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QtDataVisualization__Q3DCameraPrivate.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QtDataVisualization::Q3DCameraPrivate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
    return _id;
}

// SIGNAL 0
void QtDataVisualization::Q3DCameraPrivate::minXRotationChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QtDataVisualization::Q3DCameraPrivate::minYRotationChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QtDataVisualization::Q3DCameraPrivate::maxXRotationChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QtDataVisualization::Q3DCameraPrivate::maxYRotationChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QtDataVisualization::Q3DCameraPrivate::viewMatrixChanged(QMatrix4x4 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void QtDataVisualization::Q3DCameraPrivate::viewMatrixAutoUpdateChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
