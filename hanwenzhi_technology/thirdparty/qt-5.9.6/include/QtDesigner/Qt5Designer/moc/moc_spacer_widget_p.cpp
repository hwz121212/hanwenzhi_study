/****************************************************************************
** Meta object code from reading C++ file 'spacer_widget_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../5.9.6/QtDesigner/private/spacer_widget_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'spacer_widget_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Spacer_t {
    QByteArrayData data[7];
    char stringdata0[84];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Spacer_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Spacer_t qt_meta_stringdata_Spacer = {
    {
QT_MOC_LITERAL(0, 0, 6), // "Spacer"
QT_MOC_LITERAL(1, 7, 10), // "spacerName"
QT_MOC_LITERAL(2, 18, 11), // "orientation"
QT_MOC_LITERAL(3, 30, 15), // "Qt::Orientation"
QT_MOC_LITERAL(4, 46, 8), // "sizeType"
QT_MOC_LITERAL(5, 55, 19), // "QSizePolicy::Policy"
QT_MOC_LITERAL(6, 75, 8) // "sizeHint"

    },
    "Spacer\0spacerName\0orientation\0"
    "Qt::Orientation\0sizeType\0QSizePolicy::Policy\0"
    "sizeHint"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Spacer[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       4,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, QMetaType::QString, 0x00095003,
       2, 0x80000000 | 3, 0x0009510b,
       4, 0x80000000 | 5, 0x0009510b,
       6, QMetaType::QSize, 0x00095003,

 // enums: name, flags, count, data

 // enum data: key, value

       0        // eod
};

void Spacer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{

#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty) {
        Spacer *_t = static_cast<Spacer *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->objectName(); break;
        case 1: *reinterpret_cast< Qt::Orientation*>(_v) = _t->orientation(); break;
        case 2: *reinterpret_cast< QSizePolicy::Policy*>(_v) = _t->sizeType(); break;
        case 3: *reinterpret_cast< QSize*>(_v) = _t->sizeHintProperty(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        Spacer *_t = static_cast<Spacer *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setObjectName(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setOrientation(*reinterpret_cast< Qt::Orientation*>(_v)); break;
        case 2: _t->setSizeType(*reinterpret_cast< QSizePolicy::Policy*>(_v)); break;
        case 3: _t->setSizeHintProperty(*reinterpret_cast< QSize*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

static const QMetaObject * const qt_meta_extradata_Spacer[] = {
        &QSizePolicy::staticMetaObject,
    nullptr
};

const QMetaObject Spacer::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Spacer.data,
      qt_meta_data_Spacer,  qt_static_metacall, qt_meta_extradata_Spacer, nullptr}
};


const QMetaObject *Spacer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Spacer::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Spacer.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int Spacer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
   if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
