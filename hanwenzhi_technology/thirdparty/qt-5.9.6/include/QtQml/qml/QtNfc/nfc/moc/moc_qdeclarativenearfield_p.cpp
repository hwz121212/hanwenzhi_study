/****************************************************************************
** Meta object code from reading C++ file 'qdeclarativenearfield_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../qdeclarativenearfield_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qdeclarativenearfield_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QDeclarativeNearField_t {
    QByteArrayData data[20];
    char stringdata0[331];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QDeclarativeNearField_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QDeclarativeNearField_t qt_meta_stringdata_QDeclarativeNearField = {
    {
QT_MOC_LITERAL(0, 0, 21), // "QDeclarativeNearField"
QT_MOC_LITERAL(1, 22, 21), // "messageRecordsChanged"
QT_MOC_LITERAL(2, 44, 0), // ""
QT_MOC_LITERAL(3, 45, 13), // "filterChanged"
QT_MOC_LITERAL(4, 59, 17), // "orderMatchChanged"
QT_MOC_LITERAL(5, 77, 14), // "pollingChanged"
QT_MOC_LITERAL(6, 92, 8), // "tagFound"
QT_MOC_LITERAL(7, 101, 10), // "tagRemoved"
QT_MOC_LITERAL(8, 112, 20), // "_q_handleNdefMessage"
QT_MOC_LITERAL(9, 133, 12), // "QNdefMessage"
QT_MOC_LITERAL(10, 146, 7), // "message"
QT_MOC_LITERAL(11, 154, 19), // "_q_handleTargetLost"
QT_MOC_LITERAL(12, 174, 17), // "QNearFieldTarget*"
QT_MOC_LITERAL(13, 192, 23), // "_q_handleTargetDetected"
QT_MOC_LITERAL(14, 216, 14), // "messageRecords"
QT_MOC_LITERAL(15, 231, 32), // "QQmlListProperty<QQmlNdefRecord>"
QT_MOC_LITERAL(16, 264, 6), // "filter"
QT_MOC_LITERAL(17, 271, 40), // "QQmlListProperty<QDeclarative..."
QT_MOC_LITERAL(18, 312, 10), // "orderMatch"
QT_MOC_LITERAL(19, 323, 7) // "polling"

    },
    "QDeclarativeNearField\0messageRecordsChanged\0"
    "\0filterChanged\0orderMatchChanged\0"
    "pollingChanged\0tagFound\0tagRemoved\0"
    "_q_handleNdefMessage\0QNdefMessage\0"
    "message\0_q_handleTargetLost\0"
    "QNearFieldTarget*\0_q_handleTargetDetected\0"
    "messageRecords\0QQmlListProperty<QQmlNdefRecord>\0"
    "filter\0QQmlListProperty<QDeclarativeNdefFilter>\0"
    "orderMatch\0polling"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QDeclarativeNearField[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       4,   83, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   68,    2, 0x06 /* Public */,
       3,    0,   69,    2, 0x06 /* Public */,
       4,    0,   70,    2, 0x06 /* Public */,
       5,    0,   71,    2, 0x86 /* Public | MethodRevisioned */,
       6,    0,   72,    2, 0x86 /* Public | MethodRevisioned */,
       7,    0,   73,    2, 0x86 /* Public | MethodRevisioned */,

 // slots: name, argc, parameters, tag, flags
       8,    1,   74,    2, 0x08 /* Private */,
      11,    1,   77,    2, 0x08 /* Private */,
      13,    1,   80,    2, 0x08 /* Private */,

 // signals: revision
       0,
       0,
       0,
       1,
       1,
       1,

 // slots: revision
       0,
       0,
       0,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, 0x80000000 | 12,    2,
    QMetaType::Void, 0x80000000 | 12,    2,

 // properties: name, type, flags
      14, 0x80000000 | 15, 0x00495009,
      16, 0x80000000 | 17, 0x00495009,
      18, QMetaType::Bool, 0x00495103,
      19, QMetaType::Bool, 0x00c95103,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,

 // properties: revision
       0,
       0,
       0,
       1,

       0        // eod
};

void QDeclarativeNearField::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QDeclarativeNearField *_t = static_cast<QDeclarativeNearField *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->messageRecordsChanged(); break;
        case 1: _t->filterChanged(); break;
        case 2: _t->orderMatchChanged(); break;
        case 3: _t->pollingChanged(); break;
        case 4: _t->tagFound(); break;
        case 5: _t->tagRemoved(); break;
        case 6: _t->_q_handleNdefMessage((*reinterpret_cast< const QNdefMessage(*)>(_a[1]))); break;
        case 7: _t->_q_handleTargetLost((*reinterpret_cast< QNearFieldTarget*(*)>(_a[1]))); break;
        case 8: _t->_q_handleTargetDetected((*reinterpret_cast< QNearFieldTarget*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNearFieldTarget* >(); break;
            }
            break;
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNearFieldTarget* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QDeclarativeNearField::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QDeclarativeNearField::messageRecordsChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QDeclarativeNearField::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QDeclarativeNearField::filterChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QDeclarativeNearField::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QDeclarativeNearField::orderMatchChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (QDeclarativeNearField::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QDeclarativeNearField::pollingChanged)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (QDeclarativeNearField::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QDeclarativeNearField::tagFound)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (QDeclarativeNearField::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QDeclarativeNearField::tagRemoved)) {
                *result = 5;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QDeclarativeNearField *_t = static_cast<QDeclarativeNearField *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QQmlListProperty<QQmlNdefRecord>*>(_v) = _t->messageRecords(); break;
        case 1: *reinterpret_cast< QQmlListProperty<QDeclarativeNdefFilter>*>(_v) = _t->filter(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->orderMatch(); break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->polling(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QDeclarativeNearField *_t = static_cast<QDeclarativeNearField *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 2: _t->setOrderMatch(*reinterpret_cast< bool*>(_v)); break;
        case 3: _t->setPolling(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QDeclarativeNearField::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QDeclarativeNearField.data,
      qt_meta_data_QDeclarativeNearField,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QDeclarativeNearField::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QDeclarativeNearField::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QDeclarativeNearField.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "QQmlParserStatus"))
        return static_cast< QQmlParserStatus*>(this);
    if (!strcmp(_clname, "org.qt-project.Qt.QQmlParserStatus"))
        return static_cast< QQmlParserStatus*>(this);
    return QObject::qt_metacast(_clname);
}

int QDeclarativeNearField::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
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
void QDeclarativeNearField::messageRecordsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QDeclarativeNearField::filterChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void QDeclarativeNearField::orderMatchChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void QDeclarativeNearField::pollingChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void QDeclarativeNearField::tagFound()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void QDeclarativeNearField::tagRemoved()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
