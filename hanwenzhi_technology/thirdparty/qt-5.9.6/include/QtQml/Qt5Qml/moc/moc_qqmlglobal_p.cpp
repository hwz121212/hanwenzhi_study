/****************************************************************************
** Meta object code from reading C++ file 'qqmlglobal_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../5.9.6/QtQml/private/qqmlglobal_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qqmlglobal_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QQmlApplication_t {
    QByteArrayData data[17];
    char stringdata0[182];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QQmlApplication_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QQmlApplication_t qt_meta_stringdata_QQmlApplication = {
    {
QT_MOC_LITERAL(0, 0, 15), // "QQmlApplication"
QT_MOC_LITERAL(1, 16, 11), // "aboutToQuit"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 11), // "nameChanged"
QT_MOC_LITERAL(4, 41, 14), // "versionChanged"
QT_MOC_LITERAL(5, 56, 19), // "organizationChanged"
QT_MOC_LITERAL(6, 76, 13), // "domainChanged"
QT_MOC_LITERAL(7, 90, 7), // "setName"
QT_MOC_LITERAL(8, 98, 3), // "arg"
QT_MOC_LITERAL(9, 102, 10), // "setVersion"
QT_MOC_LITERAL(10, 113, 15), // "setOrganization"
QT_MOC_LITERAL(11, 129, 9), // "setDomain"
QT_MOC_LITERAL(12, 139, 9), // "arguments"
QT_MOC_LITERAL(13, 149, 4), // "name"
QT_MOC_LITERAL(14, 154, 7), // "version"
QT_MOC_LITERAL(15, 162, 12), // "organization"
QT_MOC_LITERAL(16, 175, 6) // "domain"

    },
    "QQmlApplication\0aboutToQuit\0\0nameChanged\0"
    "versionChanged\0organizationChanged\0"
    "domainChanged\0setName\0arg\0setVersion\0"
    "setOrganization\0setDomain\0arguments\0"
    "name\0version\0organization\0domain"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QQmlApplication[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       5,   76, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x06 /* Public */,
       3,    0,   60,    2, 0x06 /* Public */,
       4,    0,   61,    2, 0x06 /* Public */,
       5,    0,   62,    2, 0x06 /* Public */,
       6,    0,   63,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    1,   64,    2, 0x0a /* Public */,
       9,    1,   67,    2, 0x0a /* Public */,
      10,    1,   70,    2, 0x0a /* Public */,
      11,    1,   73,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void, QMetaType::QString,    8,

 // properties: name, type, flags
      12, QMetaType::QStringList, 0x00095401,
      13, QMetaType::QString, 0x00495103,
      14, QMetaType::QString, 0x00495103,
      15, QMetaType::QString, 0x00495103,
      16, QMetaType::QString, 0x00495103,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,
       4,

       0        // eod
};

void QQmlApplication::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QQmlApplication *_t = static_cast<QQmlApplication *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->aboutToQuit(); break;
        case 1: _t->nameChanged(); break;
        case 2: _t->versionChanged(); break;
        case 3: _t->organizationChanged(); break;
        case 4: _t->domainChanged(); break;
        case 5: _t->setName((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->setVersion((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->setOrganization((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 8: _t->setDomain((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QQmlApplication::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQmlApplication::aboutToQuit)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QQmlApplication::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQmlApplication::nameChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QQmlApplication::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQmlApplication::versionChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (QQmlApplication::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQmlApplication::organizationChanged)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (QQmlApplication::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQmlApplication::domainChanged)) {
                *result = 4;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QQmlApplication *_t = static_cast<QQmlApplication *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QStringList*>(_v) = _t->args(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->name(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->version(); break;
        case 3: *reinterpret_cast< QString*>(_v) = _t->organization(); break;
        case 4: *reinterpret_cast< QString*>(_v) = _t->domain(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QQmlApplication *_t = static_cast<QQmlApplication *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 1: _t->setName(*reinterpret_cast< QString*>(_v)); break;
        case 2: _t->setVersion(*reinterpret_cast< QString*>(_v)); break;
        case 3: _t->setOrganization(*reinterpret_cast< QString*>(_v)); break;
        case 4: _t->setDomain(*reinterpret_cast< QString*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QQmlApplication::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QQmlApplication.data,
      qt_meta_data_QQmlApplication,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QQmlApplication::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QQmlApplication::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QQmlApplication.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QQmlApplication::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
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
void QQmlApplication::aboutToQuit()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QQmlApplication::nameChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void QQmlApplication::versionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void QQmlApplication::organizationChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void QQmlApplication::domainChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
