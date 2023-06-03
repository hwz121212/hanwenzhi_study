/****************************************************************************
** Meta object code from reading C++ file 'qaxscript.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../qaxscript.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qaxscript.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QAxScript_t {
    QByteArrayData data[14];
    char stringdata0[115];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QAxScript_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QAxScript_t qt_meta_stringdata_QAxScript = {
    {
QT_MOC_LITERAL(0, 0, 9), // "QAxScript"
QT_MOC_LITERAL(1, 10, 7), // "entered"
QT_MOC_LITERAL(2, 18, 0), // ""
QT_MOC_LITERAL(3, 19, 8), // "finished"
QT_MOC_LITERAL(4, 28, 6), // "result"
QT_MOC_LITERAL(5, 35, 4), // "code"
QT_MOC_LITERAL(6, 40, 6), // "source"
QT_MOC_LITERAL(7, 47, 11), // "description"
QT_MOC_LITERAL(8, 59, 4), // "help"
QT_MOC_LITERAL(9, 64, 12), // "stateChanged"
QT_MOC_LITERAL(10, 77, 5), // "state"
QT_MOC_LITERAL(11, 83, 5), // "error"
QT_MOC_LITERAL(12, 89, 14), // "sourcePosition"
QT_MOC_LITERAL(13, 104, 10) // "sourceText"

    },
    "QAxScript\0entered\0\0finished\0result\0"
    "code\0source\0description\0help\0stateChanged\0"
    "state\0error\0sourcePosition\0sourceText"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QAxScript[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x06 /* Public */,
       3,    0,   45,    2, 0x06 /* Public */,
       3,    1,   46,    2, 0x06 /* Public */,
       3,    4,   49,    2, 0x06 /* Public */,
       9,    1,   58,    2, 0x06 /* Public */,
      11,    4,   61,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QVariant,    4,
    QMetaType::Void, QMetaType::Int, QMetaType::QString, QMetaType::QString, QMetaType::QString,    5,    6,    7,    8,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void, QMetaType::Int, QMetaType::QString, QMetaType::Int, QMetaType::QString,    5,    7,   12,   13,

       0        // eod
};

void QAxScript::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QAxScript *_t = static_cast<QAxScript *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->entered(); break;
        case 1: _t->finished(); break;
        case 2: _t->finished((*reinterpret_cast< const QVariant(*)>(_a[1]))); break;
        case 3: _t->finished((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4]))); break;
        case 4: _t->stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->error((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QAxScript::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QAxScript::entered)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QAxScript::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QAxScript::finished)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QAxScript::*_t)(const QVariant & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QAxScript::finished)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (QAxScript::*_t)(int , const QString & , const QString & , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QAxScript::finished)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (QAxScript::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QAxScript::stateChanged)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (QAxScript::*_t)(int , const QString & , int , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QAxScript::error)) {
                *result = 5;
                return;
            }
        }
    }
}

const QMetaObject QAxScript::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QAxScript.data,
      qt_meta_data_QAxScript,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QAxScript::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QAxScript::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QAxScript.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QAxScript::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void QAxScript::entered()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QAxScript::finished()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void QAxScript::finished(const QVariant & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QAxScript::finished(int _t1, const QString & _t2, const QString & _t3, const QString & _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QAxScript::stateChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void QAxScript::error(int _t1, const QString & _t2, int _t3, const QString & _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
struct qt_meta_stringdata_QAxScriptManager_t {
    QByteArrayData data[12];
    char stringdata0[115];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QAxScriptManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QAxScriptManager_t qt_meta_stringdata_QAxScriptManager = {
    {
QT_MOC_LITERAL(0, 0, 16), // "QAxScriptManager"
QT_MOC_LITERAL(1, 17, 5), // "error"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 10), // "QAxScript*"
QT_MOC_LITERAL(4, 35, 6), // "script"
QT_MOC_LITERAL(5, 42, 4), // "code"
QT_MOC_LITERAL(6, 47, 11), // "description"
QT_MOC_LITERAL(7, 59, 14), // "sourcePosition"
QT_MOC_LITERAL(8, 74, 10), // "sourceText"
QT_MOC_LITERAL(9, 85, 15), // "objectDestroyed"
QT_MOC_LITERAL(10, 101, 1), // "o"
QT_MOC_LITERAL(11, 103, 11) // "scriptError"

    },
    "QAxScriptManager\0error\0\0QAxScript*\0"
    "script\0code\0description\0sourcePosition\0"
    "sourceText\0objectDestroyed\0o\0scriptError"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QAxScriptManager[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    5,   29,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    1,   40,    2, 0x08 /* Private */,
      11,    4,   43,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int, QMetaType::QString, QMetaType::Int, QMetaType::QString,    4,    5,    6,    7,    8,

 // slots: parameters
    QMetaType::Void, QMetaType::QObjectStar,   10,
    QMetaType::Void, QMetaType::Int, QMetaType::QString, QMetaType::Int, QMetaType::QString,    5,    6,    7,    8,

       0        // eod
};

void QAxScriptManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QAxScriptManager *_t = static_cast<QAxScriptManager *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->error((*reinterpret_cast< QAxScript*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< const QString(*)>(_a[5]))); break;
        case 1: _t->objectDestroyed((*reinterpret_cast< QObject*(*)>(_a[1]))); break;
        case 2: _t->scriptError((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAxScript* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QAxScriptManager::*_t)(QAxScript * , int , const QString & , int , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QAxScriptManager::error)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject QAxScriptManager::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QAxScriptManager.data,
      qt_meta_data_QAxScriptManager,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QAxScriptManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QAxScriptManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QAxScriptManager.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QAxScriptManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void QAxScriptManager::error(QAxScript * _t1, int _t2, const QString & _t3, int _t4, const QString & _t5)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
