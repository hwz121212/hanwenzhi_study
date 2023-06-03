/****************************************************************************
** Meta object code from reading C++ file 'satellite_interface.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../satellite_interface.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'satellite_interface.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_OrgFreedesktopGeoclueSatelliteInterface_t {
    QByteArrayData data[17];
    char stringdata0[317];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OrgFreedesktopGeoclueSatelliteInterface_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OrgFreedesktopGeoclueSatelliteInterface_t qt_meta_stringdata_OrgFreedesktopGeoclueSatelliteInterface = {
    {
QT_MOC_LITERAL(0, 0, 39), // "OrgFreedesktopGeoclueSatellit..."
QT_MOC_LITERAL(1, 40, 16), // "SatelliteChanged"
QT_MOC_LITERAL(2, 57, 0), // ""
QT_MOC_LITERAL(3, 58, 9), // "timestamp"
QT_MOC_LITERAL(4, 68, 13), // "satelliteUsed"
QT_MOC_LITERAL(5, 82, 16), // "satelliteVisible"
QT_MOC_LITERAL(6, 99, 13), // "QList<qint32>"
QT_MOC_LITERAL(7, 113, 7), // "usedPrn"
QT_MOC_LITERAL(8, 121, 24), // "QList<QGeoSatelliteInfo>"
QT_MOC_LITERAL(9, 146, 7), // "satInfo"
QT_MOC_LITERAL(10, 154, 16), // "GetLastSatellite"
QT_MOC_LITERAL(11, 171, 70), // "QDBusPendingReply<int,int,int..."
QT_MOC_LITERAL(12, 242, 15), // "QDBusReply<int>"
QT_MOC_LITERAL(13, 258, 4), // "int&"
QT_MOC_LITERAL(14, 263, 14), // "QList<qint32>&"
QT_MOC_LITERAL(15, 278, 25), // "QList<QGeoSatelliteInfo>&"
QT_MOC_LITERAL(16, 304, 12) // "GetSatellite"

    },
    "OrgFreedesktopGeoclueSatelliteInterface\0"
    "SatelliteChanged\0\0timestamp\0satelliteUsed\0"
    "satelliteVisible\0QList<qint32>\0usedPrn\0"
    "QList<QGeoSatelliteInfo>\0satInfo\0"
    "GetLastSatellite\0"
    "QDBusPendingReply<int,int,int,QList<qint32>,QList<QGeoSatelliteInfo> >\0"
    "QDBusReply<int>\0int&\0QList<qint32>&\0"
    "QList<QGeoSatelliteInfo>&\0GetSatellite"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OrgFreedesktopGeoclueSatelliteInterface[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    5,   39,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      10,    0,   50,    2, 0x0a /* Public */,
      10,    4,   51,    2, 0x0a /* Public */,
      16,    0,   60,    2, 0x0a /* Public */,
      16,    4,   61,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int, 0x80000000 | 6, 0x80000000 | 8,    3,    4,    5,    7,    9,

 // slots: parameters
    0x80000000 | 11,
    0x80000000 | 12, 0x80000000 | 13, 0x80000000 | 13, 0x80000000 | 14, 0x80000000 | 15,    4,    5,    7,    9,
    0x80000000 | 11,
    0x80000000 | 12, 0x80000000 | 13, 0x80000000 | 13, 0x80000000 | 14, 0x80000000 | 15,    4,    5,    7,    9,

       0        // eod
};

void OrgFreedesktopGeoclueSatelliteInterface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        OrgFreedesktopGeoclueSatelliteInterface *_t = static_cast<OrgFreedesktopGeoclueSatelliteInterface *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->SatelliteChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< const QList<qint32>(*)>(_a[4])),(*reinterpret_cast< const QList<QGeoSatelliteInfo>(*)>(_a[5]))); break;
        case 1: { QDBusPendingReply<int,int,int,QList<qint32>,QList<QGeoSatelliteInfo> > _r = _t->GetLastSatellite();
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<int,int,int,QList<qint32>,QList<QGeoSatelliteInfo> >*>(_a[0]) = std::move(_r); }  break;
        case 2: { QDBusReply<int> _r = _t->GetLastSatellite((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< QList<qint32>(*)>(_a[3])),(*reinterpret_cast< QList<QGeoSatelliteInfo>(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< QDBusReply<int>*>(_a[0]) = std::move(_r); }  break;
        case 3: { QDBusPendingReply<int,int,int,QList<qint32>,QList<QGeoSatelliteInfo> > _r = _t->GetSatellite();
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<int,int,int,QList<qint32>,QList<QGeoSatelliteInfo> >*>(_a[0]) = std::move(_r); }  break;
        case 4: { QDBusReply<int> _r = _t->GetSatellite((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< QList<qint32>(*)>(_a[3])),(*reinterpret_cast< QList<QGeoSatelliteInfo>(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< QDBusReply<int>*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 4:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<QGeoSatelliteInfo> >(); break;
            case 3:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<qint32> >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (OrgFreedesktopGeoclueSatelliteInterface::*_t)(int , int , int , const QList<qint32> & , const QList<QGeoSatelliteInfo> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OrgFreedesktopGeoclueSatelliteInterface::SatelliteChanged)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject OrgFreedesktopGeoclueSatelliteInterface::staticMetaObject = {
    { &QDBusAbstractInterface::staticMetaObject, qt_meta_stringdata_OrgFreedesktopGeoclueSatelliteInterface.data,
      qt_meta_data_OrgFreedesktopGeoclueSatelliteInterface,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *OrgFreedesktopGeoclueSatelliteInterface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OrgFreedesktopGeoclueSatelliteInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_OrgFreedesktopGeoclueSatelliteInterface.stringdata0))
        return static_cast<void*>(this);
    return QDBusAbstractInterface::qt_metacast(_clname);
}

int OrgFreedesktopGeoclueSatelliteInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDBusAbstractInterface::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void OrgFreedesktopGeoclueSatelliteInterface::SatelliteChanged(int _t1, int _t2, int _t3, const QList<qint32> & _t4, const QList<QGeoSatelliteInfo> & _t5)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
