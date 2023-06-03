/****************************************************************************
** Meta object code from reading C++ file 'qdeclarativendeftextrecord_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../qdeclarativendeftextrecord_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qdeclarativendeftextrecord_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QDeclarativeNdefTextRecord_t {
    QByteArrayData data[16];
    char stringdata0[228];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QDeclarativeNdefTextRecord_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QDeclarativeNdefTextRecord_t qt_meta_stringdata_QDeclarativeNdefTextRecord = {
    {
QT_MOC_LITERAL(0, 0, 26), // "QDeclarativeNdefTextRecord"
QT_MOC_LITERAL(1, 27, 11), // "textChanged"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 13), // "localeChanged"
QT_MOC_LITERAL(4, 54, 18), // "localeMatchChanged"
QT_MOC_LITERAL(5, 73, 11), // "QNdefRecord"
QT_MOC_LITERAL(6, 85, 6), // "record"
QT_MOC_LITERAL(7, 92, 6), // "parent"
QT_MOC_LITERAL(8, 99, 4), // "text"
QT_MOC_LITERAL(9, 104, 6), // "locale"
QT_MOC_LITERAL(10, 111, 11), // "localeMatch"
QT_MOC_LITERAL(11, 123, 11), // "LocaleMatch"
QT_MOC_LITERAL(12, 135, 17), // "LocaleMatchedNone"
QT_MOC_LITERAL(13, 153, 20), // "LocaleMatchedEnglish"
QT_MOC_LITERAL(14, 174, 21), // "LocaleMatchedLanguage"
QT_MOC_LITERAL(15, 196, 31) // "LocaleMatchedLanguageAndCountry"

    },
    "QDeclarativeNdefTextRecord\0textChanged\0"
    "\0localeChanged\0localeMatchChanged\0"
    "QNdefRecord\0record\0parent\0text\0locale\0"
    "localeMatch\0LocaleMatch\0LocaleMatchedNone\0"
    "LocaleMatchedEnglish\0LocaleMatchedLanguage\0"
    "LocaleMatchedLanguageAndCountry"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QDeclarativeNdefTextRecord[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       3,   40, // properties
       1,   52, // enums/sets
       2,   64, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x06 /* Public */,
       3,    0,   30,    2, 0x06 /* Public */,
       4,    0,   31,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // constructors: parameters
    0x80000000 | 2, 0x80000000 | 5, QMetaType::QObjectStar,    6,    7,
    0x80000000 | 2, 0x80000000 | 5,    6,

 // properties: name, type, flags
       8, QMetaType::QString, 0x00495103,
       9, QMetaType::QString, 0x00495103,
      10, 0x80000000 | 11, 0x00495009,

 // properties: notify_signal_id
       0,
       1,
       2,

 // enums: name, flags, count, data
      11, 0x0,    4,   56,

 // enum data: key, value
      12, uint(QDeclarativeNdefTextRecord::LocaleMatchedNone),
      13, uint(QDeclarativeNdefTextRecord::LocaleMatchedEnglish),
      14, uint(QDeclarativeNdefTextRecord::LocaleMatchedLanguage),
      15, uint(QDeclarativeNdefTextRecord::LocaleMatchedLanguageAndCountry),

 // constructors: name, argc, parameters, tag, flags
       0,    2,   32,    2, 0x0e /* Public */,
       0,    1,   37,    2, 0x2e /* Public | MethodCloned */,

       0        // eod
};

void QDeclarativeNdefTextRecord::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::CreateInstance) {
        switch (_id) {
        case 0: { QDeclarativeNdefTextRecord *_r = new QDeclarativeNdefTextRecord((*reinterpret_cast< const QNdefRecord(*)>(_a[1])),(*reinterpret_cast< QObject*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast<QObject**>(_a[0]) = _r; } break;
        case 1: { QDeclarativeNdefTextRecord *_r = new QDeclarativeNdefTextRecord((*reinterpret_cast< const QNdefRecord(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast<QObject**>(_a[0]) = _r; } break;
        default: break;
        }
    } else if (_c == QMetaObject::InvokeMetaMethod) {
        QDeclarativeNdefTextRecord *_t = static_cast<QDeclarativeNdefTextRecord *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->textChanged(); break;
        case 1: _t->localeChanged(); break;
        case 2: _t->localeMatchChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QDeclarativeNdefTextRecord::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QDeclarativeNdefTextRecord::textChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QDeclarativeNdefTextRecord::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QDeclarativeNdefTextRecord::localeChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QDeclarativeNdefTextRecord::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QDeclarativeNdefTextRecord::localeMatchChanged)) {
                *result = 2;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QDeclarativeNdefTextRecord *_t = static_cast<QDeclarativeNdefTextRecord *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->text(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->locale(); break;
        case 2: *reinterpret_cast< LocaleMatch*>(_v) = _t->localeMatch(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QDeclarativeNdefTextRecord *_t = static_cast<QDeclarativeNdefTextRecord *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setText(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setLocale(*reinterpret_cast< QString*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QDeclarativeNdefTextRecord::staticMetaObject = {
    { &QQmlNdefRecord::staticMetaObject, qt_meta_stringdata_QDeclarativeNdefTextRecord.data,
      qt_meta_data_QDeclarativeNdefTextRecord,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QDeclarativeNdefTextRecord::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QDeclarativeNdefTextRecord::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QDeclarativeNdefTextRecord.stringdata0))
        return static_cast<void*>(this);
    return QQmlNdefRecord::qt_metacast(_clname);
}

int QDeclarativeNdefTextRecord::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QQmlNdefRecord::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 3;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QDeclarativeNdefTextRecord::textChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QDeclarativeNdefTextRecord::localeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void QDeclarativeNdefTextRecord::localeMatchChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
