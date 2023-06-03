/****************************************************************************
** Meta object code from reading C++ file 'qdeclarativegeoaddress_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../5.9.6/QtPositioning/private/qdeclarativegeoaddress_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qdeclarativegeoaddress_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QDeclarativeGeoAddress_t {
    QByteArrayData data[24];
    char stringdata0[286];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QDeclarativeGeoAddress_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QDeclarativeGeoAddress_t qt_meta_stringdata_QDeclarativeGeoAddress = {
    {
QT_MOC_LITERAL(0, 0, 22), // "QDeclarativeGeoAddress"
QT_MOC_LITERAL(1, 23, 11), // "textChanged"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 14), // "countryChanged"
QT_MOC_LITERAL(4, 51, 18), // "countryCodeChanged"
QT_MOC_LITERAL(5, 70, 12), // "stateChanged"
QT_MOC_LITERAL(6, 83, 13), // "countyChanged"
QT_MOC_LITERAL(7, 97, 11), // "cityChanged"
QT_MOC_LITERAL(8, 109, 15), // "districtChanged"
QT_MOC_LITERAL(9, 125, 13), // "streetChanged"
QT_MOC_LITERAL(10, 139, 17), // "postalCodeChanged"
QT_MOC_LITERAL(11, 157, 22), // "isTextGeneratedChanged"
QT_MOC_LITERAL(12, 180, 7), // "address"
QT_MOC_LITERAL(13, 188, 11), // "QGeoAddress"
QT_MOC_LITERAL(14, 200, 4), // "text"
QT_MOC_LITERAL(15, 205, 7), // "country"
QT_MOC_LITERAL(16, 213, 11), // "countryCode"
QT_MOC_LITERAL(17, 225, 5), // "state"
QT_MOC_LITERAL(18, 231, 6), // "county"
QT_MOC_LITERAL(19, 238, 4), // "city"
QT_MOC_LITERAL(20, 243, 8), // "district"
QT_MOC_LITERAL(21, 252, 6), // "street"
QT_MOC_LITERAL(22, 259, 10), // "postalCode"
QT_MOC_LITERAL(23, 270, 15) // "isTextGenerated"

    },
    "QDeclarativeGeoAddress\0textChanged\0\0"
    "countryChanged\0countryCodeChanged\0"
    "stateChanged\0countyChanged\0cityChanged\0"
    "districtChanged\0streetChanged\0"
    "postalCodeChanged\0isTextGeneratedChanged\0"
    "address\0QGeoAddress\0text\0country\0"
    "countryCode\0state\0county\0city\0district\0"
    "street\0postalCode\0isTextGenerated"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QDeclarativeGeoAddress[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
      11,   74, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      10,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   64,    2, 0x06 /* Public */,
       3,    0,   65,    2, 0x06 /* Public */,
       4,    0,   66,    2, 0x06 /* Public */,
       5,    0,   67,    2, 0x06 /* Public */,
       6,    0,   68,    2, 0x06 /* Public */,
       7,    0,   69,    2, 0x06 /* Public */,
       8,    0,   70,    2, 0x06 /* Public */,
       9,    0,   71,    2, 0x06 /* Public */,
      10,    0,   72,    2, 0x06 /* Public */,
      11,    0,   73,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
      12, 0x80000000 | 13, 0x0009510b,
      14, QMetaType::QString, 0x00495103,
      15, QMetaType::QString, 0x00495103,
      16, QMetaType::QString, 0x00495103,
      17, QMetaType::QString, 0x00495103,
      18, QMetaType::QString, 0x00495103,
      19, QMetaType::QString, 0x00495103,
      20, QMetaType::QString, 0x00495103,
      21, QMetaType::QString, 0x00495103,
      22, QMetaType::QString, 0x00495103,
      23, QMetaType::Bool, 0x00495001,

 // properties: notify_signal_id
       0,
       0,
       1,
       2,
       3,
       4,
       5,
       6,
       7,
       8,
       9,

       0        // eod
};

