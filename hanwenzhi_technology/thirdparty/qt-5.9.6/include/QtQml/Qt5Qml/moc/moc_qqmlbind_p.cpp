/****************************************************************************
** Meta object code from reading C++ file 'qqmlbind_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../5.9.6/QtQml/private/qqmlbind_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qqmlbind_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QQmlBind_t {
    QByteArrayData data[6];
    char stringdata0[44];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QQmlBind_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QQmlBind_t qt_meta_stringdata_QQmlBind = {
    {
QT_MOC_LITERAL(0, 0, 8), // "QQmlBind"
QT_MOC_LITERAL(1, 9, 6), // "target"
QT_MOC_LITERAL(2, 16, 8), // "property"
QT_MOC_LITERAL(3, 25, 5), // "value"
QT_MOC_LITERAL(4, 31, 4), // "when"
QT_MOC_LITERAL(5, 36, 7) // "delayed"

    },
    "QQmlBind\0target\0property\0value\0when\0"
    "delayed"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QQmlBind[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       5,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, QMetaType::QObjectStar, 0x00095003,
       2, QMetaType::QString, 0x00095103,
       3, QMetaType::QVariant, 0x00095103,
       4, QMetaType::Bool, 0x00095103,
       5, QMetaType::Bool, 0x00895103,

 // properties: revision
       0,
       0,
       0,
       0,
       8,

       0        // eod
};

void QQmlBind::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{

#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty) {
        QQmlBind *_t = static_cast<QQmlBind *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QObject**>(_v) = _t->object(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->property(); break;
        case 2: *reinterpret_cast< QVariant*>(_v) = _t->value(); break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->when(); break;
        case 4: *reinterpret_cast< bool*>(_v) = _t->delayed(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QQmlBind *_t = static_cast<QQmlBind *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setObject(*reinterpret_cast< QObject**>(_v)); break;
        case 1: _t->setProperty(*reinterpret_cast< QString*>(_v)); break;
        case 2: _t->setValue(*reinterpret_cast< QVariant*>(_v)); break;
        case 3: _t->setWhen(*reinterpret_cast< bool*>(_v)); break;
        case 4: _t->setDelayed(*reinterpret_cast< bool*>(_v)); break;
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

const QMetaObject QQmlBind::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QQmlBind.data,
      qt_meta_data_QQmlBind,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QQmlBind::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QQmlBind::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QQmlBind.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "QQmlPropertyValueSource"))
        return static_cast< QQmlPropertyValueSource*>(this);
    if (!strcmp(_clname, "QQmlParserStatus"))
        return static_cast< QQmlParserStatus*>(this);
    if (!strcmp(_clname, "org.qt-project.Qt.QQmlParserStatus"))
        return static_cast< QQmlParserStatus*>(this);
    if (!strcmp(_clname, "org.qt-project.Qt.QQmlPropertyValueSource"))
        return static_cast< QQmlPropertyValueSource*>(this);
    return QObject::qt_metacast(_clname);
}

int QQmlBind::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
   if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 5;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
