/****************************************************************************
** Meta object code from reading C++ file 'qquicklinearlayout_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../qquicklinearlayout_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qquicklinearlayout_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QQuickGridLayoutBase_t {
    QByteArrayData data[5];
    char stringdata0[81];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QQuickGridLayoutBase_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QQuickGridLayoutBase_t qt_meta_stringdata_QQuickGridLayoutBase = {
    {
QT_MOC_LITERAL(0, 0, 20), // "QQuickGridLayoutBase"
QT_MOC_LITERAL(1, 21, 22), // "layoutDirectionChanged"
QT_MOC_LITERAL(2, 44, 0), // ""
QT_MOC_LITERAL(3, 45, 15), // "layoutDirection"
QT_MOC_LITERAL(4, 61, 19) // "Qt::LayoutDirection"

    },
    "QQuickGridLayoutBase\0layoutDirectionChanged\0"
    "\0layoutDirection\0Qt::LayoutDirection"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QQuickGridLayoutBase[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       1,   21, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   20,    2, 0x86 /* Public | MethodRevisioned */,

 // signals: revision
       1,

 // signals: parameters
    QMetaType::Void,

 // properties: name, type, flags
       3, 0x80000000 | 4, 0x00c9510b,

 // properties: notify_signal_id
       0,

 // properties: revision
       1,

       0        // eod
};

void QQuickGridLayoutBase::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QQuickGridLayoutBase *_t = static_cast<QQuickGridLayoutBase *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->layoutDirectionChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QQuickGridLayoutBase::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickGridLayoutBase::layoutDirectionChanged)) {
                *result = 0;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QQuickGridLayoutBase *_t = static_cast<QQuickGridLayoutBase *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< Qt::LayoutDirection*>(_v) = _t->layoutDirection(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QQuickGridLayoutBase *_t = static_cast<QQuickGridLayoutBase *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setLayoutDirection(*reinterpret_cast< Qt::LayoutDirection*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_a);
}

const QMetaObject QQuickGridLayoutBase::staticMetaObject = {
    { &QQuickLayout::staticMetaObject, qt_meta_stringdata_QQuickGridLayoutBase.data,
      qt_meta_data_QQuickGridLayoutBase,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QQuickGridLayoutBase::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QQuickGridLayoutBase::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QQuickGridLayoutBase.stringdata0))
        return static_cast<void*>(this);
    return QQuickLayout::qt_metacast(_clname);
}

