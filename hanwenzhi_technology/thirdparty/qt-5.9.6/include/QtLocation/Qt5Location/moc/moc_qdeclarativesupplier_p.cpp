/****************************************************************************
** Meta object code from reading C++ file 'qdeclarativesupplier_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../5.9.6/QtLocation/private/qdeclarativesupplier_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qdeclarativesupplier_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QDeclarativeSupplier_t {
    QByteArrayData data[13];
    char stringdata0[147];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QDeclarativeSupplier_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QDeclarativeSupplier_t qt_meta_stringdata_QDeclarativeSupplier = {
    {
QT_MOC_LITERAL(0, 0, 20), // "QDeclarativeSupplier"
QT_MOC_LITERAL(1, 21, 11), // "nameChanged"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 17), // "supplierIdChanged"
QT_MOC_LITERAL(4, 52, 10), // "urlChanged"
QT_MOC_LITERAL(5, 63, 11), // "iconChanged"
QT_MOC_LITERAL(6, 75, 8), // "supplier"
QT_MOC_LITERAL(7, 84, 14), // "QPlaceSupplier"
QT_MOC_LITERAL(8, 99, 4), // "name"
QT_MOC_LITERAL(9, 104, 10), // "supplierId"
QT_MOC_LITERAL(10, 115, 3), // "url"
QT_MOC_LITERAL(11, 119, 4), // "icon"
QT_MOC_LITERAL(12, 124, 22) // "QDeclarativePlaceIcon*"

    },
    "QDeclarativeSupplier\0nameChanged\0\0"
    "supplierIdChanged\0urlChanged\0iconChanged\0"
    "supplier\0QPlaceSupplier\0name\0supplierId\0"
    "url\0icon\0QDeclarativePlaceIcon*"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QDeclarativeSupplier[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       5,   38, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x06 /* Public */,
       3,    0,   35,    2, 0x06 /* Public */,
       4,    0,   36,    2, 0x06 /* Public */,
       5,    0,   37,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
       6, 0x80000000 | 7, 0x0009510b,
       8, QMetaType::QString, 0x00495103,
       9, QMetaType::QString, 0x00495103,
      10, QMetaType::QUrl, 0x00495103,
      11, 0x80000000 | 12, 0x0049510b,

 // properties: notify_signal_id
       0,
       0,
       1,
       2,
       3,

       0        // eod
};

void QDeclarativeSupplier::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QDeclarativeSupplier *_t = static_cast<QDeclarativeSupplier *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->nameChanged(); break;
        case 1: _t->supplierIdChanged(); break;
        case 2: _t->urlChanged(); break;
        case 3: _t->iconChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QDeclarativeSupplier::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QDeclarativeSupplier::nameChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QDeclarativeSupplier::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QDeclarativeSupplier::supplierIdChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QDeclarativeSupplier::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QDeclarativeSupplier::urlChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (QDeclarativeSupplier::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QDeclarativeSupplier::iconChanged)) {
                *result = 3;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 4:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QDeclarativePlaceIcon* >(); break;
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QPlaceSupplier >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QDeclarativeSupplier *_t = static_cast<QDeclarativeSupplier *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QPlaceSupplier*>(_v) = _t->supplier(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->name(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->supplierId(); break;
        case 3: *reinterpret_cast< QUrl*>(_v) = _t->url(); break;
        case 4: *reinterpret_cast< QDeclarativePlaceIcon**>(_v) = _t->icon(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QDeclarativeSupplier *_t = static_cast<QDeclarativeSupplier *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setSupplier(*reinterpret_cast< QPlaceSupplier*>(_v)); break;
        case 1: _t->setName(*reinterpret_cast< QString*>(_v)); break;
        case 2: _t->setSupplierId(*reinterpret_cast< QString*>(_v)); break;
        case 3: _t->setUrl(*reinterpret_cast< QUrl*>(_v)); break;
        case 4: _t->setIcon(*reinterpret_cast< QDeclarativePlaceIcon**>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QDeclarativeSupplier::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QDeclarativeSupplier.data,
      qt_meta_data_QDeclarativeSupplier,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QDeclarativeSupplier::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QDeclarativeSupplier::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QDeclarativeSupplier.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "QQmlParserStatus"))
        return static_cast< QQmlParserStatus*>(this);
    if (!strcmp(_clname, "org.qt-project.Qt.QQmlParserStatus"))
        return static_cast< QQmlParserStatus*>(this);
    return QObject::qt_metacast(_clname);
}

int QDeclarativeSupplier::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
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

// SIGNAL 0
void QDeclarativeSupplier::nameChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QDeclarativeSupplier::supplierIdChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void QDeclarativeSupplier::urlChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void QDeclarativeSupplier::iconChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
