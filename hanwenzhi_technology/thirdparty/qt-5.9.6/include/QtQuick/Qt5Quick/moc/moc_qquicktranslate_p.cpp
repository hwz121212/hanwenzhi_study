/****************************************************************************
** Meta object code from reading C++ file 'qquicktranslate_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../5.9.6/QtQuick/private/qquicktranslate_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qquicktranslate_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QQuickTranslate_t {
    QByteArrayData data[6];
    char stringdata0[39];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QQuickTranslate_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QQuickTranslate_t qt_meta_stringdata_QQuickTranslate = {
    {
QT_MOC_LITERAL(0, 0, 15), // "QQuickTranslate"
QT_MOC_LITERAL(1, 16, 8), // "xChanged"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 8), // "yChanged"
QT_MOC_LITERAL(4, 35, 1), // "x"
QT_MOC_LITERAL(5, 37, 1) // "y"

    },
    "QQuickTranslate\0xChanged\0\0yChanged\0x\0"
    "y"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QQuickTranslate[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       2,   26, // properties
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

 // properties: name, type, flags
       4, QMetaType::QReal, 0x00495103,
       5, QMetaType::QReal, 0x00495103,

 // properties: notify_signal_id
       0,
       1,

       0        // eod
};

void QQuickTranslate::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QQuickTranslate *_t = static_cast<QQuickTranslate *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->xChanged(); break;
        case 1: _t->yChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QQuickTranslate::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickTranslate::xChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QQuickTranslate::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickTranslate::yChanged)) {
                *result = 1;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QQuickTranslate *_t = static_cast<QQuickTranslate *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< qreal*>(_v) = _t->x(); break;
        case 1: *reinterpret_cast< qreal*>(_v) = _t->y(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QQuickTranslate *_t = static_cast<QQuickTranslate *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setX(*reinterpret_cast< qreal*>(_v)); break;
        case 1: _t->setY(*reinterpret_cast< qreal*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_a);
}

const QMetaObject QQuickTranslate::staticMetaObject = {
    { &QQuickTransform::staticMetaObject, qt_meta_stringdata_QQuickTranslate.data,
      qt_meta_data_QQuickTranslate,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QQuickTranslate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QQuickTranslate::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QQuickTranslate.stringdata0))
        return static_cast<void*>(this);
    return QQuickTransform::qt_metacast(_clname);
}

int QQuickTranslate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QQuickTransform::qt_metacall(_c, _id, _a);
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
void QQuickTranslate::xChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QQuickTranslate::yChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
struct qt_meta_stringdata_QQuickScale_t {
    QByteArrayData data[11];
    char stringdata0[110];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QQuickScale_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QQuickScale_t qt_meta_stringdata_QQuickScale = {
    {
QT_MOC_LITERAL(0, 0, 11), // "QQuickScale"
QT_MOC_LITERAL(1, 12, 13), // "originChanged"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 13), // "xScaleChanged"
QT_MOC_LITERAL(4, 41, 13), // "yScaleChanged"
QT_MOC_LITERAL(5, 55, 13), // "zScaleChanged"
QT_MOC_LITERAL(6, 69, 12), // "scaleChanged"
QT_MOC_LITERAL(7, 82, 6), // "origin"
QT_MOC_LITERAL(8, 89, 6), // "xScale"
QT_MOC_LITERAL(9, 96, 6), // "yScale"
QT_MOC_LITERAL(10, 103, 6) // "zScale"

    },
    "QQuickScale\0originChanged\0\0xScaleChanged\0"
    "yScaleChanged\0zScaleChanged\0scaleChanged\0"
    "origin\0xScale\0yScale\0zScale"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QQuickScale[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       4,   44, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x06 /* Public */,
       3,    0,   40,    2, 0x06 /* Public */,
       4,    0,   41,    2, 0x06 /* Public */,
       5,    0,   42,    2, 0x06 /* Public */,
       6,    0,   43,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
       7, QMetaType::QVector3D, 0x00495103,
       8, QMetaType::QReal, 0x00495103,
       9, QMetaType::QReal, 0x00495103,
      10, QMetaType::QReal, 0x00495103,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,

       0        // eod
};

void QQuickScale::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QQuickScale *_t = static_cast<QQuickScale *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->originChanged(); break;
        case 1: _t->xScaleChanged(); break;
        case 2: _t->yScaleChanged(); break;
        case 3: _t->zScaleChanged(); break;
        case 4: _t->scaleChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QQuickScale::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickScale::originChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QQuickScale::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickScale::xScaleChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QQuickScale::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickScale::yScaleChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (QQuickScale::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickScale::zScaleChanged)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (QQuickScale::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickScale::scaleChanged)) {
                *result = 4;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QQuickScale *_t = static_cast<QQuickScale *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QVector3D*>(_v) = _t->origin(); break;
        case 1: *reinterpret_cast< qreal*>(_v) = _t->xScale(); break;
        case 2: *reinterpret_cast< qreal*>(_v) = _t->yScale(); break;
        case 3: *reinterpret_cast< qreal*>(_v) = _t->zScale(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QQuickScale *_t = static_cast<QQuickScale *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setOrigin(*reinterpret_cast< QVector3D*>(_v)); break;
        case 1: _t->setXScale(*reinterpret_cast< qreal*>(_v)); break;
        case 2: _t->setYScale(*reinterpret_cast< qreal*>(_v)); break;
        case 3: _t->setZScale(*reinterpret_cast< qreal*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_a);
}

const QMetaObject QQuickScale::staticMetaObject = {
    { &QQuickTransform::staticMetaObject, qt_meta_stringdata_QQuickScale.data,
      qt_meta_data_QQuickScale,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QQuickScale::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QQuickScale::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QQuickScale.stringdata0))
        return static_cast<void*>(this);
    return QQuickTransform::qt_metacast(_clname);
}

