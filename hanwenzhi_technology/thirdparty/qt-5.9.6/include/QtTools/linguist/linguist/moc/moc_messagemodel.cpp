/****************************************************************************
** Meta object code from reading C++ file 'messagemodel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../messagemodel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'messagemodel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_DataModel_t {
    QByteArrayData data[14];
    char stringdata0[146];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DataModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DataModel_t qt_meta_stringdata_DataModel = {
    {
QT_MOC_LITERAL(0, 0, 9), // "DataModel"
QT_MOC_LITERAL(1, 10, 12), // "statsChanged"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 5), // "words"
QT_MOC_LITERAL(4, 30, 10), // "characters"
QT_MOC_LITERAL(5, 41, 2), // "cs"
QT_MOC_LITERAL(6, 44, 6), // "words2"
QT_MOC_LITERAL(7, 51, 11), // "characters2"
QT_MOC_LITERAL(8, 63, 3), // "cs2"
QT_MOC_LITERAL(9, 67, 15), // "progressChanged"
QT_MOC_LITERAL(10, 83, 13), // "finishedCount"
QT_MOC_LITERAL(11, 97, 16), // "oldFinishedCount"
QT_MOC_LITERAL(12, 114, 15), // "languageChanged"
QT_MOC_LITERAL(13, 130, 15) // "modifiedChanged"

    },
    "DataModel\0statsChanged\0\0words\0characters\0"
    "cs\0words2\0characters2\0cs2\0progressChanged\0"
    "finishedCount\0oldFinishedCount\0"
    "languageChanged\0modifiedChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DataModel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    6,   34,    2, 0x06 /* Public */,
       9,    2,   47,    2, 0x06 /* Public */,
      12,    0,   52,    2, 0x06 /* Public */,
      13,    0,   53,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int,    3,    4,    5,    6,    7,    8,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   10,   11,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void DataModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        DataModel *_t = static_cast<DataModel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->statsChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5])),(*reinterpret_cast< int(*)>(_a[6]))); break;
        case 1: _t->progressChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 2: _t->languageChanged(); break;
        case 3: _t->modifiedChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (DataModel::*_t)(int , int , int , int , int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DataModel::statsChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (DataModel::*_t)(int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DataModel::progressChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (DataModel::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DataModel::languageChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (DataModel::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DataModel::modifiedChanged)) {
                *result = 3;
                return;
            }
        }
    }
}

const QMetaObject DataModel::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_DataModel.data,
      qt_meta_data_DataModel,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *DataModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DataModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DataModel.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int DataModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
    return _id;
}

// SIGNAL 0
void DataModel::statsChanged(int _t1, int _t2, int _t3, int _t4, int _t5, int _t6)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)), const_cast<void*>(reinterpret_cast<const void*>(&_t6)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void DataModel::progressChanged(int _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void DataModel::languageChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void DataModel::modifiedChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
struct qt_meta_stringdata_MultiDataModel_t {
    QByteArrayData data[23];
    char stringdata0[292];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MultiDataModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MultiDataModel_t qt_meta_stringdata_MultiDataModel = {
    {
QT_MOC_LITERAL(0, 0, 14), // "MultiDataModel"
QT_MOC_LITERAL(1, 15, 13), // "modelAppended"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 12), // "modelDeleted"
QT_MOC_LITERAL(4, 43, 5), // "model"
QT_MOC_LITERAL(5, 49, 16), // "allModelsDeleted"
QT_MOC_LITERAL(6, 66, 15), // "languageChanged"
QT_MOC_LITERAL(7, 82, 12), // "statsChanged"
QT_MOC_LITERAL(8, 95, 5), // "words"
QT_MOC_LITERAL(9, 101, 10), // "characters"
QT_MOC_LITERAL(10, 112, 2), // "cs"
QT_MOC_LITERAL(11, 115, 6), // "words2"
QT_MOC_LITERAL(12, 122, 11), // "characters2"
QT_MOC_LITERAL(13, 134, 3), // "cs2"
QT_MOC_LITERAL(14, 138, 15), // "modifiedChanged"
QT_MOC_LITERAL(15, 154, 23), // "multiContextDataChanged"
QT_MOC_LITERAL(16, 178, 14), // "MultiDataIndex"
QT_MOC_LITERAL(17, 193, 5), // "index"
QT_MOC_LITERAL(18, 199, 18), // "contextDataChanged"
QT_MOC_LITERAL(19, 218, 18), // "messageDataChanged"
QT_MOC_LITERAL(20, 237, 18), // "translationChanged"
QT_MOC_LITERAL(21, 256, 17), // "onModifiedChanged"
QT_MOC_LITERAL(22, 274, 17) // "onLanguageChanged"

    },
    "MultiDataModel\0modelAppended\0\0"
    "modelDeleted\0model\0allModelsDeleted\0"
    "languageChanged\0statsChanged\0words\0"
    "characters\0cs\0words2\0characters2\0cs2\0"
    "modifiedChanged\0multiContextDataChanged\0"
    "MultiDataIndex\0index\0contextDataChanged\0"
    "messageDataChanged\0translationChanged\0"
    "onModifiedChanged\0onLanguageChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MultiDataModel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      10,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   74,    2, 0x06 /* Public */,
       3,    1,   75,    2, 0x06 /* Public */,
       5,    0,   78,    2, 0x06 /* Public */,
       6,    1,   79,    2, 0x06 /* Public */,
       7,    6,   82,    2, 0x06 /* Public */,
      14,    1,   95,    2, 0x06 /* Public */,
      15,    1,   98,    2, 0x06 /* Public */,
      18,    1,  101,    2, 0x06 /* Public */,
      19,    1,  104,    2, 0x06 /* Public */,
      20,    1,  107,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      21,    0,  110,    2, 0x08 /* Private */,
      22,    0,  111,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int,    8,    9,   10,   11,   12,   13,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, 0x80000000 | 16,   17,
    QMetaType::Void, 0x80000000 | 16,   17,
    QMetaType::Void, 0x80000000 | 16,   17,
    QMetaType::Void, 0x80000000 | 16,   17,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MultiDataModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MultiDataModel *_t = static_cast<MultiDataModel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->modelAppended(); break;
        case 1: _t->modelDeleted((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->allModelsDeleted(); break;
        case 3: _t->languageChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->statsChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5])),(*reinterpret_cast< int(*)>(_a[6]))); break;
        case 5: _t->modifiedChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->multiContextDataChanged((*reinterpret_cast< const MultiDataIndex(*)>(_a[1]))); break;
        case 7: _t->contextDataChanged((*reinterpret_cast< const MultiDataIndex(*)>(_a[1]))); break;
        case 8: _t->messageDataChanged((*reinterpret_cast< const MultiDataIndex(*)>(_a[1]))); break;
        case 9: _t->translationChanged((*reinterpret_cast< const MultiDataIndex(*)>(_a[1]))); break;
        case 10: _t->onModifiedChanged(); break;
        case 11: _t->onLanguageChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (MultiDataModel::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MultiDataModel::modelAppended)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (MultiDataModel::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MultiDataModel::modelDeleted)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (MultiDataModel::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MultiDataModel::allModelsDeleted)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (MultiDataModel::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MultiDataModel::languageChanged)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (MultiDataModel::*_t)(int , int , int , int , int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MultiDataModel::statsChanged)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (MultiDataModel::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MultiDataModel::modifiedChanged)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (MultiDataModel::*_t)(const MultiDataIndex & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MultiDataModel::multiContextDataChanged)) {
                *result = 6;
                return;
            }
        }
        {
            typedef void (MultiDataModel::*_t)(const MultiDataIndex & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MultiDataModel::contextDataChanged)) {
                *result = 7;
                return;
            }
        }
        {
            typedef void (MultiDataModel::*_t)(const MultiDataIndex & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MultiDataModel::messageDataChanged)) {
                *result = 8;
                return;
            }
        }
        {
            typedef void (MultiDataModel::*_t)(const MultiDataIndex & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MultiDataModel::translationChanged)) {
                *result = 9;
                return;
            }
        }
    }
}

