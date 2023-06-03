/****************************************************************************
** Meta object code from reading C++ file 'qtgradientwidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../qtgradienteditor/qtgradientwidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qtgradientwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QtGradientWidget_t {
    QByteArrayData data[16];
    char stringdata0[233];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QtGradientWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QtGradientWidget_t qt_meta_stringdata_QtGradientWidget = {
    {
QT_MOC_LITERAL(0, 0, 16), // "QtGradientWidget"
QT_MOC_LITERAL(1, 17, 18), // "startLinearChanged"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 5), // "point"
QT_MOC_LITERAL(4, 43, 16), // "endLinearChanged"
QT_MOC_LITERAL(5, 60, 20), // "centralRadialChanged"
QT_MOC_LITERAL(6, 81, 18), // "focalRadialChanged"
QT_MOC_LITERAL(7, 100, 19), // "radiusRadialChanged"
QT_MOC_LITERAL(8, 120, 6), // "radius"
QT_MOC_LITERAL(9, 127, 21), // "centralConicalChanged"
QT_MOC_LITERAL(10, 149, 19), // "angleConicalChanged"
QT_MOC_LITERAL(11, 169, 5), // "angle"
QT_MOC_LITERAL(12, 175, 16), // "setGradientStops"
QT_MOC_LITERAL(13, 192, 14), // "QGradientStops"
QT_MOC_LITERAL(14, 207, 5), // "stops"
QT_MOC_LITERAL(15, 213, 19) // "backgroundCheckered"

    },
    "QtGradientWidget\0startLinearChanged\0"
    "\0point\0endLinearChanged\0centralRadialChanged\0"
    "focalRadialChanged\0radiusRadialChanged\0"
    "radius\0centralConicalChanged\0"
    "angleConicalChanged\0angle\0setGradientStops\0"
    "QGradientStops\0stops\0backgroundCheckered"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QtGradientWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       1,   78, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x06 /* Public */,
       4,    1,   57,    2, 0x06 /* Public */,
       5,    1,   60,    2, 0x06 /* Public */,
       6,    1,   63,    2, 0x06 /* Public */,
       7,    1,   66,    2, 0x06 /* Public */,
       9,    1,   69,    2, 0x06 /* Public */,
      10,    1,   72,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      12,    1,   75,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QPointF,    3,
    QMetaType::Void, QMetaType::QPointF,    3,
    QMetaType::Void, QMetaType::QPointF,    3,
    QMetaType::Void, QMetaType::QPointF,    3,
    QMetaType::Void, QMetaType::QReal,    8,
    QMetaType::Void, QMetaType::QPointF,    3,
    QMetaType::Void, QMetaType::QReal,   11,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 13,   14,

 // properties: name, type, flags
      15, QMetaType::Bool, 0x00095103,

       0        // eod
};

void QtGradientWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QtGradientWidget *_t = static_cast<QtGradientWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->startLinearChanged((*reinterpret_cast< const QPointF(*)>(_a[1]))); break;
        case 1: _t->endLinearChanged((*reinterpret_cast< const QPointF(*)>(_a[1]))); break;
        case 2: _t->centralRadialChanged((*reinterpret_cast< const QPointF(*)>(_a[1]))); break;
        case 3: _t->focalRadialChanged((*reinterpret_cast< const QPointF(*)>(_a[1]))); break;
        case 4: _t->radiusRadialChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 5: _t->centralConicalChanged((*reinterpret_cast< const QPointF(*)>(_a[1]))); break;
        case 6: _t->angleConicalChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 7: _t->setGradientStops((*reinterpret_cast< const QGradientStops(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QtGradientWidget::*_t)(const QPointF & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QtGradientWidget::startLinearChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QtGradientWidget::*_t)(const QPointF & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QtGradientWidget::endLinearChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QtGradientWidget::*_t)(const QPointF & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QtGradientWidget::centralRadialChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (QtGradientWidget::*_t)(const QPointF & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QtGradientWidget::focalRadialChanged)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (QtGradientWidget::*_t)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QtGradientWidget::radiusRadialChanged)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (QtGradientWidget::*_t)(const QPointF & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QtGradientWidget::centralConicalChanged)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (QtGradientWidget::*_t)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QtGradientWidget::angleConicalChanged)) {
                *result = 6;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QtGradientWidget *_t = static_cast<QtGradientWidget *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->isBackgroundCheckered(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QtGradientWidget *_t = static_cast<QtGradientWidget *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setBackgroundCheckered(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QtGradientWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_QtGradientWidget.data,
      qt_meta_data_QtGradientWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QtGradientWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QtGradientWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QtGradientWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int QtGradientWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
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
void QtGradientWidget::startLinearChanged(const QPointF & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QtGradientWidget::endLinearChanged(const QPointF & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QtGradientWidget::centralRadialChanged(const QPointF & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QtGradientWidget::focalRadialChanged(const QPointF & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QtGradientWidget::radiusRadialChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void QtGradientWidget::centralConicalChanged(const QPointF & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void QtGradientWidget::angleConicalChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
