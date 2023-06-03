/****************************************************************************
** Meta object code from reading C++ file 'qquickspinboxvalidator_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Private/qquickspinboxvalidator_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qquickspinboxvalidator_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QQuickSpinBoxValidator1_t {
    QByteArrayData data[20];
    char stringdata0[239];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QQuickSpinBoxValidator1_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QQuickSpinBoxValidator1_t qt_meta_stringdata_QQuickSpinBoxValidator1 = {
    {
QT_MOC_LITERAL(0, 0, 23), // "QQuickSpinBoxValidator1"
QT_MOC_LITERAL(1, 24, 12), // "valueChanged"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 19), // "minimumValueChanged"
QT_MOC_LITERAL(4, 58, 19), // "maximumValueChanged"
QT_MOC_LITERAL(5, 78, 15), // "decimalsChanged"
QT_MOC_LITERAL(6, 94, 15), // "stepSizeChanged"
QT_MOC_LITERAL(7, 110, 13), // "prefixChanged"
QT_MOC_LITERAL(8, 124, 13), // "suffixChanged"
QT_MOC_LITERAL(9, 138, 11), // "textChanged"
QT_MOC_LITERAL(10, 150, 9), // "increment"
QT_MOC_LITERAL(11, 160, 9), // "decrement"
QT_MOC_LITERAL(12, 170, 4), // "text"
QT_MOC_LITERAL(13, 175, 5), // "value"
QT_MOC_LITERAL(14, 181, 12), // "minimumValue"
QT_MOC_LITERAL(15, 194, 12), // "maximumValue"
QT_MOC_LITERAL(16, 207, 8), // "decimals"
QT_MOC_LITERAL(17, 216, 8), // "stepSize"
QT_MOC_LITERAL(18, 225, 6), // "prefix"
QT_MOC_LITERAL(19, 232, 6) // "suffix"

    },
    "QQuickSpinBoxValidator1\0valueChanged\0"
    "\0minimumValueChanged\0maximumValueChanged\0"
    "decimalsChanged\0stepSizeChanged\0"
    "prefixChanged\0suffixChanged\0textChanged\0"
    "increment\0decrement\0text\0value\0"
    "minimumValue\0maximumValue\0decimals\0"
    "stepSize\0prefix\0suffix"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QQuickSpinBoxValidator1[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       8,   74, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       8,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   64,    2, 0x06 /* Public */,
       3,    0,   65,    2, 0x06 /* Public */,
       4,    0,   66,    2, 0x06 /* Public */,
       5,    0,   67,    2, 0x06 /* Public */,
       6,    0,   68,    2, 0x06 /* Public */,
       7,    0,   69,    2, 0x06 /* Public */,
       8,    0,   70,    2, 0x06 /* Public */,
       9,    0,   71,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      10,    0,   72,    2, 0x0a /* Public */,
      11,    0,   73,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
      12, QMetaType::QString, 0x00495001,
      13, QMetaType::QReal, 0x00495103,
      14, QMetaType::QReal, 0x00495103,
      15, QMetaType::QReal, 0x00495103,
      16, QMetaType::Int, 0x00495103,
      17, QMetaType::QReal, 0x00495103,
      18, QMetaType::QString, 0x00495103,
      19, QMetaType::QString, 0x00495103,

 // properties: notify_signal_id
       7,
       0,
       1,
       2,
       3,
       4,
       5,
       6,

       0        // eod
};

void QQuickSpinBoxValidator1::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QQuickSpinBoxValidator1 *_t = static_cast<QQuickSpinBoxValidator1 *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->valueChanged(); break;
        case 1: _t->minimumValueChanged(); break;
        case 2: _t->maximumValueChanged(); break;
        case 3: _t->decimalsChanged(); break;
        case 4: _t->stepSizeChanged(); break;
        case 5: _t->prefixChanged(); break;
        case 6: _t->suffixChanged(); break;
        case 7: _t->textChanged(); break;
        case 8: _t->increment(); break;
        case 9: _t->decrement(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QQuickSpinBoxValidator1::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickSpinBoxValidator1::valueChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QQuickSpinBoxValidator1::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickSpinBoxValidator1::minimumValueChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QQuickSpinBoxValidator1::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickSpinBoxValidator1::maximumValueChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (QQuickSpinBoxValidator1::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickSpinBoxValidator1::decimalsChanged)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (QQuickSpinBoxValidator1::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickSpinBoxValidator1::stepSizeChanged)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (QQuickSpinBoxValidator1::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickSpinBoxValidator1::prefixChanged)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (QQuickSpinBoxValidator1::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickSpinBoxValidator1::suffixChanged)) {
                *result = 6;
                return;
            }
        }
        {
            typedef void (QQuickSpinBoxValidator1::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickSpinBoxValidator1::textChanged)) {
                *result = 7;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QQuickSpinBoxValidator1 *_t = static_cast<QQuickSpinBoxValidator1 *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->text(); break;
        case 1: *reinterpret_cast< qreal*>(_v) = _t->value(); break;
        case 2: *reinterpret_cast< qreal*>(_v) = _t->minimumValue(); break;
        case 3: *reinterpret_cast< qreal*>(_v) = _t->maximumValue(); break;
        case 4: *reinterpret_cast< int*>(_v) = _t->decimals(); break;
        case 5: *reinterpret_cast< qreal*>(_v) = _t->stepSize(); break;
        case 6: *reinterpret_cast< QString*>(_v) = _t->prefix(); break;
        case 7: *reinterpret_cast< QString*>(_v) = _t->suffix(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QQuickSpinBoxValidator1 *_t = static_cast<QQuickSpinBoxValidator1 *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 1: _t->setValue(*reinterpret_cast< qreal*>(_v)); break;
        case 2: _t->setMinimumValue(*reinterpret_cast< qreal*>(_v)); break;
        case 3: _t->setMaximumValue(*reinterpret_cast< qreal*>(_v)); break;
        case 4: _t->setDecimals(*reinterpret_cast< int*>(_v)); break;
        case 5: _t->setStepSize(*reinterpret_cast< qreal*>(_v)); break;
        case 6: _t->setPrefix(*reinterpret_cast< QString*>(_v)); break;
        case 7: _t->setSuffix(*reinterpret_cast< QString*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_a);
}

const QMetaObject QQuickSpinBoxValidator1::staticMetaObject = {
    { &QValidator::staticMetaObject, qt_meta_stringdata_QQuickSpinBoxValidator1.data,
      qt_meta_data_QQuickSpinBoxValidator1,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QQuickSpinBoxValidator1::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QQuickSpinBoxValidator1::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QQuickSpinBoxValidator1.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "QQmlParserStatus"))
        return static_cast< QQmlParserStatus*>(this);
    if (!strcmp(_clname, "org.qt-project.Qt.QQmlParserStatus"))
        return static_cast< QQmlParserStatus*>(this);
    return QValidator::qt_metacast(_clname);
}

int QQuickSpinBoxValidator1::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QValidator::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 8;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QQuickSpinBoxValidator1::valueChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QQuickSpinBoxValidator1::minimumValueChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void QQuickSpinBoxValidator1::maximumValueChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void QQuickSpinBoxValidator1::decimalsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void QQuickSpinBoxValidator1::stepSizeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void QQuickSpinBoxValidator1::prefixChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void QQuickSpinBoxValidator1::suffixChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void QQuickSpinBoxValidator1::textChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