const QMetaObject MultiDataModel::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_MultiDataModel.data,
      qt_meta_data_MultiDataModel,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *MultiDataModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MultiDataModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MultiDataModel.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int MultiDataModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void MultiDataModel::modelAppended()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void MultiDataModel::modelDeleted(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void MultiDataModel::allModelsDeleted()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void MultiDataModel::languageChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void MultiDataModel::statsChanged(int _t1, int _t2, int _t3, int _t4, int _t5, int _t6)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)), const_cast<void*>(reinterpret_cast<const void*>(&_t6)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void MultiDataModel::modifiedChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void MultiDataModel::multiContextDataChanged(const MultiDataIndex & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void MultiDataModel::contextDataChanged(const MultiDataIndex & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void MultiDataModel::messageDataChanged(const MultiDataIndex & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void MultiDataModel::translationChanged(const MultiDataIndex & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}
struct qt_meta_stringdata_MessageModel_t {
    QByteArrayData data[7];
    char stringdata0[97];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MessageModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MessageModel_t qt_meta_stringdata_MessageModel = {
    {
QT_MOC_LITERAL(0, 0, 12), // "MessageModel"
QT_MOC_LITERAL(1, 13, 23), // "multiContextItemChanged"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 14), // "MultiDataIndex"
QT_MOC_LITERAL(4, 53, 5), // "index"
QT_MOC_LITERAL(5, 59, 18), // "contextItemChanged"
QT_MOC_LITERAL(6, 78, 18) // "messageItemChanged"

    },
    "MessageModel\0multiContextItemChanged\0"
    "\0MultiDataIndex\0index\0contextItemChanged\0"
    "messageItemChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MessageModel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x08 /* Private */,
       5,    1,   32,    2, 0x08 /* Private */,
       6,    1,   35,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,

       0        // eod
};

void MessageModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MessageModel *_t = static_cast<MessageModel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->multiContextItemChanged((*reinterpret_cast< const MultiDataIndex(*)>(_a[1]))); break;
        case 1: _t->contextItemChanged((*reinterpret_cast< const MultiDataIndex(*)>(_a[1]))); break;
        case 2: _t->messageItemChanged((*reinterpret_cast< const MultiDataIndex(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject MessageModel::staticMetaObject = {
    { &QAbstractItemModel::staticMetaObject, qt_meta_stringdata_MessageModel.data,
      qt_meta_data_MessageModel,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *MessageModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MessageModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MessageModel.stringdata0))
        return static_cast<void*>(this);
    return QAbstractItemModel::qt_metacast(_clname);
}

int MessageModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractItemModel::qt_metacall(_c, _id, _a);
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
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
