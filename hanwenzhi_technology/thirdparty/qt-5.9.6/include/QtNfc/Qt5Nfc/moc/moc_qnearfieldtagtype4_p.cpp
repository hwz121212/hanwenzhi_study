/****************************************************************************
** Meta object code from reading C++ file 'qnearfieldtagtype4_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../5.9.6/QtNfc/private/qnearfieldtagtype4_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qnearfieldtagtype4_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QNearFieldTagType4_t {
    QByteArrayData data[1];
    char stringdata0[19];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QNearFieldTagType4_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QNearFieldTagType4_t qt_meta_stringdata_QNearFieldTagType4 = {
    {
QT_MOC_LITERAL(0, 0, 18) // "QNearFieldTagType4"

    },
    "QNearFieldTagType4"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QNearFieldTagType4[] = {

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

void QNearFieldTagType4::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject QNearFieldTagType4::staticMetaObject = {
    { &QNearFieldTarget::staticMetaObject, qt_meta_stringdata_QNearFieldTagType4.data,
      qt_meta_data_QNearFieldTagType4,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QNearFieldTagType4::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QNearFieldTagType4::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QNearFieldTagType4.stringdata0))
        return static_cast<void*>(this);
    return QNearFieldTarget::qt_metacast(_clname);
}

int QNearFieldTagType4::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QNearFieldTarget::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
