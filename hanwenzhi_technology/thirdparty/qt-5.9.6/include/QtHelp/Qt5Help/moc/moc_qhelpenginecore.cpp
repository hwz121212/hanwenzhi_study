/****************************************************************************
** Meta object code from reading C++ file 'qhelpenginecore.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../qhelpenginecore.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qhelpenginecore.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QHelpEngineCore_t {
    QByteArrayData data[12];
    char stringdata0[159];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QHelpEngineCore_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QHelpEngineCore_t qt_meta_stringdata_QHelpEngineCore = {
    {
QT_MOC_LITERAL(0, 0, 15), // "QHelpEngineCore"
QT_MOC_LITERAL(1, 16, 12), // "setupStarted"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 13), // "setupFinished"
QT_MOC_LITERAL(4, 44, 20), // "currentFilterChanged"
QT_MOC_LITERAL(5, 65, 9), // "newFilter"
QT_MOC_LITERAL(6, 75, 7), // "warning"
QT_MOC_LITERAL(7, 83, 3), // "msg"
QT_MOC_LITERAL(8, 87, 27), // "readersAboutToBeInvalidated"
QT_MOC_LITERAL(9, 115, 14), // "autoSaveFilter"
QT_MOC_LITERAL(10, 130, 14), // "collectionFile"
QT_MOC_LITERAL(11, 145, 13) // "currentFilter"

    },
    "QHelpEngineCore\0setupStarted\0\0"
    "setupFinished\0currentFilterChanged\0"
    "newFilter\0warning\0msg\0readersAboutToBeInvalidated\0"
    "autoSaveFilter\0collectionFile\0"
    "currentFilter"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QHelpEngineCore[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       3,   48, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x06 /* Public */,
       3,    0,   40,    2, 0x06 /* Public */,
       4,    1,   41,    2, 0x06 /* Public */,
       6,    1,   44,    2, 0x06 /* Public */,
       8,    0,   47,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void,

 // properties: name, type, flags
       9, QMetaType::Bool, 0x00095103,
      10, QMetaType::QString, 0x00095103,
      11, QMetaType::QString, 0x00095103,

       0        // eod
};

void QHelpEngineCore::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QHelpEngineCore *_t = static_cast<QHelpEngineCore *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->setupStarted(); break;
        case 1: _t->setupFinished(); break;
        case 2: _t->currentFilterChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->warning((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->readersAboutToBeInvalidated(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QHelpEngineCore::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QHelpEngineCore::setupStarted)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QHelpEngineCore::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QHelpEngineCore::setupFinished)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QHelpEngineCore::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QHelpEngineCore::currentFilterChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (QHelpEngineCore::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QHelpEngineCore::warning)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (QHelpEngineCore::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QHelpEngineCore::readersAboutToBeInvalidated)) {
                *result = 4;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QHelpEngineCore *_t = static_cast<QHelpEngineCore *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->autoSaveFilter(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->collectionFile(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->currentFilter(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QHelpEngineCore *_t = static_cast<QHelpEngineCore *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setAutoSaveFilter(*reinterpret_cast< bool*>(_v)); break;
        case 1: _t->setCollectionFile(*reinterpret_cast< QString*>(_v)); break;
        case 2: _t->setCurrentFilter(*reinterpret_cast< QString*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QHelpEngineCore::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QHelpEngineCore.data,
      qt_meta_data_QHelpEngineCore,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QHelpEngineCore::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QHelpEngineCore::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QHelpEngineCore.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QHelpEngineCore::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
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
void QHelpEngineCore::setupStarted()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QHelpEngineCore::setupFinished()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void QHelpEngineCore::currentFilterChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QHelpEngineCore::warning(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QHelpEngineCore::readersAboutToBeInvalidated()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
