/****************************************************************************
** Meta object code from reading C++ file 'signalslotdialog_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../5.9.6/QtDesigner/private/signalslotdialog_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'signalslotdialog_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_qdesigner_internal__SignatureModel_t {
    QByteArrayData data[6];
    char stringdata0[70];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_qdesigner_internal__SignatureModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_qdesigner_internal__SignatureModel_t qt_meta_stringdata_qdesigner_internal__SignatureModel = {
    {
QT_MOC_LITERAL(0, 0, 34), // "qdesigner_internal::Signature..."
QT_MOC_LITERAL(1, 35, 14), // "checkSignature"
QT_MOC_LITERAL(2, 50, 0), // ""
QT_MOC_LITERAL(3, 51, 9), // "signature"
QT_MOC_LITERAL(4, 61, 5), // "bool*"
QT_MOC_LITERAL(5, 67, 2) // "ok"

    },
    "qdesigner_internal::SignatureModel\0"
    "checkSignature\0\0signature\0bool*\0ok"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qdesigner_internal__SignatureModel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, 0x80000000 | 4,    3,    5,

       0        // eod
};

void qdesigner_internal::SignatureModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SignatureModel *_t = static_cast<SignatureModel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->checkSignature((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< bool*(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (SignatureModel::*_t)(const QString & , bool * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SignatureModel::checkSignature)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject qdesigner_internal::SignatureModel::staticMetaObject = {
    { &QStandardItemModel::staticMetaObject, qt_meta_stringdata_qdesigner_internal__SignatureModel.data,
      qt_meta_data_qdesigner_internal__SignatureModel,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *qdesigner_internal::SignatureModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qdesigner_internal::SignatureModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_qdesigner_internal__SignatureModel.stringdata0))
        return static_cast<void*>(this);
    return QStandardItemModel::qt_metacast(_clname);
}

int qdesigner_internal::SignatureModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QStandardItemModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void qdesigner_internal::SignatureModel::checkSignature(const QString & _t1, bool * _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_qdesigner_internal__SignaturePanel_t {
    QByteArrayData data[10];
    char stringdata0[125];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_qdesigner_internal__SignaturePanel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_qdesigner_internal__SignaturePanel_t qt_meta_stringdata_qdesigner_internal__SignaturePanel = {
    {
QT_MOC_LITERAL(0, 0, 34), // "qdesigner_internal::Signature..."
QT_MOC_LITERAL(1, 35, 14), // "checkSignature"
QT_MOC_LITERAL(2, 50, 0), // ""
QT_MOC_LITERAL(3, 51, 9), // "signature"
QT_MOC_LITERAL(4, 61, 5), // "bool*"
QT_MOC_LITERAL(5, 67, 2), // "ok"
QT_MOC_LITERAL(6, 70, 7), // "slotAdd"
QT_MOC_LITERAL(7, 78, 10), // "slotRemove"
QT_MOC_LITERAL(8, 89, 20), // "slotSelectionChanged"
QT_MOC_LITERAL(9, 110, 14) // "QItemSelection"

    },
    "qdesigner_internal::SignaturePanel\0"
    "checkSignature\0\0signature\0bool*\0ok\0"
    "slotAdd\0slotRemove\0slotSelectionChanged\0"
    "QItemSelection"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qdesigner_internal__SignaturePanel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   34,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    0,   39,    2, 0x08 /* Private */,
       7,    0,   40,    2, 0x08 /* Private */,
       8,    2,   41,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, 0x80000000 | 4,    3,    5,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 9, 0x80000000 | 9,    2,    2,

       0        // eod
};

void qdesigner_internal::SignaturePanel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SignaturePanel *_t = static_cast<SignaturePanel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->checkSignature((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< bool*(*)>(_a[2]))); break;
        case 1: _t->slotAdd(); break;
        case 2: _t->slotRemove(); break;
        case 3: _t->slotSelectionChanged((*reinterpret_cast< const QItemSelection(*)>(_a[1])),(*reinterpret_cast< const QItemSelection(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (SignaturePanel::*_t)(const QString & , bool * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SignaturePanel::checkSignature)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject qdesigner_internal::SignaturePanel::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_qdesigner_internal__SignaturePanel.data,
      qt_meta_data_qdesigner_internal__SignaturePanel,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *qdesigner_internal::SignaturePanel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qdesigner_internal::SignaturePanel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_qdesigner_internal__SignaturePanel.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int qdesigner_internal::SignaturePanel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void qdesigner_internal::SignaturePanel::checkSignature(const QString & _t1, bool * _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_qdesigner_internal__SignalSlotDialog_t {
    QByteArrayData data[6];
    char stringdata0[76];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_qdesigner_internal__SignalSlotDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_qdesigner_internal__SignalSlotDialog_t qt_meta_stringdata_qdesigner_internal__SignalSlotDialog = {
    {
QT_MOC_LITERAL(0, 0, 36), // "qdesigner_internal::SignalSlo..."
QT_MOC_LITERAL(1, 37, 18), // "slotCheckSignature"
QT_MOC_LITERAL(2, 56, 0), // ""
QT_MOC_LITERAL(3, 57, 9), // "signature"
QT_MOC_LITERAL(4, 67, 5), // "bool*"
QT_MOC_LITERAL(5, 73, 2) // "ok"

    },
    "qdesigner_internal::SignalSlotDialog\0"
    "slotCheckSignature\0\0signature\0bool*\0"
    "ok"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qdesigner_internal__SignalSlotDialog[] = {

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
    QMetaType::Void, QMetaType::QString, 0x80000000 | 4,    3,    5,

       0        // eod
};

void qdesigner_internal::SignalSlotDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SignalSlotDialog *_t = static_cast<SignalSlotDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->slotCheckSignature((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< bool*(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObject qdesigner_internal::SignalSlotDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_qdesigner_internal__SignalSlotDialog.data,
      qt_meta_data_qdesigner_internal__SignalSlotDialog,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *qdesigner_internal::SignalSlotDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qdesigner_internal::SignalSlotDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_qdesigner_internal__SignalSlotDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int qdesigner_internal::SignalSlotDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
