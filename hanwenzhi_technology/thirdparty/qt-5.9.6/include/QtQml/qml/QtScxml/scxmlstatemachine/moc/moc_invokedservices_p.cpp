/****************************************************************************
** Meta object code from reading C++ file 'invokedservices_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../invokedservices_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'invokedservices_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QScxmlInvokedServices_t {
    QByteArrayData data[10];
    char stringdata0[155];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QScxmlInvokedServices_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QScxmlInvokedServices_t qt_meta_stringdata_QScxmlInvokedServices = {
    {
QT_MOC_LITERAL(0, 0, 21), // "QScxmlInvokedServices"
QT_MOC_LITERAL(1, 22, 15), // "DefaultProperty"
QT_MOC_LITERAL(2, 38, 11), // "qmlChildren"
QT_MOC_LITERAL(3, 50, 15), // "childrenChanged"
QT_MOC_LITERAL(4, 66, 0), // ""
QT_MOC_LITERAL(5, 67, 19), // "stateMachineChanged"
QT_MOC_LITERAL(6, 87, 12), // "stateMachine"
QT_MOC_LITERAL(7, 100, 19), // "QScxmlStateMachine*"
QT_MOC_LITERAL(8, 120, 8), // "children"
QT_MOC_LITERAL(9, 129, 25) // "QQmlListProperty<QObject>"

    },
    "QScxmlInvokedServices\0DefaultProperty\0"
    "qmlChildren\0childrenChanged\0\0"
    "stateMachineChanged\0stateMachine\0"
    "QScxmlStateMachine*\0children\0"
    "QQmlListProperty<QObject>"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QScxmlInvokedServices[] = {

 // content:
       7,       // revision
       0,       // classname
       1,   14, // classinfo
       2,   16, // methods
       3,   28, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // classinfo: key, value
       1,    2,

 // signals: name, argc, parameters, tag, flags
       3,    0,   26,    4, 0x06 /* Public */,
       5,    0,   27,    4, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
       6, 0x80000000 | 7, 0x0049510b,
       8, QMetaType::QVariantMap, 0x00495001,
       2, 0x80000000 | 9, 0x00095009,

 // properties: notify_signal_id
       1,
       0,
       0,

       0        // eod
};

void QScxmlInvokedServices::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QScxmlInvokedServices *_t = static_cast<QScxmlInvokedServices *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->childrenChanged(); break;
        case 1: _t->stateMachineChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QScxmlInvokedServices::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QScxmlInvokedServices::childrenChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QScxmlInvokedServices::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QScxmlInvokedServices::stateMachineChanged)) {
                *result = 1;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QScxmlStateMachine* >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QScxmlInvokedServices *_t = static_cast<QScxmlInvokedServices *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QScxmlStateMachine**>(_v) = _t->stateMachine(); break;
        case 1: *reinterpret_cast< QVariantMap*>(_v) = _t->children(); break;
        case 2: *reinterpret_cast< QQmlListProperty<QObject>*>(_v) = _t->qmlChildren(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QScxmlInvokedServices *_t = static_cast<QScxmlInvokedServices *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setStateMachine(*reinterpret_cast< QScxmlStateMachine**>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QScxmlInvokedServices::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QScxmlInvokedServices.data,
      qt_meta_data_QScxmlInvokedServices,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QScxmlInvokedServices::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QScxmlInvokedServices::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QScxmlInvokedServices.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "QQmlParserStatus"))
        return static_cast< QQmlParserStatus*>(this);
    if (!strcmp(_clname, "org.qt-project.Qt.QQmlParserStatus"))
        return static_cast< QQmlParserStatus*>(this);
    return QObject::qt_metacast(_clname);
}

int QScxmlInvokedServices::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
void QScxmlInvokedServices::childrenChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QScxmlInvokedServices::stateMachineChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
