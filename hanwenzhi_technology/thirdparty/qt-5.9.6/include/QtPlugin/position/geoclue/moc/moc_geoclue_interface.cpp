/****************************************************************************
** Meta object code from reading C++ file 'geoclue_interface.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../geoclue_interface.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'geoclue_interface.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_OrgFreedesktopGeoclueInterface_t {
    QByteArrayData data[16];
    char stringdata0[246];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OrgFreedesktopGeoclueInterface_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OrgFreedesktopGeoclueInterface_t qt_meta_stringdata_OrgFreedesktopGeoclueInterface = {
    {
QT_MOC_LITERAL(0, 0, 30), // "OrgFreedesktopGeoclueInterface"
QT_MOC_LITERAL(1, 31, 13), // "StatusChanged"
QT_MOC_LITERAL(2, 45, 0), // ""
QT_MOC_LITERAL(3, 46, 6), // "status"
QT_MOC_LITERAL(4, 53, 12), // "AddReference"
QT_MOC_LITERAL(5, 66, 19), // "QDBusPendingReply<>"
QT_MOC_LITERAL(6, 86, 15), // "GetProviderInfo"
QT_MOC_LITERAL(7, 102, 34), // "QDBusPendingReply<QString,QSt..."
QT_MOC_LITERAL(8, 137, 19), // "QDBusReply<QString>"
QT_MOC_LITERAL(9, 157, 8), // "QString&"
QT_MOC_LITERAL(10, 166, 11), // "description"
QT_MOC_LITERAL(11, 178, 9), // "GetStatus"
QT_MOC_LITERAL(12, 188, 22), // "QDBusPendingReply<int>"
QT_MOC_LITERAL(13, 211, 15), // "RemoveReference"
QT_MOC_LITERAL(14, 227, 10), // "SetOptions"
QT_MOC_LITERAL(15, 238, 7) // "options"

    },
    "OrgFreedesktopGeoclueInterface\0"
    "StatusChanged\0\0status\0AddReference\0"
    "QDBusPendingReply<>\0GetProviderInfo\0"
    "QDBusPendingReply<QString,QString>\0"
    "QDBusReply<QString>\0QString&\0description\0"
    "GetStatus\0QDBusPendingReply<int>\0"
    "RemoveReference\0SetOptions\0options"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OrgFreedesktopGeoclueInterface[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   49,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   52,    2, 0x0a /* Public */,
       6,    0,   53,    2, 0x0a /* Public */,
       6,    1,   54,    2, 0x0a /* Public */,
      11,    0,   57,    2, 0x0a /* Public */,
      13,    0,   58,    2, 0x0a /* Public */,
      14,    1,   59,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,

 // slots: parameters
    0x80000000 | 5,
    0x80000000 | 7,
    0x80000000 | 8, 0x80000000 | 9,   10,
    0x80000000 | 12,
    0x80000000 | 5,
    0x80000000 | 5, QMetaType::QVariantMap,   15,

       0        // eod
};

void OrgFreedesktopGeoclueInterface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        OrgFreedesktopGeoclueInterface *_t = static_cast<OrgFreedesktopGeoclueInterface *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->StatusChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: { QDBusPendingReply<> _r = _t->AddReference();
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<>*>(_a[0]) = std::move(_r); }  break;
        case 2: { QDBusPendingReply<QString,QString> _r = _t->GetProviderInfo();
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<QString,QString>*>(_a[0]) = std::move(_r); }  break;
        case 3: { QDBusReply<QString> _r = _t->GetProviderInfo((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDBusReply<QString>*>(_a[0]) = std::move(_r); }  break;
        case 4: { QDBusPendingReply<int> _r = _t->GetStatus();
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<int>*>(_a[0]) = std::move(_r); }  break;
        case 5: { QDBusPendingReply<> _r = _t->RemoveReference();
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<>*>(_a[0]) = std::move(_r); }  break;
        case 6: { QDBusPendingReply<> _r = _t->SetOptions((*reinterpret_cast< const QVariantMap(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<>*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (OrgFreedesktopGeoclueInterface::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OrgFreedesktopGeoclueInterface::StatusChanged)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject OrgFreedesktopGeoclueInterface::staticMetaObject = {
    { &QDBusAbstractInterface::staticMetaObject, qt_meta_stringdata_OrgFreedesktopGeoclueInterface.data,
      qt_meta_data_OrgFreedesktopGeoclueInterface,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *OrgFreedesktopGeoclueInterface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OrgFreedesktopGeoclueInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_OrgFreedesktopGeoclueInterface.stringdata0))
        return static_cast<void*>(this);
    return QDBusAbstractInterface::qt_metacast(_clname);
}

int OrgFreedesktopGeoclueInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDBusAbstractInterface::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void OrgFreedesktopGeoclueInterface::StatusChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
