/****************************************************************************
** Meta object code from reading C++ file 'masterclient_interface.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../masterclient_interface.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'masterclient_interface.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_OrgFreedesktopGeoclueMasterClientInterface_t {
    QByteArrayData data[21];
    char stringdata0[354];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OrgFreedesktopGeoclueMasterClientInterface_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OrgFreedesktopGeoclueMasterClientInterface_t qt_meta_stringdata_OrgFreedesktopGeoclueMasterClientInterface = {
    {
QT_MOC_LITERAL(0, 0, 42), // "OrgFreedesktopGeoclueMasterCl..."
QT_MOC_LITERAL(1, 43, 22), // "AddressProviderChanged"
QT_MOC_LITERAL(2, 66, 0), // ""
QT_MOC_LITERAL(3, 67, 4), // "name"
QT_MOC_LITERAL(4, 72, 11), // "description"
QT_MOC_LITERAL(5, 84, 7), // "service"
QT_MOC_LITERAL(6, 92, 4), // "path"
QT_MOC_LITERAL(7, 97, 23), // "PositionProviderChanged"
QT_MOC_LITERAL(8, 121, 12), // "AddressStart"
QT_MOC_LITERAL(9, 134, 19), // "QDBusPendingReply<>"
QT_MOC_LITERAL(10, 154, 18), // "GetAddressProvider"
QT_MOC_LITERAL(11, 173, 50), // "QDBusPendingReply<QString,QSt..."
QT_MOC_LITERAL(12, 224, 19), // "QDBusReply<QString>"
QT_MOC_LITERAL(13, 244, 8), // "QString&"
QT_MOC_LITERAL(14, 253, 19), // "GetPositionProvider"
QT_MOC_LITERAL(15, 273, 13), // "PositionStart"
QT_MOC_LITERAL(16, 287, 15), // "SetRequirements"
QT_MOC_LITERAL(17, 303, 13), // "accuracyLevel"
QT_MOC_LITERAL(18, 317, 4), // "time"
QT_MOC_LITERAL(19, 322, 14), // "requireUpdates"
QT_MOC_LITERAL(20, 337, 16) // "allowedResources"

    },
    "OrgFreedesktopGeoclueMasterClientInterface\0"
    "AddressProviderChanged\0\0name\0description\0"
    "service\0path\0PositionProviderChanged\0"
    "AddressStart\0QDBusPendingReply<>\0"
    "GetAddressProvider\0"
    "QDBusPendingReply<QString,QString,QString,QString>\0"
    "QDBusReply<QString>\0QString&\0"
    "GetPositionProvider\0PositionStart\0"
    "SetRequirements\0accuracyLevel\0time\0"
    "requireUpdates\0allowedResources"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OrgFreedesktopGeoclueMasterClientInterface[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    4,   59,    2, 0x06 /* Public */,
       7,    4,   68,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    0,   77,    2, 0x0a /* Public */,
      10,    0,   78,    2, 0x0a /* Public */,
      10,    3,   79,    2, 0x0a /* Public */,
      14,    0,   86,    2, 0x0a /* Public */,
      14,    3,   87,    2, 0x0a /* Public */,
      15,    0,   94,    2, 0x0a /* Public */,
      16,    4,   95,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString,    3,    4,    5,    6,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString,    3,    4,    5,    6,

 // slots: parameters
    0x80000000 | 9,
    0x80000000 | 11,
    0x80000000 | 12, 0x80000000 | 13, 0x80000000 | 13, 0x80000000 | 13,    4,    5,    6,
    0x80000000 | 11,
    0x80000000 | 12, 0x80000000 | 13, 0x80000000 | 13, 0x80000000 | 13,    4,    5,    6,
    0x80000000 | 9,
    0x80000000 | 9, QMetaType::Int, QMetaType::Int, QMetaType::Bool, QMetaType::Int,   17,   18,   19,   20,

       0        // eod
};

void OrgFreedesktopGeoclueMasterClientInterface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        OrgFreedesktopGeoclueMasterClientInterface *_t = static_cast<OrgFreedesktopGeoclueMasterClientInterface *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->AddressProviderChanged((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4]))); break;
        case 1: _t->PositionProviderChanged((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4]))); break;
        case 2: { QDBusPendingReply<> _r = _t->AddressStart();
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<>*>(_a[0]) = std::move(_r); }  break;
        case 3: { QDBusPendingReply<QString,QString,QString,QString> _r = _t->GetAddressProvider();
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<QString,QString,QString,QString>*>(_a[0]) = std::move(_r); }  break;
        case 4: { QDBusReply<QString> _r = _t->GetAddressProvider((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QDBusReply<QString>*>(_a[0]) = std::move(_r); }  break;
        case 5: { QDBusPendingReply<QString,QString,QString,QString> _r = _t->GetPositionProvider();
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<QString,QString,QString,QString>*>(_a[0]) = std::move(_r); }  break;
        case 6: { QDBusReply<QString> _r = _t->GetPositionProvider((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QDBusReply<QString>*>(_a[0]) = std::move(_r); }  break;
        case 7: { QDBusPendingReply<> _r = _t->PositionStart();
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<>*>(_a[0]) = std::move(_r); }  break;
        case 8: { QDBusPendingReply<> _r = _t->SetRequirements((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<>*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (OrgFreedesktopGeoclueMasterClientInterface::*_t)(const QString & , const QString & , const QString & , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OrgFreedesktopGeoclueMasterClientInterface::AddressProviderChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (OrgFreedesktopGeoclueMasterClientInterface::*_t)(const QString & , const QString & , const QString & , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OrgFreedesktopGeoclueMasterClientInterface::PositionProviderChanged)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject OrgFreedesktopGeoclueMasterClientInterface::staticMetaObject = {
    { &QDBusAbstractInterface::staticMetaObject, qt_meta_stringdata_OrgFreedesktopGeoclueMasterClientInterface.data,
      qt_meta_data_OrgFreedesktopGeoclueMasterClientInterface,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *OrgFreedesktopGeoclueMasterClientInterface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OrgFreedesktopGeoclueMasterClientInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_OrgFreedesktopGeoclueMasterClientInterface.stringdata0))
        return static_cast<void*>(this);
    return QDBusAbstractInterface::qt_metacast(_clname);
}

int OrgFreedesktopGeoclueMasterClientInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDBusAbstractInterface::qt_metacall(_c, _id, _a);
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
    return _id;
}

// SIGNAL 0
void OrgFreedesktopGeoclueMasterClientInterface::AddressProviderChanged(const QString & _t1, const QString & _t2, const QString & _t3, const QString & _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void OrgFreedesktopGeoclueMasterClientInterface::PositionProviderChanged(const QString & _t1, const QString & _t2, const QString & _t3, const QString & _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
