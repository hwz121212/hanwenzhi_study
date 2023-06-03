/****************************************************************************
** Meta object code from reading C++ file 'abstractintegration.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../abstractintegration.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'abstractintegration.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QDesignerIntegrationInterface_t {
    QByteArrayData data[33];
    char stringdata0[469];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QDesignerIntegrationInterface_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QDesignerIntegrationInterface_t qt_meta_stringdata_QDesignerIntegrationInterface = {
    {
QT_MOC_LITERAL(0, 0, 29), // "QDesignerIntegrationInterface"
QT_MOC_LITERAL(1, 30, 15), // "propertyChanged"
QT_MOC_LITERAL(2, 46, 0), // ""
QT_MOC_LITERAL(3, 47, 29), // "QDesignerFormWindowInterface*"
QT_MOC_LITERAL(4, 77, 10), // "formWindow"
QT_MOC_LITERAL(5, 88, 4), // "name"
QT_MOC_LITERAL(6, 93, 5), // "value"
QT_MOC_LITERAL(7, 99, 17), // "objectNameChanged"
QT_MOC_LITERAL(8, 117, 6), // "object"
QT_MOC_LITERAL(9, 124, 7), // "newName"
QT_MOC_LITERAL(10, 132, 7), // "oldName"
QT_MOC_LITERAL(11, 140, 13), // "helpRequested"
QT_MOC_LITERAL(12, 154, 6), // "manual"
QT_MOC_LITERAL(13, 161, 8), // "document"
QT_MOC_LITERAL(14, 170, 14), // "navigateToSlot"
QT_MOC_LITERAL(15, 185, 10), // "objectName"
QT_MOC_LITERAL(16, 196, 15), // "signalSignature"
QT_MOC_LITERAL(17, 212, 14), // "parameterNames"
QT_MOC_LITERAL(18, 227, 13), // "slotSignature"
QT_MOC_LITERAL(19, 241, 11), // "setFeatures"
QT_MOC_LITERAL(20, 253, 7), // "Feature"
QT_MOC_LITERAL(21, 261, 1), // "f"
QT_MOC_LITERAL(22, 263, 14), // "updateProperty"
QT_MOC_LITERAL(23, 278, 25), // "enableSubPropertyHandling"
QT_MOC_LITERAL(24, 304, 13), // "resetProperty"
QT_MOC_LITERAL(25, 318, 18), // "addDynamicProperty"
QT_MOC_LITERAL(26, 337, 21), // "removeDynamicProperty"
QT_MOC_LITERAL(27, 359, 22), // "updateActiveFormWindow"
QT_MOC_LITERAL(28, 382, 15), // "setupFormWindow"
QT_MOC_LITERAL(29, 398, 15), // "updateSelection"
QT_MOC_LITERAL(30, 414, 25), // "updateCustomWidgetPlugins"
QT_MOC_LITERAL(31, 440, 12), // "headerSuffix"
QT_MOC_LITERAL(32, 453, 15) // "headerLowercase"

    },
    "QDesignerIntegrationInterface\0"
    "propertyChanged\0\0QDesignerFormWindowInterface*\0"
    "formWindow\0name\0value\0objectNameChanged\0"
    "object\0newName\0oldName\0helpRequested\0"
    "manual\0document\0navigateToSlot\0"
    "objectName\0signalSignature\0parameterNames\0"
    "slotSignature\0setFeatures\0Feature\0f\0"
    "updateProperty\0enableSubPropertyHandling\0"
    "resetProperty\0addDynamicProperty\0"
    "removeDynamicProperty\0updateActiveFormWindow\0"
    "setupFormWindow\0updateSelection\0"
    "updateCustomWidgetPlugins\0headerSuffix\0"
    "headerLowercase"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QDesignerIntegrationInterface[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       2,  154, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    3,   89,    2, 0x06 /* Public */,
       7,    4,   96,    2, 0x06 /* Public */,
      11,    2,  105,    2, 0x06 /* Public */,
      14,    3,  110,    2, 0x06 /* Public */,
      14,    1,  117,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      19,    1,  120,    2, 0x0a /* Public */,
      22,    3,  123,    2, 0x0a /* Public */,
      22,    2,  130,    2, 0x0a /* Public */,
      24,    1,  135,    2, 0x0a /* Public */,
      25,    2,  138,    2, 0x0a /* Public */,
      26,    1,  143,    2, 0x0a /* Public */,
      27,    1,  146,    2, 0x0a /* Public */,
      28,    1,  149,    2, 0x0a /* Public */,
      29,    0,  152,    2, 0x0a /* Public */,
      30,    0,  153,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::QString, QMetaType::QVariant,    4,    5,    6,
    QMetaType::Void, 0x80000000 | 3, QMetaType::QObjectStar, QMetaType::QString, QMetaType::QString,    4,    8,    9,   10,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   12,   13,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QStringList,   15,   16,   17,
    QMetaType::Void, QMetaType::QString,   18,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 20,   21,
    QMetaType::Void, QMetaType::QString, QMetaType::QVariant, QMetaType::Bool,    5,    6,   23,
    QMetaType::Void, QMetaType::QString, QMetaType::QVariant,    5,    6,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::QString, QMetaType::QVariant,    5,    6,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
      31, QMetaType::QString, 0x00095103,
      32, QMetaType::Bool, 0x00095103,

       0        // eod
};