int QQuickScale::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QQuickTransform::qt_metacall(_c, _id, _a);
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
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 4;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QQuickScale::originChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QQuickScale::xScaleChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void QQuickScale::yScaleChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void QQuickScale::zScaleChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void QQuickScale::scaleChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}
struct qt_meta_stringdata_QQuickRotation_t {
    QByteArrayData data[8];
    char stringdata0[73];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QQuickRotation_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QQuickRotation_t qt_meta_stringdata_QQuickRotation = {
    {
QT_MOC_LITERAL(0, 0, 14), // "QQuickRotation"
QT_MOC_LITERAL(1, 15, 13), // "originChanged"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 12), // "angleChanged"
QT_MOC_LITERAL(4, 43, 11), // "axisChanged"
QT_MOC_LITERAL(5, 55, 6), // "origin"
QT_MOC_LITERAL(6, 62, 5), // "angle"
QT_MOC_LITERAL(7, 68, 4) // "axis"

    },
    "QQuickRotation\0originChanged\0\0"
    "angleChanged\0axisChanged\0origin\0angle\0"
    "axis"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QQuickRotation[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       3,   32, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x06 /* Public */,
       3,    0,   30,    2, 0x06 /* Public */,
       4,    0,   31,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
       5, QMetaType::QVector3D, 0x00495103,
       6, QMetaType::QReal, 0x00495103,
       7, QMetaType::QVector3D, 0x00495103,

 // properties: notify_signal_id
       0,
       1,
       2,

       0        // eod
};

void QQuickRotation::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QQuickRotation *_t = static_cast<QQuickRotation *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->originChanged(); break;
        case 1: _t->angleChanged(); break;
        case 2: _t->axisChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QQuickRotation::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickRotation::originChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QQuickRotation::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickRotation::angleChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QQuickRotation::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickRotation::axisChanged)) {
                *result = 2;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QQuickRotation *_t = static_cast<QQuickRotation *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QVector3D*>(_v) = _t->origin(); break;
        case 1: *reinterpret_cast< qreal*>(_v) = _t->angle(); break;
        case 2: *reinterpret_cast< QVector3D*>(_v) = _t->axis(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QQuickRotation *_t = static_cast<QQuickRotation *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setOrigin(*reinterpret_cast< QVector3D*>(_v)); break;
        case 1: _t->setAngle(*reinterpret_cast< qreal*>(_v)); break;
        case 2: _t->setAxis(*reinterpret_cast< QVector3D*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_a);
}

const QMetaObject QQuickRotation::staticMetaObject = {
    { &QQuickTransform::staticMetaObject, qt_meta_stringdata_QQuickRotation.data,
      qt_meta_data_QQuickRotation,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QQuickRotation::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QQuickRotation::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QQuickRotation.stringdata0))
        return static_cast<void*>(this);
    return QQuickTransform::qt_metacast(_clname);
}

int QQuickRotation::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QQuickTransform::qt_metacall(_c, _id, _a);
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
void QQuickRotation::originChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QQuickRotation::angleChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void QQuickRotation::axisChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
struct qt_meta_stringdata_QQuickMatrix4x4_t {
    QByteArrayData data[4];
    char stringdata0[38];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QQuickMatrix4x4_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QQuickMatrix4x4_t qt_meta_stringdata_QQuickMatrix4x4 = {
    {
QT_MOC_LITERAL(0, 0, 15), // "QQuickMatrix4x4"
QT_MOC_LITERAL(1, 16, 13), // "matrixChanged"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 6) // "matrix"

    },
    "QQuickMatrix4x4\0matrixChanged\0\0matrix"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QQuickMatrix4x4[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       1,   20, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,

 // properties: name, type, flags
       3, QMetaType::QMatrix4x4, 0x00495103,

 // properties: notify_signal_id
       0,

       0        // eod
};

void QQuickMatrix4x4::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QQuickMatrix4x4 *_t = static_cast<QQuickMatrix4x4 *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->matrixChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QQuickMatrix4x4::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickMatrix4x4::matrixChanged)) {
                *result = 0;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QQuickMatrix4x4 *_t = static_cast<QQuickMatrix4x4 *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QMatrix4x4*>(_v) = _t->matrix(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QQuickMatrix4x4 *_t = static_cast<QQuickMatrix4x4 *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setMatrix(*reinterpret_cast< QMatrix4x4*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_a);
}

const QMetaObject QQuickMatrix4x4::staticMetaObject = {
    { &QQuickTransform::staticMetaObject, qt_meta_stringdata_QQuickMatrix4x4.data,
      qt_meta_data_QQuickMatrix4x4,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QQuickMatrix4x4::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QQuickMatrix4x4::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QQuickMatrix4x4.stringdata0))
        return static_cast<void*>(this);
    return QQuickTransform::qt_metacast(_clname);
}

int QQuickMatrix4x4::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QQuickTransform::qt_metacall(_c, _id, _a);
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
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
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

// SIGNAL 0
void QQuickMatrix4x4::matrixChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
