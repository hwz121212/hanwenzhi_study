/****************************************************************************
** Meta object code from reading C++ file 'qwebengineurlrequestjob.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../qwebengineurlrequestjob.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qwebengineurlrequestjob.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QWebEngineUrlRequestJob_t {
    QByteArrayData data[8];
    char stringdata0[104];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QWebEngineUrlRequestJob_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QWebEngineUrlRequestJob_t qt_meta_stringdata_QWebEngineUrlRequestJob = {
    {
QT_MOC_LITERAL(0, 0, 23), // "QWebEngineUrlRequestJob"
QT_MOC_LITERAL(1, 24, 5), // "Error"
QT_MOC_LITERAL(2, 30, 7), // "NoError"
QT_MOC_LITERAL(3, 38, 11), // "UrlNotFound"
QT_MOC_LITERAL(4, 50, 10), // "UrlInvalid"
QT_MOC_LITERAL(5, 61, 14), // "RequestAborted"
QT_MOC_LITERAL(6, 76, 13), // "RequestDenied"
QT_MOC_LITERAL(7, 90, 13) // "RequestFailed"

    },
    "QWebEngineUrlRequestJob\0Error\0NoError\0"
    "UrlNotFound\0UrlInvalid\0RequestAborted\0"
    "RequestDenied\0RequestFailed"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QWebEngineUrlRequestJob[] = {

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
       1, 0x0,    6,   18,

 // enum data: key, value
       2, uint(QWebEngineUrlRequestJob::NoError),
       3, uint(QWebEngineUrlRequestJob::UrlNotFound),
       4, uint(QWebEngineUrlRequestJob::UrlInvalid),
       5, uint(QWebEngineUrlRequestJob::RequestAborted),
       6, uint(QWebEngineUrlRequestJob::RequestDenied),
       7, uint(QWebEngineUrlRequestJob::RequestFailed),

       0        // eod
};

void QWebEngineUrlRequestJob::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject QWebEngineUrlRequestJob::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QWebEngineUrlRequestJob.data,
      qt_meta_data_QWebEngineUrlRequestJob,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QWebEngineUrlRequestJob::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QWebEngineUrlRequestJob::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QWebEngineUrlRequestJob.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QWebEngineUrlRequestJob::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
