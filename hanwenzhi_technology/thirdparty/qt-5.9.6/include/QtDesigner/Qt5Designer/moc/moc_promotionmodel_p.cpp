/****************************************************************************
** Meta object code from reading C++ file 'promotionmodel_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../5.9.6/QtDesigner/private/promotionmodel_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'promotionmodel_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_qdesigner_internal__PromotionModel_t {
    QByteArrayData data[10];
    char stringdata0[166];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_qdesigner_internal__PromotionModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_qdesigner_internal__PromotionModel_t qt_meta_stringdata_qdesigner_internal__PromotionModel = {
    {
QT_MOC_LITERAL(0, 0, 34), // "qdesigner_internal::Promotion..."
QT_MOC_LITERAL(1, 35, 18), // "includeFileChanged"
QT_MOC_LITERAL(2, 54, 0), // ""
QT_MOC_LITERAL(3, 55, 37), // "QDesignerWidgetDataBaseItemIn..."
QT_MOC_LITERAL(4, 93, 11), // "includeFile"
QT_MOC_LITERAL(5, 105, 16), // "classNameChanged"
QT_MOC_LITERAL(6, 122, 7), // "newName"
QT_MOC_LITERAL(7, 130, 15), // "slotItemChanged"
QT_MOC_LITERAL(8, 146, 14), // "QStandardItem*"
QT_MOC_LITERAL(9, 161, 4) // "item"

    },
    "qdesigner_internal::PromotionModel\0"
    "includeFileChanged\0\0"
    "QDesignerWidgetDataBaseItemInterface*\0"
    "includeFile\0classNameChanged\0newName\0"
    "slotItemChanged\0QStandardItem*\0item"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qdesigner_internal__PromotionModel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   29,    2, 0x06 /* Public */,
       5,    2,   34,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    1,   39,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::QString,    2,    4,
    QMetaType::Void, 0x80000000 | 3, QMetaType::QString,    2,    6,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 8,    9,

       0        // eod
};

void qdesigner_internal::PromotionModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PromotionModel *_t = static_cast<PromotionModel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->includeFileChanged((*reinterpret_cast< QDesignerWidgetDataBaseItemInterface*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 1: _t->classNameChanged((*reinterpret_cast< QDesignerWidgetDataBaseItemInterface*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 2: _t->slotItemChanged((*reinterpret_cast< QStandardItem*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (PromotionModel::*_t)(QDesignerWidgetDataBaseItemInterface * , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PromotionModel::includeFileChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (PromotionModel::*_t)(QDesignerWidgetDataBaseItemInterface * , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PromotionModel::classNameChanged)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject qdesigner_internal::PromotionModel::staticMetaObject = {
    { &QStandardItemModel::staticMetaObject, qt_meta_stringdata_qdesigner_internal__PromotionModel.data,
      qt_meta_data_qdesigner_internal__PromotionModel,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *qdesigner_internal::PromotionModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qdesigner_internal::PromotionModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_qdesigner_internal__PromotionModel.stringdata0))
        return static_cast<void*>(this);
    return QStandardItemModel::qt_metacast(_clname);
}

int qdesigner_internal::PromotionModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QStandardItemModel::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void qdesigner_internal::PromotionModel::includeFileChanged(QDesignerWidgetDataBaseItemInterface * _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void qdesigner_internal::PromotionModel::classNameChanged(QDesignerWidgetDataBaseItemInterface * _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
