/****************************************************************************
** Meta object code from reading C++ file 'qnearfieldtagtype1_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../5.9.6/QtNfc/private/qnearfieldtagtype1_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qnearfieldtagtype1_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QNearFieldTagType1_t {
    QByteArrayData data[4];
    char stringdata0[53];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QNearFieldTagType1_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QNearFieldTagType1_t qt_meta_stringdata_QNearFieldTagType1 = {
    {
QT_MOC_LITERAL(0, 0, 18), // "QNearFieldTagType1"
QT_MOC_LITERAL(1, 19, 9), // "WriteMode"
QT_MOC_LITERAL(2, 29, 13), // "EraseAndWrite"
QT_MOC_LITERAL(3, 43, 9) // "WriteOnly"

    },
    "QNearFieldTagType1\0WriteMode\0EraseAndWrite\0"
    "WriteOnly"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QNearFieldTagType1[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       1,   14, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // enums: name, flags, count, data
       1, 0x0,    2,   18,

 // enum data: key, value
       2, uint(QNearFieldTagType1::EraseAndWrite),
       3, uint(QNearFieldTagType1::WriteOnly),

       0        // eod
};

void QNearFieldTagType1::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject QNearFieldTagType1::staticMetaObject = {
    { &QNearFieldTarget::staticMetaObject, qt_meta_stringdata_QNearFieldTagType1.data,
      qt_meta_data_QNearFieldTagType1,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QNearFieldTagType1::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QNearFieldTagType1::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QNearFieldTagType1.stringdata0))
        return static_cast<void*>(this);
    return QNearFieldTarget::qt_metacast(_clname);
}

int QNearFieldTagType1::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QNearFieldTarget::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
