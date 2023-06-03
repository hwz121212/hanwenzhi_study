/****************************************************************************
** Meta object code from reading C++ file 'helpenginewrapper.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../helpenginewrapper.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'helpenginewrapper.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_HelpEngineWrapper_t {
    QByteArrayData data[10];
    char stringdata0[158];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_HelpEngineWrapper_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_HelpEngineWrapper_t qt_meta_stringdata_HelpEngineWrapper = {
    {
QT_MOC_LITERAL(0, 0, 17), // "HelpEngineWrapper"
QT_MOC_LITERAL(1, 18, 20), // "documentationRemoved"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 13), // "namespaceName"
QT_MOC_LITERAL(4, 54, 20), // "documentationUpdated"
QT_MOC_LITERAL(5, 75, 20), // "currentFilterChanged"
QT_MOC_LITERAL(6, 96, 13), // "currentFilter"
QT_MOC_LITERAL(7, 110, 13), // "setupFinished"
QT_MOC_LITERAL(8, 124, 26), // "handleCurrentFilterChanged"
QT_MOC_LITERAL(9, 151, 6) // "filter"

    },
    "HelpEngineWrapper\0documentationRemoved\0"
    "\0namespaceName\0documentationUpdated\0"
    "currentFilterChanged\0currentFilter\0"
    "setupFinished\0handleCurrentFilterChanged\0"
    "filter"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_HelpEngineWrapper[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x06 /* Public */,
       4,    1,   42,    2, 0x06 /* Public */,
       5,    1,   45,    2, 0x06 /* Public */,
       7,    0,   48,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    1,   49,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    9,

       0        // eod
};

void HelpEngineWrapper::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        HelpEngineWrapper *_t = static_cast<HelpEngineWrapper *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->documentationRemoved((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->documentationUpdated((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->currentFilterChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->setupFinished(); break;
        case 4: _t->handleCurrentFilterChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (HelpEngineWrapper::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HelpEngineWrapper::documentationRemoved)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (HelpEngineWrapper::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HelpEngineWrapper::documentationUpdated)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (HelpEngineWrapper::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HelpEngineWrapper::currentFilterChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (HelpEngineWrapper::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HelpEngineWrapper::setupFinished)) {
                *result = 3;
                return;
            }
        }
    }
}

const QMetaObject HelpEngineWrapper::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_HelpEngineWrapper.data,
      qt_meta_data_HelpEngineWrapper,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *HelpEngineWrapper::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *HelpEngineWrapper::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_HelpEngineWrapper.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int HelpEngineWrapper::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
    return _id;
}

// SIGNAL 0
void HelpEngineWrapper::documentationRemoved(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void HelpEngineWrapper::documentationUpdated(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void HelpEngineWrapper::currentFilterChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void HelpEngineWrapper::setupFinished()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