void QDeclarativeGeoAddress::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QDeclarativeGeoAddress *_t = static_cast<QDeclarativeGeoAddress *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->textChanged(); break;
        case 1: _t->countryChanged(); break;
        case 2: _t->countryCodeChanged(); break;
        case 3: _t->stateChanged(); break;
        case 4: _t->countyChanged(); break;
        case 5: _t->cityChanged(); break;
        case 6: _t->districtChanged(); break;
        case 7: _t->streetChanged(); break;
        case 8: _t->postalCodeChanged(); break;
        case 9: _t->isTextGeneratedChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QDeclarativeGeoAddress::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QDeclarativeGeoAddress::textChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QDeclarativeGeoAddress::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QDeclarativeGeoAddress::countryChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QDeclarativeGeoAddress::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QDeclarativeGeoAddress::countryCodeChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (QDeclarativeGeoAddress::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QDeclarativeGeoAddress::stateChanged)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (QDeclarativeGeoAddress::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QDeclarativeGeoAddress::countyChanged)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (QDeclarativeGeoAddress::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QDeclarativeGeoAddress::cityChanged)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (QDeclarativeGeoAddress::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QDeclarativeGeoAddress::districtChanged)) {
                *result = 6;
                return;
            }
        }
        {
            typedef void (QDeclarativeGeoAddress::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QDeclarativeGeoAddress::streetChanged)) {
                *result = 7;
                return;
            }
        }
        {
            typedef void (QDeclarativeGeoAddress::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QDeclarativeGeoAddress::postalCodeChanged)) {
                *result = 8;
                return;
            }
        }
        {
            typedef void (QDeclarativeGeoAddress::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QDeclarativeGeoAddress::isTextGeneratedChanged)) {
                *result = 9;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QGeoAddress >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QDeclarativeGeoAddress *_t = static_cast<QDeclarativeGeoAddress *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QGeoAddress*>(_v) = _t->address(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->text(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->country(); break;
        case 3: *reinterpret_cast< QString*>(_v) = _t->countryCode(); break;
        case 4: *reinterpret_cast< QString*>(_v) = _t->state(); break;
        case 5: *reinterpret_cast< QString*>(_v) = _t->county(); break;
        case 6: *reinterpret_cast< QString*>(_v) = _t->city(); break;
        case 7: *reinterpret_cast< QString*>(_v) = _t->district(); break;
        case 8: *reinterpret_cast< QString*>(_v) = _t->street(); break;
        case 9: *reinterpret_cast< QString*>(_v) = _t->postalCode(); break;
        case 10: *reinterpret_cast< bool*>(_v) = _t->isTextGenerated(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QDeclarativeGeoAddress *_t = static_cast<QDeclarativeGeoAddress *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setAddress(*reinterpret_cast< QGeoAddress*>(_v)); break;
        case 1: _t->setText(*reinterpret_cast< QString*>(_v)); break;
        case 2: _t->setCountry(*reinterpret_cast< QString*>(_v)); break;
        case 3: _t->setCountryCode(*reinterpret_cast< QString*>(_v)); break;
        case 4: _t->setState(*reinterpret_cast< QString*>(_v)); break;
        case 5: _t->setCounty(*reinterpret_cast< QString*>(_v)); break;
        case 6: _t->setCity(*reinterpret_cast< QString*>(_v)); break;
        case 7: _t->setDistrict(*reinterpret_cast< QString*>(_v)); break;
        case 8: _t->setStreet(*reinterpret_cast< QString*>(_v)); break;
        case 9: _t->setPostalCode(*reinterpret_cast< QString*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QDeclarativeGeoAddress::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QDeclarativeGeoAddress.data,
      qt_meta_data_QDeclarativeGeoAddress,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QDeclarativeGeoAddress::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QDeclarativeGeoAddress::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QDeclarativeGeoAddress.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QDeclarativeGeoAddress::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
        _id -= 11;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 11;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 11;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 11;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 11;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 11;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QDeclarativeGeoAddress::textChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QDeclarativeGeoAddress::countryChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void QDeclarativeGeoAddress::countryCodeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void QDeclarativeGeoAddress::stateChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void QDeclarativeGeoAddress::countyChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void QDeclarativeGeoAddress::cityChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void QDeclarativeGeoAddress::districtChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void QDeclarativeGeoAddress::streetChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void QDeclarativeGeoAddress::postalCodeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}

// SIGNAL 9
void QDeclarativeGeoAddress::isTextGeneratedChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 9, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
