/****************************************************************************
** Meta object code from reading C++ file 'qwindowsdialoghelpers.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../qwindowsdialoghelpers.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qwindowsdialoghelpers.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QWindowsNativeDialogBase_t {
    QByteArrayData data[5];
    char stringdata0[50];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QWindowsNativeDialogBase_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QWindowsNativeDialogBase_t qt_meta_stringdata_QWindowsNativeDialogBase = {
    {
QT_MOC_LITERAL(0, 0, 24), // "QWindowsNativeDialogBase"
QT_MOC_LITERAL(1, 25, 8), // "accepted"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 8), // "rejected"
QT_MOC_LITERAL(4, 44, 5) // "close"

    },
    "QWindowsNativeDialogBase\0accepted\0\0"
    "rejected\0close"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QWindowsNativeDialogBase[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x06 /* Public */,
       3,    0,   30,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   31,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void QWindowsNativeDialogBase::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QWindowsNativeDialogBase *_t = static_cast<QWindowsNativeDialogBase *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->accepted(); break;
        case 1: _t->rejected(); break;
        case 2: _t->close(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QWindowsNativeDialogBase::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QWindowsNativeDialogBase::accepted)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QWindowsNativeDialogBase::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QWindowsNativeDialogBase::rejected)) {
                *result = 1;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject QWindowsNativeDialogBase::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QWindowsNativeDialogBase.data,
      qt_meta_data_QWindowsNativeDialogBase,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QWindowsNativeDialogBase::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QWindowsNativeDialogBase::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QWindowsNativeDialogBase.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QWindowsNativeDialogBase::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void QWindowsNativeDialogBase::accepted()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QWindowsNativeDialogBase::rejected()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
struct qt_meta_stringdata_QWindowsNativeFileDialogBase_t {
    QByteArrayData data[10];
    char stringdata0[124];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QWindowsNativeFileDialogBase_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QWindowsNativeFileDialogBase_t qt_meta_stringdata_QWindowsNativeFileDialogBase = {
    {
QT_MOC_LITERAL(0, 0, 28), // "QWindowsNativeFileDialogBase"
QT_MOC_LITERAL(1, 29, 16), // "directoryEntered"
QT_MOC_LITERAL(2, 46, 0), // ""
QT_MOC_LITERAL(3, 47, 9), // "directory"
QT_MOC_LITERAL(4, 57, 14), // "currentChanged"
QT_MOC_LITERAL(5, 72, 4), // "file"
QT_MOC_LITERAL(6, 77, 14), // "filterSelected"
QT_MOC_LITERAL(7, 92, 6), // "filter"
QT_MOC_LITERAL(8, 99, 5), // "close"
QT_MOC_LITERAL(9, 105, 18) // "hideFiltersDetails"

    },
    "QWindowsNativeFileDialogBase\0"
    "directoryEntered\0\0directory\0currentChanged\0"
    "file\0filterSelected\0filter\0close\0"
    "hideFiltersDetails"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QWindowsNativeFileDialogBase[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       1,   44, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06 /* Public */,
       4,    1,   37,    2, 0x06 /* Public */,
       6,    1,   40,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    0,   43,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QUrl,    3,
    QMetaType::Void, QMetaType::QUrl,    5,
    QMetaType::Void, QMetaType::QString,    7,

 // slots: parameters
    QMetaType::Void,

 // properties: name, type, flags
       9, QMetaType::Bool, 0x00095103,

       0        // eod
};

void QWindowsNativeFileDialogBase::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QWindowsNativeFileDialogBase *_t = static_cast<QWindowsNativeFileDialogBase *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->directoryEntered((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 1: _t->currentChanged((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 2: _t->filterSelected((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->close(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QWindowsNativeFileDialogBase::*_t)(const QUrl & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QWindowsNativeFileDialogBase::directoryEntered)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QWindowsNativeFileDialogBase::*_t)(const QUrl & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QWindowsNativeFileDialogBase::currentChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QWindowsNativeFileDialogBase::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QWindowsNativeFileDialogBase::filterSelected)) {
                *result = 2;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QWindowsNativeFileDialogBase *_t = static_cast<QWindowsNativeFileDialogBase *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->hideFiltersDetails(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QWindowsNativeFileDialogBase *_t = static_cast<QWindowsNativeFileDialogBase *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setHideFiltersDetails(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QWindowsNativeFileDialogBase::staticMetaObject = {
    { &QWindowsNativeDialogBase::staticMetaObject, qt_meta_stringdata_QWindowsNativeFileDialogBase.data,
      qt_meta_data_QWindowsNativeFileDialogBase,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QWindowsNativeFileDialogBase::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QWindowsNativeFileDialogBase::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QWindowsNativeFileDialogBase.stringdata0))
        return static_cast<void*>(this);
    return QWindowsNativeDialogBase::qt_metacast(_clname);
}

int QWindowsNativeFileDialogBase::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWindowsNativeDialogBase::qt_metacall(_c, _id, _a);
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
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 1;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QWindowsNativeFileDialogBase::directoryEntered(const QUrl & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QWindowsNativeFileDialogBase::currentChanged(const QUrl & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QWindowsNativeFileDialogBase::filterSelected(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
struct qt_meta_stringdata_QWindowsNativeSaveFileDialog_t {
    QByteArrayData data[1];
    char stringdata0[29];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QWindowsNativeSaveFileDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QWindowsNativeSaveFileDialog_t qt_meta_stringdata_QWindowsNativeSaveFileDialog = {
    {
QT_MOC_LITERAL(0, 0, 28) // "QWindowsNativeSaveFileDialog"

    },
    "QWindowsNativeSaveFileDialog"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QWindowsNativeSaveFileDialog[] = {

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

void QWindowsNativeSaveFileDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject QWindowsNativeSaveFileDialog::staticMetaObject = {
    { &QWindowsNativeFileDialogBase::staticMetaObject, qt_meta_stringdata_QWindowsNativeSaveFileDialog.data,
      qt_meta_data_QWindowsNativeSaveFileDialog,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QWindowsNativeSaveFileDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QWindowsNativeSaveFileDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QWindowsNativeSaveFileDialog.stringdata0))
        return static_cast<void*>(this);
    return QWindowsNativeFileDialogBase::qt_metacast(_clname);
}

int QWindowsNativeSaveFileDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWindowsNativeFileDialogBase::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_QWindowsXpNativeFileDialog_t {
    QByteArrayData data[3];
    char stringdata0[34];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QWindowsXpNativeFileDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QWindowsXpNativeFileDialog_t qt_meta_stringdata_QWindowsXpNativeFileDialog = {
    {
QT_MOC_LITERAL(0, 0, 26), // "QWindowsXpNativeFileDialog"
QT_MOC_LITERAL(1, 27, 5), // "close"
QT_MOC_LITERAL(2, 33, 0) // ""

    },
    "QWindowsXpNativeFileDialog\0close\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QWindowsXpNativeFileDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void QWindowsXpNativeFileDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QWindowsXpNativeFileDialog *_t = static_cast<QWindowsXpNativeFileDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->close(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject QWindowsXpNativeFileDialog::staticMetaObject = {
    { &QWindowsNativeDialogBase::staticMetaObject, qt_meta_stringdata_QWindowsXpNativeFileDialog.data,
      qt_meta_data_QWindowsXpNativeFileDialog,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QWindowsXpNativeFileDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QWindowsXpNativeFileDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QWindowsXpNativeFileDialog.stringdata0))
        return static_cast<void*>(this);
    return QWindowsNativeDialogBase::qt_metacast(_clname);
}

int QWindowsXpNativeFileDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWindowsNativeDialogBase::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