int QQuickGridLayoutBase::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QQuickLayout::qt_metacall(_c, _id, _a);
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
void QQuickGridLayoutBase::layoutDirectionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
struct qt_meta_stringdata_QQuickGridLayout_t {
    QByteArrayData data[15];
    char stringdata0[168];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QQuickGridLayout_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QQuickGridLayout_t qt_meta_stringdata_QQuickGridLayout = {
    {
QT_MOC_LITERAL(0, 0, 16), // "QQuickGridLayout"
QT_MOC_LITERAL(1, 17, 20), // "columnSpacingChanged"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 17), // "rowSpacingChanged"
QT_MOC_LITERAL(4, 57, 14), // "columnsChanged"
QT_MOC_LITERAL(5, 72, 11), // "rowsChanged"
QT_MOC_LITERAL(6, 84, 11), // "flowChanged"
QT_MOC_LITERAL(7, 96, 13), // "columnSpacing"
QT_MOC_LITERAL(8, 110, 10), // "rowSpacing"
QT_MOC_LITERAL(9, 121, 7), // "columns"
QT_MOC_LITERAL(10, 129, 4), // "rows"
QT_MOC_LITERAL(11, 134, 4), // "flow"
QT_MOC_LITERAL(12, 139, 4), // "Flow"
QT_MOC_LITERAL(13, 144, 11), // "LeftToRight"
QT_MOC_LITERAL(14, 156, 11) // "TopToBottom"

    },
    "QQuickGridLayout\0columnSpacingChanged\0"
    "\0rowSpacingChanged\0columnsChanged\0"
    "rowsChanged\0flowChanged\0columnSpacing\0"
    "rowSpacing\0columns\0rows\0flow\0Flow\0"
    "LeftToRight\0TopToBottom"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QQuickGridLayout[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       5,   44, // properties
       1,   64, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x06 /* Public */,
       3,    0,   40,    2, 0x06 /* Public */,
       4,    0,   41,    2, 0x06 /* Public */,
       5,    0,   42,    2, 0x06 /* Public */,
       6,    0,   43,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
       7, QMetaType::QReal, 0x00495103,
       8, QMetaType::QReal, 0x00495103,
       9, QMetaType::Int, 0x00495103,
      10, QMetaType::Int, 0x00495103,
      11, 0x80000000 | 12, 0x0049510b,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,
       4,

 // enums: name, flags, count, data
      12, 0x0,    2,   68,

 // enum data: key, value
      13, uint(QQuickGridLayout::LeftToRight),
      14, uint(QQuickGridLayout::TopToBottom),

       0        // eod
};

void QQuickGridLayout::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QQuickGridLayout *_t = static_cast<QQuickGridLayout *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->columnSpacingChanged(); break;
        case 1: _t->rowSpacingChanged(); break;
        case 2: _t->columnsChanged(); break;
        case 3: _t->rowsChanged(); break;
        case 4: _t->flowChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QQuickGridLayout::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickGridLayout::columnSpacingChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QQuickGridLayout::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickGridLayout::rowSpacingChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QQuickGridLayout::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickGridLayout::columnsChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (QQuickGridLayout::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickGridLayout::rowsChanged)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (QQuickGridLayout::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickGridLayout::flowChanged)) {
                *result = 4;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QQuickGridLayout *_t = static_cast<QQuickGridLayout *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< qreal*>(_v) = _t->columnSpacing(); break;
        case 1: *reinterpret_cast< qreal*>(_v) = _t->rowSpacing(); break;
        case 2: *reinterpret_cast< int*>(_v) = _t->columns(); break;
        case 3: *reinterpret_cast< int*>(_v) = _t->rows(); break;
        case 4: *reinterpret_cast< Flow*>(_v) = _t->flow(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QQuickGridLayout *_t = static_cast<QQuickGridLayout *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setColumnSpacing(*reinterpret_cast< qreal*>(_v)); break;
        case 1: _t->setRowSpacing(*reinterpret_cast< qreal*>(_v)); break;
        case 2: _t->setColumns(*reinterpret_cast< int*>(_v)); break;
        case 3: _t->setRows(*reinterpret_cast< int*>(_v)); break;
        case 4: _t->setFlow(*reinterpret_cast< Flow*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_a);
}

const QMetaObject QQuickGridLayout::staticMetaObject = {
    { &QQuickGridLayoutBase::staticMetaObject, qt_meta_stringdata_QQuickGridLayout.data,
      qt_meta_data_QQuickGridLayout,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QQuickGridLayout::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QQuickGridLayout::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QQuickGridLayout.stringdata0))
        return static_cast<void*>(this);
    return QQuickGridLayoutBase::qt_metacast(_clname);
}

int QQuickGridLayout::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QQuickGridLayoutBase::qt_metacall(_c, _id, _a);
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
void QQuickGridLayout::columnSpacingChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QQuickGridLayout::rowSpacingChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void QQuickGridLayout::columnsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void QQuickGridLayout::rowsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void QQuickGridLayout::flowChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}
struct qt_meta_stringdata_QQuickLinearLayout_t {
    QByteArrayData data[4];
    char stringdata0[43];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QQuickLinearLayout_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QQuickLinearLayout_t qt_meta_stringdata_QQuickLinearLayout = {
    {
QT_MOC_LITERAL(0, 0, 18), // "QQuickLinearLayout"
QT_MOC_LITERAL(1, 19, 14), // "spacingChanged"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 7) // "spacing"

    },
    "QQuickLinearLayout\0spacingChanged\0\0"
    "spacing"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QQuickLinearLayout[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       1,   20, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,

 // properties: name, type, flags
       3, QMetaType::QReal, 0x00495103,

 // properties: notify_signal_id
       0,

       0        // eod
};

void QQuickLinearLayout::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QQuickLinearLayout *_t = static_cast<QQuickLinearLayout *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->spacingChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QQuickLinearLayout::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickLinearLayout::spacingChanged)) {
                *result = 0;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QQuickLinearLayout *_t = static_cast<QQuickLinearLayout *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< qreal*>(_v) = _t->spacing(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QQuickLinearLayout *_t = static_cast<QQuickLinearLayout *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setSpacing(*reinterpret_cast< qreal*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_a);
}

const QMetaObject QQuickLinearLayout::staticMetaObject = {
    { &QQuickGridLayoutBase::staticMetaObject, qt_meta_stringdata_QQuickLinearLayout.data,
      qt_meta_data_QQuickLinearLayout,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QQuickLinearLayout::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QQuickLinearLayout::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QQuickLinearLayout.stringdata0))
        return static_cast<void*>(this);
    return QQuickGridLayoutBase::qt_metacast(_clname);
}

int QQuickLinearLayout::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QQuickGridLayoutBase::qt_metacall(_c, _id, _a);
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
void QQuickLinearLayout::spacingChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
struct qt_meta_stringdata_QQuickRowLayout_t {
    QByteArrayData data[1];
    char stringdata0[16];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QQuickRowLayout_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QQuickRowLayout_t qt_meta_stringdata_QQuickRowLayout = {
    {
QT_MOC_LITERAL(0, 0, 15) // "QQuickRowLayout"

    },
    "QQuickRowLayout"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QQuickRowLayout[] = {

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

void QQuickRowLayout::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject QQuickRowLayout::staticMetaObject = {
    { &QQuickLinearLayout::staticMetaObject, qt_meta_stringdata_QQuickRowLayout.data,
      qt_meta_data_QQuickRowLayout,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QQuickRowLayout::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QQuickRowLayout::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QQuickRowLayout.stringdata0))
        return static_cast<void*>(this);
    return QQuickLinearLayout::qt_metacast(_clname);
}

int QQuickRowLayout::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QQuickLinearLayout::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_QQuickColumnLayout_t {
    QByteArrayData data[1];
    char stringdata0[19];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QQuickColumnLayout_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QQuickColumnLayout_t qt_meta_stringdata_QQuickColumnLayout = {
    {
QT_MOC_LITERAL(0, 0, 18) // "QQuickColumnLayout"

    },
    "QQuickColumnLayout"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QQuickColumnLayout[] = {

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

void QQuickColumnLayout::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject QQuickColumnLayout::staticMetaObject = {
    { &QQuickLinearLayout::staticMetaObject, qt_meta_stringdata_QQuickColumnLayout.data,
      qt_meta_data_QQuickColumnLayout,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QQuickColumnLayout::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QQuickColumnLayout::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QQuickColumnLayout.stringdata0))
        return static_cast<void*>(this);
    return QQuickLinearLayout::qt_metacast(_clname);
}

int QQuickColumnLayout::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QQuickLinearLayout::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
