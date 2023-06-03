/****************************************************************************
** Meta object code from reading C++ file 'qdeclarativendeffilter_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../qdeclarativendeffilter_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qdeclarativendeffilter_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QDeclarativeNdefFilter_t {
    QByteArrayData data[11];
    char stringdata0[155];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QDeclarativeNdefFilter_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QDeclarativeNdefFilter_t qt_meta_stringdata_QDeclarativeNdefFilter = {
    {
QT_MOC_LITERAL(0, 0, 22), // "QDeclarativeNdefFilter"
QT_MOC_LITERAL(1, 23, 11), // "typeChanged"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 14), // "minimumChanged"
QT_MOC_LITERAL(4, 51, 14), // "maximumChanged"
QT_MOC_LITERAL(5, 66, 21), // "typeNameFormatChanged"
QT_MOC_LITERAL(6, 88, 4), // "type"
QT_MOC_LITERAL(7, 93, 14), // "typeNameFormat"
QT_MOC_LITERAL(8, 108, 30), // "QQmlNdefRecord::TypeNameFormat"
QT_MOC_LITERAL(9, 139, 7), // "minimum"
QT_MOC_LITERAL(10, 147, 7) // "maximum"

    },
    "QDeclarativeNdefFilter\0typeChanged\0\0"
    "minimumChanged\0maximumChanged\0"
    "typeNameFormatChanged\0type\0typeNameFormat\0"
    "QQmlNdefRecord::TypeNameFormat\0minimum\0"
    "maximum"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QDeclarativeNdefFilter[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       4,   38, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x06 /* Public */,
       3,    0,   35,    2, 0x06 /* Public */,
       4,    0,   36,    2, 0x06 /* Public */,
       5,    0,   37,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
       6, QMetaType::QString, 0x00495103,
       7, 0x80000000 | 8, 0x0049510b,
       9, QMetaType::Int, 0x00495103,
      10, QMetaType::Int, 0x00495103,

 // properties: notify_signal_id
       0,
       3,
       1,
       2,

       0        // eod
};

void QDeclarativeNdefFilter::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QDeclarativeNdefFilter *_t = static_cast<QDeclarativeNdefFilter *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->typeChanged(); break;
        case 1: _t->minimumChanged(); break;
        case 2: _t->maximumChanged(); break;
        case 3: _t->typeNameFormatChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QDeclarativeNdefFilter::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QDeclarativeNdefFilter::typeChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QDeclarativeNdefFilter::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QDeclarativeNdefFilter::minimumChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QDeclarativeNdefFilter::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QDeclarativeNdefFilter::maximumChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (QDeclarativeNdefFilter::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QDeclarativeNdefFilter::typeNameFormatChanged)) {
                *result = 3;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QDeclarativeNdefFilter *_t = static_cast<QDeclarativeNdefFilter *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->type(); break;
        case 1: *reinterpret_cast< QQmlNdefRecord::TypeNameFormat*>(_v) = _t->typeNameFormat(); break;
        case 2: *reinterpret_cast< int*>(_v) = _t->minimum(); break;
        case 3: *reinterpret_cast< int*>(_v) = _t->maximum(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QDeclarativeNdefFilter *_t = static_cast<QDeclarativeNdefFilter *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setType(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setTypeNameFormat(*reinterpret_cast< QQmlNdefRecord::TypeNameFormat*>(_v)); break;
        case 2: _t->setMinimum(*reinterpret_cast< int*>(_v)); break;
        case 3: _t->setMaximum(*reinterpret_cast< int*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_a);
}

static const QMetaObject * const qt_meta_extradata_QDeclarativeNdefFilter[] = {
        &QQmlNdefRecord::staticMetaObject,
    nullptr
};

const QMetaObject QDeclarativeNdefFilter::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QDeclarativeNdefFilter.data,
      qt_meta_data_QDeclarativeNdefFilter,  qt_static_metacall, qt_meta_extradata_QDeclarativeNdefFilter, nullptr}
};


const QMetaObject *QDeclarativeNdefFilter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QDeclarativeNdefFilter::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QDeclarativeNdefFilter.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QDeclarativeNdefFilter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 4;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QDeclarativeNdefFilter::typeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QDeclarativeNdefFilter::minimumChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void QDeclarativeNdefFilter::maximumChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void QDeclarativeNdefFilter::typeNameFormatChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
