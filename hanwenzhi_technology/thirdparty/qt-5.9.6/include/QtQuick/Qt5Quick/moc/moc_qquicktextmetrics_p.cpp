/****************************************************************************
** Meta object code from reading C++ file 'qquicktextmetrics_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../5.9.6/QtQuick/private/qquicktextmetrics_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qquicktextmetrics_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QQuickTextMetrics_t {
    QByteArrayData data[18];
    char stringdata0[202];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QQuickTextMetrics_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QQuickTextMetrics_t qt_meta_stringdata_QQuickTextMetrics = {
    {
QT_MOC_LITERAL(0, 0, 17), // "QQuickTextMetrics"
QT_MOC_LITERAL(1, 18, 11), // "fontChanged"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 11), // "textChanged"
QT_MOC_LITERAL(4, 43, 12), // "elideChanged"
QT_MOC_LITERAL(5, 56, 17), // "elideWidthChanged"
QT_MOC_LITERAL(6, 74, 14), // "metricsChanged"
QT_MOC_LITERAL(7, 89, 4), // "font"
QT_MOC_LITERAL(8, 94, 4), // "text"
QT_MOC_LITERAL(9, 99, 12), // "advanceWidth"
QT_MOC_LITERAL(10, 112, 12), // "boundingRect"
QT_MOC_LITERAL(11, 125, 5), // "width"
QT_MOC_LITERAL(12, 131, 6), // "height"
QT_MOC_LITERAL(13, 138, 17), // "tightBoundingRect"
QT_MOC_LITERAL(14, 156, 10), // "elidedText"
QT_MOC_LITERAL(15, 167, 5), // "elide"
QT_MOC_LITERAL(16, 173, 17), // "Qt::TextElideMode"
QT_MOC_LITERAL(17, 191, 10) // "elideWidth"

    },
    "QQuickTextMetrics\0fontChanged\0\0"
    "textChanged\0elideChanged\0elideWidthChanged\0"
    "metricsChanged\0font\0text\0advanceWidth\0"
    "boundingRect\0width\0height\0tightBoundingRect\0"
    "elidedText\0elide\0Qt::TextElideMode\0"
    "elideWidth"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QQuickTextMetrics[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
      10,   44, // properties
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
       7, QMetaType::QFont, 0x00495903,
       8, QMetaType::QString, 0x00495903,
       9, QMetaType::QReal, 0x00495801,
      10, QMetaType::QRectF, 0x00495801,
      11, QMetaType::QReal, 0x00495801,
      12, QMetaType::QReal, 0x00495801,
      13, QMetaType::QRectF, 0x00495801,
      14, QMetaType::QString, 0x00495801,
      15, 0x80000000 | 16, 0x0049590b,
      17, QMetaType::QReal, 0x00495903,

 // properties: notify_signal_id
       0,
       1,
       4,
       4,
       4,
       4,
       4,
       4,
       2,
       3,

       0        // eod
};

void QQuickTextMetrics::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QQuickTextMetrics *_t = static_cast<QQuickTextMetrics *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->fontChanged(); break;
        case 1: _t->textChanged(); break;
        case 2: _t->elideChanged(); break;
        case 3: _t->elideWidthChanged(); break;
        case 4: _t->metricsChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QQuickTextMetrics::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickTextMetrics::fontChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QQuickTextMetrics::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickTextMetrics::textChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QQuickTextMetrics::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickTextMetrics::elideChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (QQuickTextMetrics::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickTextMetrics::elideWidthChanged)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (QQuickTextMetrics::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickTextMetrics::metricsChanged)) {
                *result = 4;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QQuickTextMetrics *_t = static_cast<QQuickTextMetrics *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QFont*>(_v) = _t->font(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->text(); break;
        case 2: *reinterpret_cast< qreal*>(_v) = _t->advanceWidth(); break;
        case 3: *reinterpret_cast< QRectF*>(_v) = _t->boundingRect(); break;
        case 4: *reinterpret_cast< qreal*>(_v) = _t->width(); break;
        case 5: *reinterpret_cast< qreal*>(_v) = _t->height(); break;
        case 6: *reinterpret_cast< QRectF*>(_v) = _t->tightBoundingRect(); break;
        case 7: *reinterpret_cast< QString*>(_v) = _t->elidedText(); break;
        case 8: *reinterpret_cast< Qt::TextElideMode*>(_v) = _t->elide(); break;
        case 9: *reinterpret_cast< qreal*>(_v) = _t->elideWidth(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QQuickTextMetrics *_t = static_cast<QQuickTextMetrics *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setFont(*reinterpret_cast< QFont*>(_v)); break;
        case 1: _t->setText(*reinterpret_cast< QString*>(_v)); break;
        case 8: _t->setElide(*reinterpret_cast< Qt::TextElideMode*>(_v)); break;
        case 9: _t->setElideWidth(*reinterpret_cast< qreal*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_a);
}

const QMetaObject QQuickTextMetrics::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QQuickTextMetrics.data,
      qt_meta_data_QQuickTextMetrics,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QQuickTextMetrics::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QQuickTextMetrics::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QQuickTextMetrics.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QQuickTextMetrics::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
void QQuickTextMetrics::fontChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QQuickTextMetrics::textChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void QQuickTextMetrics::elideChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void QQuickTextMetrics::elideWidthChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void QQuickTextMetrics::metricsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
