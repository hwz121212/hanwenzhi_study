/****************************************************************************
** Meta object code from reading C++ file 'qquickdialogbuttonbox_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../5.9.6/QtQuickTemplates2/private/qquickdialogbuttonbox_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qquickdialogbuttonbox_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QQuickDialogButtonBox_t {
    QByteArrayData data[24];
    char stringdata0[352];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QQuickDialogButtonBox_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QQuickDialogButtonBox_t qt_meta_stringdata_QQuickDialogButtonBox = {
    {
QT_MOC_LITERAL(0, 0, 21), // "QQuickDialogButtonBox"
QT_MOC_LITERAL(1, 22, 8), // "accepted"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 8), // "rejected"
QT_MOC_LITERAL(4, 41, 13), // "helpRequested"
QT_MOC_LITERAL(5, 55, 7), // "clicked"
QT_MOC_LITERAL(6, 63, 21), // "QQuickAbstractButton*"
QT_MOC_LITERAL(7, 85, 6), // "button"
QT_MOC_LITERAL(8, 92, 15), // "positionChanged"
QT_MOC_LITERAL(9, 108, 16), // "alignmentChanged"
QT_MOC_LITERAL(10, 125, 22), // "standardButtonsChanged"
QT_MOC_LITERAL(11, 148, 15), // "delegateChanged"
QT_MOC_LITERAL(12, 164, 14), // "standardButton"
QT_MOC_LITERAL(13, 179, 37), // "QPlatformDialogHelper::Standa..."
QT_MOC_LITERAL(14, 217, 8), // "position"
QT_MOC_LITERAL(15, 226, 8), // "Position"
QT_MOC_LITERAL(16, 235, 9), // "alignment"
QT_MOC_LITERAL(17, 245, 13), // "Qt::Alignment"
QT_MOC_LITERAL(18, 259, 15), // "standardButtons"
QT_MOC_LITERAL(19, 275, 38), // "QPlatformDialogHelper::Standa..."
QT_MOC_LITERAL(20, 314, 8), // "delegate"
QT_MOC_LITERAL(21, 323, 14), // "QQmlComponent*"
QT_MOC_LITERAL(22, 338, 6), // "Header"
QT_MOC_LITERAL(23, 345, 6) // "Footer"

    },
    "QQuickDialogButtonBox\0accepted\0\0"
    "rejected\0helpRequested\0clicked\0"
    "QQuickAbstractButton*\0button\0"
    "positionChanged\0alignmentChanged\0"
    "standardButtonsChanged\0delegateChanged\0"
    "standardButton\0QPlatformDialogHelper::StandardButton\0"
    "position\0Position\0alignment\0Qt::Alignment\0"
    "standardButtons\0QPlatformDialogHelper::StandardButtons\0"
    "delegate\0QQmlComponent*\0Header\0Footer"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QQuickDialogButtonBox[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       4,   72, // properties
       1,   88, // enums/sets
       0,    0, // constructors
       0,       // flags
       8,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x06 /* Public */,
       3,    0,   60,    2, 0x06 /* Public */,
       4,    0,   61,    2, 0x06 /* Public */,
       5,    1,   62,    2, 0x06 /* Public */,
       8,    0,   65,    2, 0x06 /* Public */,
       9,    0,   66,    2, 0x06 /* Public */,
      10,    0,   67,    2, 0x06 /* Public */,
      11,    0,   68,    2, 0x06 /* Public */,

 // methods: name, argc, parameters, tag, flags
      12,    1,   69,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // methods: parameters
    0x80000000 | 6, 0x80000000 | 13,    7,

 // properties: name, type, flags
      14, 0x80000000 | 15, 0x0049590b,
      16, 0x80000000 | 17, 0x0049590f,
      18, 0x80000000 | 19, 0x0049590b,
      20, 0x80000000 | 21, 0x0049590b,

 // properties: notify_signal_id
       4,
       5,
       6,
       7,

 // enums: name, flags, count, data
      15, 0x0,    2,   92,

 // enum data: key, value
      22, uint(QQuickDialogButtonBox::Header),
      23, uint(QQuickDialogButtonBox::Footer),

       0        // eod
};

