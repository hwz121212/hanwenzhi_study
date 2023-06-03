/****************************************************************************
** Meta object code from reading C++ file 'qplaceidreplyimpl.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../placesv2/qplaceidreplyimpl.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qplaceidreplyimpl.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QPlaceIdReplyImpl_t {
    QByteArrayData data[6];
    char stringdata0[66];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QPlaceIdReplyImpl_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QPlaceIdReplyImpl_t qt_meta_stringdata_QPlaceIdReplyImpl = {
    {
QT_MOC_LITERAL(0, 0, 17), // "QPlaceIdReplyImpl"
QT_MOC_LITERAL(1, 18, 8), // "setError"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 18), // "QPlaceReply::Error"
QT_MOC_LITERAL(4, 47, 6), // "error_"
QT_MOC_LITERAL(5, 54, 11) // "errorString"

    },
    "QPlaceIdReplyImpl\0setError\0\0"
    "QPlaceReply::Error\0error_\0errorString"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QPlaceIdReplyImpl[] = {

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
       1,    2,   19,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::QString,    4,    5,

       0        // eod
};

void QPlaceIdReplyImpl::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QPlaceIdReplyImpl *_t = static_cast<QPlaceIdReplyImpl *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->setError((*reinterpret_cast< QPlaceReply::Error(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QPlaceReply::Error >(); break;
            }
            break;
        }
    }
}

const QMetaObject QPlaceIdReplyImpl::staticMetaObject = {
    { &QPlaceIdReply::staticMetaObject, qt_meta_stringdata_QPlaceIdReplyImpl.data,
      qt_meta_data_QPlaceIdReplyImpl,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QPlaceIdReplyImpl::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QPlaceIdReplyImpl::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QPlaceIdReplyImpl.stringdata0))
        return static_cast<void*>(this);
    return QPlaceIdReply::qt_metacast(_clname);
}

int QPlaceIdReplyImpl::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QPlaceIdReply::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