void QDesignerIntegrationInterface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QDesignerIntegrationInterface *_t = static_cast<QDesignerIntegrationInterface *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->propertyChanged((*reinterpret_cast< QDesignerFormWindowInterface*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 1: _t->objectNameChanged((*reinterpret_cast< QDesignerFormWindowInterface*(*)>(_a[1])),(*reinterpret_cast< QObject*(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4]))); break;
        case 2: _t->helpRequested((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 3: _t->navigateToSlot((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QStringList(*)>(_a[3]))); break;
        case 4: _t->navigateToSlot((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->setFeatures((*reinterpret_cast< Feature(*)>(_a[1]))); break;
        case 6: _t->updateProperty((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QVariant(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 7: _t->updateProperty((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QVariant(*)>(_a[2]))); break;
        case 8: _t->resetProperty((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 9: _t->addDynamicProperty((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QVariant(*)>(_a[2]))); break;
        case 10: _t->removeDynamicProperty((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 11: _t->updateActiveFormWindow((*reinterpret_cast< QDesignerFormWindowInterface*(*)>(_a[1]))); break;
        case 12: _t->setupFormWindow((*reinterpret_cast< QDesignerFormWindowInterface*(*)>(_a[1]))); break;
        case 13: _t->updateSelection(); break;
        case 14: _t->updateCustomWidgetPlugins(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QDesignerIntegrationInterface::*_t)(QDesignerFormWindowInterface * , const QString & , const QVariant & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QDesignerIntegrationInterface::propertyChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QDesignerIntegrationInterface::*_t)(QDesignerFormWindowInterface * , QObject * , const QString & , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QDesignerIntegrationInterface::objectNameChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QDesignerIntegrationInterface::*_t)(const QString & , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QDesignerIntegrationInterface::helpRequested)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (QDesignerIntegrationInterface::*_t)(const QString & , const QString & , const QStringList & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QDesignerIntegrationInterface::navigateToSlot)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (QDesignerIntegrationInterface::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QDesignerIntegrationInterface::navigateToSlot)) {
                *result = 4;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QDesignerIntegrationInterface *_t = static_cast<QDesignerIntegrationInterface *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->headerSuffix(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->isHeaderLowercase(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QDesignerIntegrationInterface *_t = static_cast<QDesignerIntegrationInterface *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setHeaderSuffix(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setHeaderLowercase(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QDesignerIntegrationInterface::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QDesignerIntegrationInterface.data,
      qt_meta_data_QDesignerIntegrationInterface,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QDesignerIntegrationInterface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QDesignerIntegrationInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QDesignerIntegrationInterface.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QDesignerIntegrationInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 15;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 2;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QDesignerIntegrationInterface::propertyChanged(QDesignerFormWindowInterface * _t1, const QString & _t2, const QVariant & _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QDesignerIntegrationInterface::objectNameChanged(QDesignerFormWindowInterface * _t1, QObject * _t2, const QString & _t3, const QString & _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QDesignerIntegrationInterface::helpRequested(const QString & _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QDesignerIntegrationInterface::navigateToSlot(const QString & _t1, const QString & _t2, const QStringList & _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QDesignerIntegrationInterface::navigateToSlot(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
struct qt_meta_stringdata_QDesignerIntegration_t {
    QByteArrayData data[1];
    char stringdata0[21];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QDesignerIntegration_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QDesignerIntegration_t qt_meta_stringdata_QDesignerIntegration = {
    {
QT_MOC_LITERAL(0, 0, 20) // "QDesignerIntegration"

    },
    "QDesignerIntegration"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QDesignerIntegration[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void QDesignerIntegration::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject QDesignerIntegration::staticMetaObject = {
    { &QDesignerIntegrationInterface::staticMetaObject, qt_meta_stringdata_QDesignerIntegration.data,
      qt_meta_data_QDesignerIntegration,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QDesignerIntegration::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QDesignerIntegration::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QDesignerIntegration.stringdata0))
        return static_cast<void*>(this);
    return QDesignerIntegrationInterface::qt_metacast(_clname);
}

int QDesignerIntegration::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDesignerIntegrationInterface::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