void QQuickDialogButtonBox::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QQuickDialogButtonBox *_t = static_cast<QQuickDialogButtonBox *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->accepted(); break;
        case 1: _t->rejected(); break;
        case 2: _t->helpRequested(); break;
        case 3: _t->clicked((*reinterpret_cast< QQuickAbstractButton*(*)>(_a[1]))); break;
        case 4: _t->positionChanged(); break;
        case 5: _t->alignmentChanged(); break;
        case 6: _t->standardButtonsChanged(); break;
        case 7: _t->delegateChanged(); break;
        case 8: { QQuickAbstractButton* _r = _t->standardButton((*reinterpret_cast< QPlatformDialogHelper::StandardButton(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QQuickAbstractButton**>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QPlatformDialogHelper::StandardButton >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QQuickDialogButtonBox::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickDialogButtonBox::accepted)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QQuickDialogButtonBox::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickDialogButtonBox::rejected)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QQuickDialogButtonBox::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickDialogButtonBox::helpRequested)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (QQuickDialogButtonBox::*_t)(QQuickAbstractButton * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickDialogButtonBox::clicked)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (QQuickDialogButtonBox::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickDialogButtonBox::positionChanged)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (QQuickDialogButtonBox::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickDialogButtonBox::alignmentChanged)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (QQuickDialogButtonBox::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickDialogButtonBox::standardButtonsChanged)) {
                *result = 6;
                return;
            }
        }
        {
            typedef void (QQuickDialogButtonBox::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickDialogButtonBox::delegateChanged)) {
                *result = 7;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 3:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QQmlComponent* >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QQuickDialogButtonBox *_t = static_cast<QQuickDialogButtonBox *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< Position*>(_v) = _t->position(); break;
        case 1: *reinterpret_cast< Qt::Alignment*>(_v) = _t->alignment(); break;
        case 2: *reinterpret_cast<int*>(_v) = QFlag(_t->standardButtons()); break;
        case 3: *reinterpret_cast< QQmlComponent**>(_v) = _t->delegate(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QQuickDialogButtonBox *_t = static_cast<QQuickDialogButtonBox *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setPosition(*reinterpret_cast< Position*>(_v)); break;
        case 1: _t->setAlignment(*reinterpret_cast< Qt::Alignment*>(_v)); break;
        case 2: _t->setStandardButtons(QFlag(*reinterpret_cast<int*>(_v))); break;
        case 3: _t->setDelegate(*reinterpret_cast< QQmlComponent**>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
        QQuickDialogButtonBox *_t = static_cast<QQuickDialogButtonBox *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 1: _t->resetAlignment(); break;
        default: break;
        }
    }
#endif // QT_NO_PROPERTIES
}

static const QMetaObject * const qt_meta_extradata_QQuickDialogButtonBox[] = {
        &QPlatformDialogHelper::staticMetaObject,
    nullptr
};

const QMetaObject QQuickDialogButtonBox::staticMetaObject = {
    { &QQuickContainer::staticMetaObject, qt_meta_stringdata_QQuickDialogButtonBox.data,
      qt_meta_data_QQuickDialogButtonBox,  qt_static_metacall, qt_meta_extradata_QQuickDialogButtonBox, nullptr}
};


const QMetaObject *QQuickDialogButtonBox::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QQuickDialogButtonBox::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QQuickDialogButtonBox.stringdata0))
        return static_cast<void*>(this);
    return QQuickContainer::qt_metacast(_clname);
}

