/****************************************************************************
** Meta object code from reading C++ file 'qtcolorline.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../qtgradienteditor/qtcolorline.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qtcolorline.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QtColorLine_t {
    QByteArrayData data[20];
    char stringdata0[195];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QtColorLine_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QtColorLine_t qt_meta_stringdata_QtColorLine = {
    {
QT_MOC_LITERAL(0, 0, 11), // "QtColorLine"
QT_MOC_LITERAL(1, 12, 12), // "colorChanged"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 5), // "color"
QT_MOC_LITERAL(4, 32, 8), // "setColor"
QT_MOC_LITERAL(5, 41, 14), // "indicatorSpace"
QT_MOC_LITERAL(6, 56, 13), // "indicatorSize"
QT_MOC_LITERAL(7, 70, 4), // "flip"
QT_MOC_LITERAL(8, 75, 19), // "backgroundCheckered"
QT_MOC_LITERAL(9, 95, 14), // "colorComponent"
QT_MOC_LITERAL(10, 110, 14), // "ColorComponent"
QT_MOC_LITERAL(11, 125, 11), // "orientation"
QT_MOC_LITERAL(12, 137, 15), // "Qt::Orientation"
QT_MOC_LITERAL(13, 153, 3), // "Red"
QT_MOC_LITERAL(14, 157, 5), // "Green"
QT_MOC_LITERAL(15, 163, 4), // "Blue"
QT_MOC_LITERAL(16, 168, 3), // "Hue"
QT_MOC_LITERAL(17, 172, 10), // "Saturation"
QT_MOC_LITERAL(18, 183, 5), // "Value"
QT_MOC_LITERAL(19, 189, 5) // "Alpha"

    },
    "QtColorLine\0colorChanged\0\0color\0"
    "setColor\0indicatorSpace\0indicatorSize\0"
    "flip\0backgroundCheckered\0colorComponent\0"
    "ColorComponent\0orientation\0Qt::Orientation\0"
    "Red\0Green\0Blue\0Hue\0Saturation\0Value\0"
    "Alpha"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QtColorLine[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       7,   30, // properties
       1,   51, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   27,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QColor,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::QColor,    3,

 // properties: name, type, flags
       3, QMetaType::QColor, 0x00095103,
       5, QMetaType::Int, 0x00095103,
       6, QMetaType::Int, 0x00095103,
       7, QMetaType::Bool, 0x00095103,
       8, QMetaType::Bool, 0x00095103,
       9, 0x80000000 | 10, 0x0009510b,
      11, 0x80000000 | 12, 0x0009510b,

 // enums: name, flags, count, data
      10, 0x0,    7,   55,

 // enum data: key, value
      13, uint(QtColorLine::Red),
      14, uint(QtColorLine::Green),
      15, uint(QtColorLine::Blue),
      16, uint(QtColorLine::Hue),
      17, uint(QtColorLine::Saturation),
      18, uint(QtColorLine::Value),
      19, uint(QtColorLine::Alpha),

       0        // eod
};

void QtColorLine::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QtColorLine *_t = static_cast<QtColorLine *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->colorChanged((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 1: _t->setColor((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QtColorLine::*_t)(const QColor & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QtColorLine::colorChanged)) {
                *result = 0;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QtColorLine *_t = static_cast<QtColorLine *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QColor*>(_v) = _t->color(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->indicatorSpace(); break;
        case 2: *reinterpret_cast< int*>(_v) = _t->indicatorSize(); break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->flip(); break;
        case 4: *reinterpret_cast< bool*>(_v) = _t->isBackgroundCheckered(); break;
        case 5: *reinterpret_cast< ColorComponent*>(_v) = _t->colorComponent(); break;
        case 6: *reinterpret_cast< Qt::Orientation*>(_v) = _t->orientation(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QtColorLine *_t = static_cast<QtColorLine *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setColor(*reinterpret_cast< QColor*>(_v)); break;
        case 1: _t->setIndicatorSpace(*reinterpret_cast< int*>(_v)); break;
        case 2: _t->setIndicatorSize(*reinterpret_cast< int*>(_v)); break;
        case 3: _t->setFlip(*reinterpret_cast< bool*>(_v)); break;
        case 4: _t->setBackgroundCheckered(*reinterpret_cast< bool*>(_v)); break;
        case 5: _t->setColorComponent(*reinterpret_cast< ColorComponent*>(_v)); break;
        case 6: _t->setOrientation(*reinterpret_cast< Qt::Orientation*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QtColorLine::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_QtColorLine.data,
      qt_meta_data_QtColorLine,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QtColorLine::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QtColorLine::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QtColorLine.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int QtColorLine::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 7;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QtColorLine::colorChanged(const QColor & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
