/****************************************************************************
** Meta object code from reading C++ file 'qquickflatprogressbar_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Private/qquickflatprogressbar_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qquickflatprogressbar_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QQuickFlatProgressBar_t {
    QByteArrayData data[13];
    char stringdata0[189];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QQuickFlatProgressBar_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QQuickFlatProgressBar_t qt_meta_stringdata_QQuickFlatProgressBar = {
    {
QT_MOC_LITERAL(0, 0, 21), // "QQuickFlatProgressBar"
QT_MOC_LITERAL(1, 22, 19), // "stripeOffsetChanged"
QT_MOC_LITERAL(2, 42, 0), // ""
QT_MOC_LITERAL(3, 43, 12), // "stripeOffset"
QT_MOC_LITERAL(4, 56, 15), // "progressChanged"
QT_MOC_LITERAL(5, 72, 8), // "progress"
QT_MOC_LITERAL(6, 81, 20), // "indeterminateChanged"
QT_MOC_LITERAL(7, 102, 13), // "indeterminate"
QT_MOC_LITERAL(8, 116, 7), // "repaint"
QT_MOC_LITERAL(9, 124, 16), // "restartAnimation"
QT_MOC_LITERAL(10, 141, 16), // "onVisibleChanged"
QT_MOC_LITERAL(11, 158, 14), // "onWidthChanged"
QT_MOC_LITERAL(12, 173, 15) // "onHeightChanged"

    },
    "QQuickFlatProgressBar\0stripeOffsetChanged\0"
    "\0stripeOffset\0progressChanged\0progress\0"
    "indeterminateChanged\0indeterminate\0"
    "repaint\0restartAnimation\0onVisibleChanged\0"
    "onWidthChanged\0onHeightChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QQuickFlatProgressBar[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       3,   68, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x06 /* Public */,
       4,    1,   57,    2, 0x06 /* Public */,
       6,    1,   60,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    0,   63,    2, 0x0a /* Public */,
       9,    0,   64,    2, 0x0a /* Public */,
      10,    0,   65,    2, 0x0a /* Public */,
      11,    0,   66,    2, 0x0a /* Public */,
      12,    0,   67,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QReal,    3,
    QMetaType::Void, QMetaType::QReal,    5,
    QMetaType::Void, QMetaType::Bool,    7,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
       3, QMetaType::QReal, 0x00495103,
       5, QMetaType::QReal, 0x00495103,
       7, QMetaType::Bool, 0x00495103,

 // properties: notify_signal_id
       0,
       1,
       2,

       0        // eod
};

void QQuickFlatProgressBar::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QQuickFlatProgressBar *_t = static_cast<QQuickFlatProgressBar *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->stripeOffsetChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 1: _t->progressChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 2: _t->indeterminateChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->repaint(); break;
        case 4: _t->restartAnimation(); break;
        case 5: _t->onVisibleChanged(); break;
        case 6: _t->onWidthChanged(); break;
        case 7: _t->onHeightChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QQuickFlatProgressBar::*_t)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickFlatProgressBar::stripeOffsetChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QQuickFlatProgressBar::*_t)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickFlatProgressBar::progressChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QQuickFlatProgressBar::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickFlatProgressBar::indeterminateChanged)) {
                *result = 2;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QQuickFlatProgressBar *_t = static_cast<QQuickFlatProgressBar *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< qreal*>(_v) = _t->stripeOffset(); break;
        case 1: *reinterpret_cast< qreal*>(_v) = _t->progress(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->isIndeterminate(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QQuickFlatProgressBar *_t = static_cast<QQuickFlatProgressBar *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setStripeOffset(*reinterpret_cast< qreal*>(_v)); break;
        case 1: _t->setProgress(*reinterpret_cast< qreal*>(_v)); break;
        case 2: _t->setIndeterminate(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QQuickFlatProgressBar::staticMetaObject = {
    { &QQuickPaintedItem::staticMetaObject, qt_meta_stringdata_QQuickFlatProgressBar.data,
      qt_meta_data_QQuickFlatProgressBar,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QQuickFlatProgressBar::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QQuickFlatProgressBar::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QQuickFlatProgressBar.stringdata0))
        return static_cast<void*>(this);
    return QQuickPaintedItem::qt_metacast(_clname);
}

int QQuickFlatProgressBar::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QQuickPaintedItem::qt_metacall(_c, _id, _a);
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
void QQuickFlatProgressBar::stripeOffsetChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QQuickFlatProgressBar::progressChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QQuickFlatProgressBar::indeterminateChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