int QQuickDialogButtonBox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QQuickContainer::qt_metacall(_c, _id, _a);
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
void QQuickDialogButtonBox::accepted()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QQuickDialogButtonBox::rejected()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void QQuickDialogButtonBox::helpRequested()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void QQuickDialogButtonBox::clicked(QQuickAbstractButton * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QQuickDialogButtonBox::positionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void QQuickDialogButtonBox::alignmentChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void QQuickDialogButtonBox::standardButtonsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void QQuickDialogButtonBox::delegateChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}
struct qt_meta_stringdata_QQuickDialogButtonBoxAttached_t {
    QByteArrayData data[8];
    char stringdata0[144];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QQuickDialogButtonBoxAttached_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QQuickDialogButtonBoxAttached_t qt_meta_stringdata_QQuickDialogButtonBoxAttached = {
    {
QT_MOC_LITERAL(0, 0, 29), // "QQuickDialogButtonBoxAttached"
QT_MOC_LITERAL(1, 30, 16), // "buttonBoxChanged"
QT_MOC_LITERAL(2, 47, 0), // ""
QT_MOC_LITERAL(3, 48, 17), // "buttonRoleChanged"
QT_MOC_LITERAL(4, 66, 9), // "buttonBox"
QT_MOC_LITERAL(5, 76, 22), // "QQuickDialogButtonBox*"
QT_MOC_LITERAL(6, 99, 10), // "buttonRole"
QT_MOC_LITERAL(7, 110, 33) // "QPlatformDialogHelper::Button..."

    },
    "QQuickDialogButtonBoxAttached\0"
    "buttonBoxChanged\0\0buttonRoleChanged\0"
    "buttonBox\0QQuickDialogButtonBox*\0"
    "buttonRole\0QPlatformDialogHelper::ButtonRole"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QQuickDialogButtonBoxAttached[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       2,   26, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   24,    2, 0x06 /* Public */,
       3,    0,   25,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
       4, 0x80000000 | 5, 0x00495809,
       6, 0x80000000 | 7, 0x0049590b,

 // properties: notify_signal_id
       0,
       1,

 // enums: name, flags, count, data

 // enum data: key, value

       0        // eod
};

void QQuickDialogButtonBoxAttached::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QQuickDialogButtonBoxAttached *_t = static_cast<QQuickDialogButtonBoxAttached *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->buttonBoxChanged(); break;
        case 1: _t->buttonRoleChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QQuickDialogButtonBoxAttached::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickDialogButtonBoxAttached::buttonBoxChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QQuickDialogButtonBoxAttached::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickDialogButtonBoxAttached::buttonRoleChanged)) {
                *result = 1;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QPlatformDialogHelper::ButtonRole >(); break;
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QQuickDialogButtonBox* >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QQuickDialogButtonBoxAttached *_t = static_cast<QQuickDialogButtonBoxAttached *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QQuickDialogButtonBox**>(_v) = _t->buttonBox(); break;
        case 1: *reinterpret_cast< QPlatformDialogHelper::ButtonRole*>(_v) = _t->buttonRole(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QQuickDialogButtonBoxAttached *_t = static_cast<QQuickDialogButtonBoxAttached *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 1: _t->setButtonRole(*reinterpret_cast< QPlatformDialogHelper::ButtonRole*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

static const QMetaObject * const qt_meta_extradata_QQuickDialogButtonBoxAttached[] = {
        &QPlatformDialogHelper::staticMetaObject,
    nullptr
};

const QMetaObject QQuickDialogButtonBoxAttached::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QQuickDialogButtonBoxAttached.data,
      qt_meta_data_QQuickDialogButtonBoxAttached,  qt_static_metacall, qt_meta_extradata_QQuickDialogButtonBoxAttached, nullptr}
};


const QMetaObject *QQuickDialogButtonBoxAttached::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QQuickDialogButtonBoxAttached::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QQuickDialogButtonBoxAttached.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QQuickDialogButtonBoxAttached::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void QQuickDialogButtonBoxAttached::buttonBoxChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QQuickDialogButtonBoxAttached::buttonRoleChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
