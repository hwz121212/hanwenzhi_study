/****************************************************************************
** Meta object code from reading C++ file 'position_interface.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../position_interface.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'position_interface.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_OrgFreedesktopGeocluePositionInterface_t {
    QByteArrayData data[16];
    char stringdata0[227];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OrgFreedesktopGeocluePositionInterface_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OrgFreedesktopGeocluePositionInterface_t qt_meta_stringdata_OrgFreedesktopGeocluePositionInterface = {
    {
QT_MOC_LITERAL(0, 0, 38), // "OrgFreedesktopGeocluePosition..."
QT_MOC_LITERAL(1, 39, 15), // "PositionChanged"
QT_MOC_LITERAL(2, 55, 0), // ""
QT_MOC_LITERAL(3, 56, 6), // "fields"
QT_MOC_LITERAL(4, 63, 9), // "timestamp"
QT_MOC_LITERAL(5, 73, 8), // "latitude"
QT_MOC_LITERAL(6, 82, 9), // "longitude"
QT_MOC_LITERAL(7, 92, 8), // "altitude"
QT_MOC_LITERAL(8, 101, 8), // "Accuracy"
QT_MOC_LITERAL(9, 110, 8), // "accuracy"
QT_MOC_LITERAL(10, 119, 11), // "GetPosition"
QT_MOC_LITERAL(11, 131, 56), // "QDBusPendingReply<int,int,dou..."
QT_MOC_LITERAL(12, 188, 15), // "QDBusReply<int>"
QT_MOC_LITERAL(13, 204, 4), // "int&"
QT_MOC_LITERAL(14, 209, 7), // "double&"
QT_MOC_LITERAL(15, 217, 9) // "Accuracy&"

    },
    "OrgFreedesktopGeocluePositionInterface\0"
    "PositionChanged\0\0fields\0timestamp\0"
    "latitude\0longitude\0altitude\0Accuracy\0"
    "accuracy\0GetPosition\0"
    "QDBusPendingReply<int,int,double,double,double,Accuracy>\0"
    "QDBusReply<int>\0int&\0double&\0Accuracy&"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OrgFreedesktopGeocluePositionInterface[] = {

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
       1,    6,   29,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      10,    0,   42,    2, 0x0a /* Public */,
      10,    5,   43,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Double, QMetaType::Double, QMetaType::Double, 0x80000000 | 8,    3,    4,    5,    6,    7,    9,

 // slots: parameters
    0x80000000 | 11,
    0x80000000 | 12, 0x80000000 | 13, 0x80000000 | 14, 0x80000000 | 14, 0x80000000 | 14, 0x80000000 | 15,    4,    5,    6,    7,    9,

       0        // eod
};

void OrgFreedesktopGeocluePositionInterface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        OrgFreedesktopGeocluePositionInterface *_t = static_cast<OrgFreedesktopGeocluePositionInterface *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->PositionChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4])),(*reinterpret_cast< double(*)>(_a[5])),(*reinterpret_cast< Accuracy(*)>(_a[6]))); break;
        case 1: { QDBusPendingReply<int,int,double,double,double,Accuracy> _r = _t->GetPosition();
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<int,int,double,double,double,Accuracy>*>(_a[0]) = std::move(_r); }  break;
        case 2: { QDBusReply<int> _r = _t->GetPosition((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4])),(*reinterpret_cast< Accuracy(*)>(_a[5])));
            if (_a[0]) *reinterpret_cast< QDBusReply<int>*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 5:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Accuracy >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (OrgFreedesktopGeocluePositionInterface::*_t)(int , int , double , double , double , Accuracy );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OrgFreedesktopGeocluePositionInterface::PositionChanged)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject OrgFreedesktopGeocluePositionInterface::staticMetaObject = {
    { &QDBusAbstractInterface::staticMetaObject, qt_meta_stringdata_OrgFreedesktopGeocluePositionInterface.data,
      qt_meta_data_OrgFreedesktopGeocluePositionInterface,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *OrgFreedesktopGeocluePositionInterface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OrgFreedesktopGeocluePositionInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_OrgFreedesktopGeocluePositionInterface.stringdata0))
        return static_cast<void*>(this);
    return QDBusAbstractInterface::qt_metacast(_clname);
}

int OrgFreedesktopGeocluePositionInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDBusAbstractInterface::qt_metacall(_c, _id, _a);
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
void OrgFreedesktopGeocluePositionInterface::PositionChanged(int _t1, int _t2, double _t3, double _t4, double _t5, Accuracy _t6)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)), const_cast<void*>(reinterpret_cast<const void*>(&_t6)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
