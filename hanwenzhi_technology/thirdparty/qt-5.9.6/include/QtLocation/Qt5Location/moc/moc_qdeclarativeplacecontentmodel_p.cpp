/****************************************************************************
** Meta object code from reading C++ file 'qdeclarativeplacecontentmodel_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../5.9.6/QtLocation/private/qdeclarativeplacecontentmodel_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qdeclarativeplacecontentmodel_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QDeclarativePlaceContentModel_t {
    QByteArrayData data[10];
    char stringdata0[139];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QDeclarativePlaceContentModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QDeclarativePlaceContentModel_t qt_meta_stringdata_QDeclarativePlaceContentModel = {
    {
QT_MOC_LITERAL(0, 0, 29), // "QDeclarativePlaceContentModel"
QT_MOC_LITERAL(1, 30, 12), // "placeChanged"
QT_MOC_LITERAL(2, 43, 0), // ""
QT_MOC_LITERAL(3, 44, 16), // "batchSizeChanged"
QT_MOC_LITERAL(4, 61, 17), // "totalCountChanged"
QT_MOC_LITERAL(5, 79, 13), // "fetchFinished"
QT_MOC_LITERAL(6, 93, 5), // "place"
QT_MOC_LITERAL(7, 99, 18), // "QDeclarativePlace*"
QT_MOC_LITERAL(8, 118, 9), // "batchSize"
QT_MOC_LITERAL(9, 128, 10) // "totalCount"

    },
    "QDeclarativePlaceContentModel\0"
    "placeChanged\0\0batchSizeChanged\0"
    "totalCountChanged\0fetchFinished\0place\0"
    "QDeclarativePlace*\0batchSize\0totalCount"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QDeclarativePlaceContentModel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       3,   38, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x06 /* Public */,
       3,    0,   35,    2, 0x06 /* Public */,
       4,    0,   36,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   37,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,

 // properties: name, type, flags
       6, 0x80000000 | 7, 0x0049510b,
       8, QMetaType::Int, 0x00495103,
       9, QMetaType::Int, 0x00495001,

 // properties: notify_signal_id
       0,
       1,
       2,

       0        // eod
};

void QDeclarativePlaceContentModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QDeclarativePlaceContentModel *_t = static_cast<QDeclarativePlaceContentModel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->placeChanged(); break;
        case 1: _t->batchSizeChanged(); break;
        case 2: _t->totalCountChanged(); break;
        case 3: _t->fetchFinished(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QDeclarativePlaceContentModel::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QDeclarativePlaceContentModel::placeChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QDeclarativePlaceContentModel::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QDeclarativePlaceContentModel::batchSizeChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QDeclarativePlaceContentModel::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QDeclarativePlaceContentModel::totalCountChanged)) {
                *result = 2;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QDeclarativePlaceContentModel *_t = static_cast<QDeclarativePlaceContentModel *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QDeclarativePlace**>(_v) = _t->place(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->batchSize(); break;
        case 2: *reinterpret_cast< int*>(_v) = _t->totalCount(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QDeclarativePlaceContentModel *_t = static_cast<QDeclarativePlaceContentModel *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setPlace(*reinterpret_cast< QDeclarativePlace**>(_v)); break;
        case 1: _t->setBatchSize(*reinterpret_cast< int*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_a);
}

const QMetaObject QDeclarativePlaceContentModel::staticMetaObject = {
    { &QAbstractListModel::staticMetaObject, qt_meta_stringdata_QDeclarativePlaceContentModel.data,
      qt_meta_data_QDeclarativePlaceContentModel,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QDeclarativePlaceContentModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QDeclarativePlaceContentModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QDeclarativePlaceContentModel.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "QQmlParserStatus"))
        return static_cast< QQmlParserStatus*>(this);
    if (!strcmp(_clname, "org.qt-project.Qt.QQmlParserStatus"))
        return static_cast< QQmlParserStatus*>(this);
    return QAbstractListModel::qt_metacast(_clname);
}

int QDeclarativePlaceContentModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractListModel::qt_metacall(_c, _id, _a);
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
void QDeclarativePlaceContentModel::placeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QDeclarativePlaceContentModel::batchSizeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void QDeclarativePlaceContentModel::totalCountChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
