/****************************************************************************
** Meta object code from reading C++ file 'statemachineloader_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../statemachineloader_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'statemachineloader_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QScxmlStateMachineLoader_t {
    QByteArrayData data[12];
    char stringdata0[179];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QScxmlStateMachineLoader_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QScxmlStateMachineLoader_t qt_meta_stringdata_QScxmlStateMachineLoader = {
    {
QT_MOC_LITERAL(0, 0, 24), // "QScxmlStateMachineLoader"
QT_MOC_LITERAL(1, 25, 13), // "sourceChanged"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 20), // "initialValuesChanged"
QT_MOC_LITERAL(4, 61, 19), // "stateMachineChanged"
QT_MOC_LITERAL(5, 81, 16), // "dataModelChanged"
QT_MOC_LITERAL(6, 98, 6), // "source"
QT_MOC_LITERAL(7, 105, 12), // "stateMachine"
QT_MOC_LITERAL(8, 118, 19), // "QScxmlStateMachine*"
QT_MOC_LITERAL(9, 138, 13), // "initialValues"
QT_MOC_LITERAL(10, 152, 9), // "dataModel"
QT_MOC_LITERAL(11, 162, 16) // "QScxmlDataModel*"

    },
    "QScxmlStateMachineLoader\0sourceChanged\0"
    "\0initialValuesChanged\0stateMachineChanged\0"
    "dataModelChanged\0source\0stateMachine\0"
    "QScxmlStateMachine*\0initialValues\0"
    "dataModel\0QScxmlDataModel*"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QScxmlStateMachineLoader[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       4,   38, // properties
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
       6, QMetaType::QUrl, 0x00495103,
       7, 0x80000000 | 8, 0x00494009,
       9, QMetaType::QVariantMap, 0x00495103,
      10, 0x80000000 | 11, 0x0049510b,

 // properties: notify_signal_id
       0,
       2,
       1,
       3,

       0        // eod
};

void QScxmlStateMachineLoader::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QScxmlStateMachineLoader *_t = static_cast<QScxmlStateMachineLoader *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sourceChanged(); break;
        case 1: _t->initialValuesChanged(); break;
        case 2: _t->stateMachineChanged(); break;
        case 3: _t->dataModelChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QScxmlStateMachineLoader::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QScxmlStateMachineLoader::sourceChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QScxmlStateMachineLoader::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QScxmlStateMachineLoader::initialValuesChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QScxmlStateMachineLoader::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QScxmlStateMachineLoader::stateMachineChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (QScxmlStateMachineLoader::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QScxmlStateMachineLoader::dataModelChanged)) {
                *result = 3;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 3:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QScxmlDataModel* >(); break;
        case 1:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QScxmlStateMachine* >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QScxmlStateMachineLoader *_t = static_cast<QScxmlStateMachineLoader *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QUrl*>(_v) = _t->source(); break;
        case 1: *reinterpret_cast< QScxmlStateMachine**>(_v) = _t->stateMachine(); break;
        case 2: *reinterpret_cast< QVariantMap*>(_v) = _t->initialValues(); break;
        case 3: *reinterpret_cast< QScxmlDataModel**>(_v) = _t->dataModel(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QScxmlStateMachineLoader *_t = static_cast<QScxmlStateMachineLoader *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setSource(*reinterpret_cast< QUrl*>(_v)); break;
        case 2: _t->setInitialValues(*reinterpret_cast< QVariantMap*>(_v)); break;
        case 3: _t->setDataModel(*reinterpret_cast< QScxmlDataModel**>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QScxmlStateMachineLoader::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QScxmlStateMachineLoader.data,
      qt_meta_data_QScxmlStateMachineLoader,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QScxmlStateMachineLoader::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QScxmlStateMachineLoader::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QScxmlStateMachineLoader.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QScxmlStateMachineLoader::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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

// SIGNAL 0
void QScxmlStateMachineLoader::sourceChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QScxmlStateMachineLoader::initialValuesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void QScxmlStateMachineLoader::stateMachineChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void QScxmlStateMachineLoader::dataModelChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
