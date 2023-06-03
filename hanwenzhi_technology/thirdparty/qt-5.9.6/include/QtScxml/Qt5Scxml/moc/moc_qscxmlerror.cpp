/****************************************************************************
** Meta object code from reading C++ file 'qscxmlerror.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../qscxmlerror.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qscxmlerror.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QScxmlError_t {
    QByteArrayData data[6];
    char stringdata0[51];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QScxmlError_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QScxmlError_t qt_meta_stringdata_QScxmlError = {
    {
QT_MOC_LITERAL(0, 0, 11), // "QScxmlError"
QT_MOC_LITERAL(1, 12, 5), // "valid"
QT_MOC_LITERAL(2, 18, 8), // "fileName"
QT_MOC_LITERAL(3, 27, 4), // "line"
QT_MOC_LITERAL(4, 32, 6), // "column"
QT_MOC_LITERAL(5, 39, 11) // "description"

    },
    "QScxmlError\0valid\0fileName\0line\0column\0"
    "description"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QScxmlError[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       5,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       4,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, QMetaType::Bool, 0x00095401,
       2, QMetaType::QString, 0x00095401,
       3, QMetaType::Int, 0x00095401,
       4, QMetaType::Int, 0x00095401,
       5, QMetaType::QString, 0x00095401,

       0        // eod
};

void QScxmlError::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{

#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty) {
        QScxmlError *_t = reinterpret_cast<QScxmlError *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->isValid(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->fileName(); break;
        case 2: *reinterpret_cast< int*>(_v) = _t->line(); break;
        case 3: *reinterpret_cast< int*>(_v) = _t->column(); break;
        case 4: *reinterpret_cast< QString*>(_v) = _t->description(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject QScxmlError::staticMetaObject = {
    { nullptr, qt_meta_stringdata_QScxmlError.data,
      qt_meta_data_QScxmlError,  qt_static_metacall, nullptr, nullptr}
};

QT_WARNING_POP
QT_END_MOC_NAMESPACE
