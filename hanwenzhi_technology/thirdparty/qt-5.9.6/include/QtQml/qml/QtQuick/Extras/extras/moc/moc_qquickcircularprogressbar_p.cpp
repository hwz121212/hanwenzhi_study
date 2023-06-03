/****************************************************************************
** Meta object code from reading C++ file 'qquickcircularprogressbar_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Private/qquickcircularprogressbar_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qquickcircularprogressbar_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QQuickCircularProgressBar_t {
    QByteArrayData data[19];
    char stringdata0[262];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QQuickCircularProgressBar_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QQuickCircularProgressBar_t qt_meta_stringdata_QQuickCircularProgressBar = {
    {
QT_MOC_LITERAL(0, 0, 25), // "QQuickCircularProgressBar"
QT_MOC_LITERAL(1, 26, 15), // "progressChanged"
QT_MOC_LITERAL(2, 42, 0), // ""
QT_MOC_LITERAL(3, 43, 8), // "progress"
QT_MOC_LITERAL(4, 52, 15), // "barWidthChanged"
QT_MOC_LITERAL(5, 68, 8), // "barWidth"
QT_MOC_LITERAL(6, 77, 12), // "insetChanged"
QT_MOC_LITERAL(7, 90, 5), // "inset"
QT_MOC_LITERAL(8, 96, 24), // "minimumValueAngleChanged"
QT_MOC_LITERAL(9, 121, 17), // "minimumValueAngle"
QT_MOC_LITERAL(10, 139, 24), // "maximumValueAngleChanged"
QT_MOC_LITERAL(11, 164, 17), // "maximumValueAngle"
QT_MOC_LITERAL(12, 182, 22), // "backgroundColorChanged"
QT_MOC_LITERAL(13, 205, 15), // "backgroundColor"
QT_MOC_LITERAL(14, 221, 10), // "clearStops"
QT_MOC_LITERAL(15, 232, 7), // "addStop"
QT_MOC_LITERAL(16, 240, 8), // "position"
QT_MOC_LITERAL(17, 249, 5), // "color"
QT_MOC_LITERAL(18, 255, 6) // "redraw"

    },
    "QQuickCircularProgressBar\0progressChanged\0"
    "\0progress\0barWidthChanged\0barWidth\0"
    "insetChanged\0inset\0minimumValueAngleChanged\0"
    "minimumValueAngle\0maximumValueAngleChanged\0"
    "maximumValueAngle\0backgroundColorChanged\0"
    "backgroundColor\0clearStops\0addStop\0"
    "position\0color\0redraw"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QQuickCircularProgressBar[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       6,   84, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   59,    2, 0x06 /* Public */,
       4,    1,   62,    2, 0x06 /* Public */,
       6,    1,   65,    2, 0x06 /* Public */,
       8,    1,   68,    2, 0x06 /* Public */,
      10,    1,   71,    2, 0x06 /* Public */,
      12,    1,   74,    2, 0x06 /* Public */,

 // methods: name, argc, parameters, tag, flags
      14,    0,   77,    2, 0x02 /* Public */,
      15,    2,   78,    2, 0x02 /* Public */,
      18,    0,   83,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QReal,    3,
    QMetaType::Void, QMetaType::QReal,    5,
    QMetaType::Void, QMetaType::QReal,    7,
    QMetaType::Void, QMetaType::QReal,    9,
    QMetaType::Void, QMetaType::QReal,   11,
    QMetaType::Void, QMetaType::QColor,   13,

 // methods: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QReal, QMetaType::QColor,   16,   17,
    QMetaType::Void,

 // properties: name, type, flags
       3, QMetaType::QReal, 0x00495103,
       5, QMetaType::QReal, 0x00495103,
       7, QMetaType::QReal, 0x00495103,
       9, QMetaType::QReal, 0x00495103,
      11, QMetaType::QReal, 0x00495103,
      13, QMetaType::QColor, 0x00495103,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,
       4,
       5,

       0        // eod
};

void QQuickCircularProgressBar::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QQuickCircularProgressBar *_t = static_cast<QQuickCircularProgressBar *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->progressChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 1: _t->barWidthChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 2: _t->insetChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 3: _t->minimumValueAngleChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 4: _t->maximumValueAngleChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 5: _t->backgroundColorChanged((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 6: _t->clearStops(); break;
        case 7: _t->addStop((*reinterpret_cast< qreal(*)>(_a[1])),(*reinterpret_cast< const QColor(*)>(_a[2]))); break;
        case 8: _t->redraw(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QQuickCircularProgressBar::*_t)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickCircularProgressBar::progressChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QQuickCircularProgressBar::*_t)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickCircularProgressBar::barWidthChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QQuickCircularProgressBar::*_t)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickCircularProgressBar::insetChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (QQuickCircularProgressBar::*_t)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickCircularProgressBar::minimumValueAngleChanged)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (QQuickCircularProgressBar::*_t)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickCircularProgressBar::maximumValueAngleChanged)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (QQuickCircularProgressBar::*_t)(const QColor & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickCircularProgressBar::backgroundColorChanged)) {
                *result = 5;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QQuickCircularProgressBar *_t = static_cast<QQuickCircularProgressBar *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< qreal*>(_v) = _t->progress(); break;
        case 1: *reinterpret_cast< qreal*>(_v) = _t->barWidth(); break;
        case 2: *reinterpret_cast< qreal*>(_v) = _t->inset(); break;
        case 3: *reinterpret_cast< qreal*>(_v) = _t->minimumValueAngle(); break;
        case 4: *reinterpret_cast< qreal*>(_v) = _t->maximumValueAngle(); break;
        case 5: *reinterpret_cast< QColor*>(_v) = _t->backgroundColor(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QQuickCircularProgressBar *_t = static_cast<QQuickCircularProgressBar *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setProgress(*reinterpret_cast< qreal*>(_v)); break;
        case 1: _t->setBarWidth(*reinterpret_cast< qreal*>(_v)); break;
        case 2: _t->setInset(*reinterpret_cast< qreal*>(_v)); break;
        case 3: _t->setMinimumValueAngle(*reinterpret_cast< qreal*>(_v)); break;
        case 4: _t->setMaximumValueAngle(*reinterpret_cast< qreal*>(_v)); break;
        case 5: _t->setBackgroundColor(*reinterpret_cast< QColor*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QQuickCircularProgressBar::staticMetaObject = {
    { &QQuickPaintedItem::staticMetaObject, qt_meta_stringdata_QQuickCircularProgressBar.data,
      qt_meta_data_QQuickCircularProgressBar,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QQuickCircularProgressBar::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QQuickCircularProgressBar::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QQuickCircularProgressBar.stringdata0))
        return static_cast<void*>(this);
    return QQuickPaintedItem::qt_metacast(_clname);
}

int QQuickCircularProgressBar::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QQuickPaintedItem::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
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
void QQuickCircularProgressBar::progressChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QQuickCircularProgressBar::barWidthChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QQuickCircularProgressBar::insetChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QQuickCircularProgressBar::minimumValueAngleChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QQuickCircularProgressBar::maximumValueAngleChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void QQuickCircularProgressBar::backgroundColorChanged(const QColor & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
