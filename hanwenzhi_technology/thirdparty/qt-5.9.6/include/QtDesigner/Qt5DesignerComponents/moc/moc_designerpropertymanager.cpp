/****************************************************************************
** Meta object code from reading C++ file 'designerpropertymanager.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../propertyeditor/designerpropertymanager.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'designerpropertymanager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_qdesigner_internal__ResetDecorator_t {
    QByteArrayData data[8];
    char stringdata0[118];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_qdesigner_internal__ResetDecorator_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_qdesigner_internal__ResetDecorator_t qt_meta_stringdata_qdesigner_internal__ResetDecorator = {
    {
QT_MOC_LITERAL(0, 0, 34), // "qdesigner_internal::ResetDeco..."
QT_MOC_LITERAL(1, 35, 13), // "resetProperty"
QT_MOC_LITERAL(2, 49, 0), // ""
QT_MOC_LITERAL(3, 50, 11), // "QtProperty*"
QT_MOC_LITERAL(4, 62, 8), // "property"
QT_MOC_LITERAL(5, 71, 19), // "slotPropertyChanged"
QT_MOC_LITERAL(6, 91, 19), // "slotEditorDestroyed"
QT_MOC_LITERAL(7, 111, 6) // "object"

    },
    "qdesigner_internal::ResetDecorator\0"
    "resetProperty\0\0QtProperty*\0property\0"
    "slotPropertyChanged\0slotEditorDestroyed\0"
    "object"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qdesigner_internal__ResetDecorator[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,   32,    2, 0x08 /* Private */,
       6,    1,   35,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::QObjectStar,    7,

       0        // eod
};

void qdesigner_internal::ResetDecorator::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ResetDecorator *_t = static_cast<ResetDecorator *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->resetProperty((*reinterpret_cast< QtProperty*(*)>(_a[1]))); break;
        case 1: _t->slotPropertyChanged((*reinterpret_cast< QtProperty*(*)>(_a[1]))); break;
        case 2: _t->slotEditorDestroyed((*reinterpret_cast< QObject*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (ResetDecorator::*_t)(QtProperty * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ResetDecorator::resetProperty)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject qdesigner_internal::ResetDecorator::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_qdesigner_internal__ResetDecorator.data,
      qt_meta_data_qdesigner_internal__ResetDecorator,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *qdesigner_internal::ResetDecorator::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qdesigner_internal::ResetDecorator::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_qdesigner_internal__ResetDecorator.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int qdesigner_internal::ResetDecorator::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
void qdesigner_internal::ResetDecorator::resetProperty(QtProperty * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_qdesigner_internal__DesignerPropertyManager_t {
    QByteArrayData data[12];
    char stringdata0[182];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_qdesigner_internal__DesignerPropertyManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_qdesigner_internal__DesignerPropertyManager_t qt_meta_stringdata_qdesigner_internal__DesignerPropertyManager = {
    {
QT_MOC_LITERAL(0, 0, 43), // "qdesigner_internal::DesignerP..."
QT_MOC_LITERAL(1, 44, 12), // "valueChanged"
QT_MOC_LITERAL(2, 57, 0), // ""
QT_MOC_LITERAL(3, 58, 11), // "QtProperty*"
QT_MOC_LITERAL(4, 70, 8), // "property"
QT_MOC_LITERAL(5, 79, 5), // "value"
QT_MOC_LITERAL(6, 85, 25), // "enableSubPropertyHandling"
QT_MOC_LITERAL(7, 111, 12), // "setAttribute"
QT_MOC_LITERAL(8, 124, 9), // "attribute"
QT_MOC_LITERAL(9, 134, 8), // "setValue"
QT_MOC_LITERAL(10, 143, 16), // "slotValueChanged"
QT_MOC_LITERAL(11, 160, 21) // "slotPropertyDestroyed"

    },
    "qdesigner_internal::DesignerPropertyManager\0"
    "valueChanged\0\0QtProperty*\0property\0"
    "value\0enableSubPropertyHandling\0"
    "setAttribute\0attribute\0setValue\0"
    "slotValueChanged\0slotPropertyDestroyed"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qdesigner_internal__DesignerPropertyManager[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    3,   39,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    3,   46,    2, 0x0a /* Public */,
       9,    2,   53,    2, 0x0a /* Public */,
      10,    2,   58,    2, 0x08 /* Private */,
      11,    1,   63,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::QVariant, QMetaType::Bool,    4,    5,    6,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::QString, QMetaType::QVariant,    4,    8,    5,
    QMetaType::Void, 0x80000000 | 3, QMetaType::QVariant,    4,    5,
    QMetaType::Void, 0x80000000 | 3, QMetaType::QVariant,    4,    5,
    QMetaType::Void, 0x80000000 | 3,    4,

       0        // eod
};

void qdesigner_internal::DesignerPropertyManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        DesignerPropertyManager *_t = static_cast<DesignerPropertyManager *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->valueChanged((*reinterpret_cast< QtProperty*(*)>(_a[1])),(*reinterpret_cast< const QVariant(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 1: _t->setAttribute((*reinterpret_cast< QtProperty*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 2: _t->setValue((*reinterpret_cast< QtProperty*(*)>(_a[1])),(*reinterpret_cast< const QVariant(*)>(_a[2]))); break;
        case 3: _t->slotValueChanged((*reinterpret_cast< QtProperty*(*)>(_a[1])),(*reinterpret_cast< const QVariant(*)>(_a[2]))); break;
        case 4: _t->slotPropertyDestroyed((*reinterpret_cast< QtProperty*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (DesignerPropertyManager::*_t)(QtProperty * , const QVariant & , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DesignerPropertyManager::valueChanged)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject qdesigner_internal::DesignerPropertyManager::staticMetaObject = {
    { &QtVariantPropertyManager::staticMetaObject, qt_meta_stringdata_qdesigner_internal__DesignerPropertyManager.data,
      qt_meta_data_qdesigner_internal__DesignerPropertyManager,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *qdesigner_internal::DesignerPropertyManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qdesigner_internal::DesignerPropertyManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_qdesigner_internal__DesignerPropertyManager.stringdata0))
        return static_cast<void*>(this);
    return QtVariantPropertyManager::qt_metacast(_clname);
}

int qdesigner_internal::DesignerPropertyManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QtVariantPropertyManager::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void qdesigner_internal::DesignerPropertyManager::valueChanged(QtProperty * _t1, const QVariant & _t2, bool _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_qdesigner_internal__DesignerEditorFactory_t {
    QByteArrayData data[24];
    char stringdata0[413];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_qdesigner_internal__DesignerEditorFactory_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_qdesigner_internal__DesignerEditorFactory_t qt_meta_stringdata_qdesigner_internal__DesignerEditorFactory = {
    {
QT_MOC_LITERAL(0, 0, 41), // "qdesigner_internal::DesignerE..."
QT_MOC_LITERAL(1, 42, 13), // "resetProperty"
QT_MOC_LITERAL(2, 56, 0), // ""
QT_MOC_LITERAL(3, 57, 11), // "QtProperty*"
QT_MOC_LITERAL(4, 69, 8), // "property"
QT_MOC_LITERAL(5, 78, 19), // "slotEditorDestroyed"
QT_MOC_LITERAL(6, 98, 6), // "object"
QT_MOC_LITERAL(7, 105, 20), // "slotAttributeChanged"
QT_MOC_LITERAL(8, 126, 9), // "attribute"
QT_MOC_LITERAL(9, 136, 5), // "value"
QT_MOC_LITERAL(10, 142, 19), // "slotPropertyChanged"
QT_MOC_LITERAL(11, 162, 16), // "slotValueChanged"
QT_MOC_LITERAL(12, 179, 21), // "slotStringTextChanged"
QT_MOC_LITERAL(13, 201, 22), // "slotKeySequenceChanged"
QT_MOC_LITERAL(14, 224, 18), // "slotPaletteChanged"
QT_MOC_LITERAL(15, 243, 17), // "slotPixmapChanged"
QT_MOC_LITERAL(16, 261, 15), // "slotIconChanged"
QT_MOC_LITERAL(17, 277, 20), // "slotIconThemeChanged"
QT_MOC_LITERAL(18, 298, 15), // "slotUintChanged"
QT_MOC_LITERAL(19, 314, 19), // "slotLongLongChanged"
QT_MOC_LITERAL(20, 334, 20), // "slotULongLongChanged"
QT_MOC_LITERAL(21, 355, 14), // "slotUrlChanged"
QT_MOC_LITERAL(22, 370, 20), // "slotByteArrayChanged"
QT_MOC_LITERAL(23, 391, 21) // "slotStringListChanged"

    },
    "qdesigner_internal::DesignerEditorFactory\0"
    "resetProperty\0\0QtProperty*\0property\0"
    "slotEditorDestroyed\0object\0"
    "slotAttributeChanged\0attribute\0value\0"
    "slotPropertyChanged\0slotValueChanged\0"
    "slotStringTextChanged\0slotKeySequenceChanged\0"
    "slotPaletteChanged\0slotPixmapChanged\0"
    "slotIconChanged\0slotIconThemeChanged\0"
    "slotUintChanged\0slotLongLongChanged\0"
    "slotULongLongChanged\0slotUrlChanged\0"
    "slotByteArrayChanged\0slotStringListChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qdesigner_internal__DesignerEditorFactory[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      17,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   99,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,  102,    2, 0x08 /* Private */,
       7,    3,  105,    2, 0x08 /* Private */,
      10,    1,  112,    2, 0x08 /* Private */,
      11,    2,  115,    2, 0x08 /* Private */,
      12,    1,  120,    2, 0x08 /* Private */,
      13,    1,  123,    2, 0x08 /* Private */,
      14,    1,  126,    2, 0x08 /* Private */,
      15,    1,  129,    2, 0x08 /* Private */,
      16,    1,  132,    2, 0x08 /* Private */,
      17,    1,  135,    2, 0x08 /* Private */,
      18,    1,  138,    2, 0x08 /* Private */,
      19,    1,  141,    2, 0x08 /* Private */,
      20,    1,  144,    2, 0x08 /* Private */,
      21,    1,  147,    2, 0x08 /* Private */,
      22,    1,  150,    2, 0x08 /* Private */,
      23,    1,  153,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void, QMetaType::QObjectStar,    6,
    QMetaType::Void, 0x80000000 | 3, QMetaType::QString, QMetaType::QVariant,    4,    8,    9,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3, QMetaType::QVariant,    4,    9,
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void, QMetaType::QKeySequence,    9,
    QMetaType::Void, QMetaType::QPalette,    9,
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void, QMetaType::QStringList,    9,

       0        // eod
};

void qdesigner_internal::DesignerEditorFactory::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        DesignerEditorFactory *_t = static_cast<DesignerEditorFactory *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->resetProperty((*reinterpret_cast< QtProperty*(*)>(_a[1]))); break;
        case 1: _t->slotEditorDestroyed((*reinterpret_cast< QObject*(*)>(_a[1]))); break;
        case 2: _t->slotAttributeChanged((*reinterpret_cast< QtProperty*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3]))); break;
        case 3: _t->slotPropertyChanged((*reinterpret_cast< QtProperty*(*)>(_a[1]))); break;
        case 4: _t->slotValueChanged((*reinterpret_cast< QtProperty*(*)>(_a[1])),(*reinterpret_cast< const QVariant(*)>(_a[2]))); break;
        case 5: _t->slotStringTextChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->slotKeySequenceChanged((*reinterpret_cast< const QKeySequence(*)>(_a[1]))); break;
        case 7: _t->slotPaletteChanged((*reinterpret_cast< const QPalette(*)>(_a[1]))); break;
        case 8: _t->slotPixmapChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 9: _t->slotIconChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 10: _t->slotIconThemeChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 11: _t->slotUintChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 12: _t->slotLongLongChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 13: _t->slotULongLongChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 14: _t->slotUrlChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 15: _t->slotByteArrayChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 16: _t->slotStringListChanged((*reinterpret_cast< const QStringList(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (DesignerEditorFactory::*_t)(QtProperty * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DesignerEditorFactory::resetProperty)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject qdesigner_internal::DesignerEditorFactory::staticMetaObject = {
    { &QtVariantEditorFactory::staticMetaObject, qt_meta_stringdata_qdesigner_internal__DesignerEditorFactory.data,
      qt_meta_data_qdesigner_internal__DesignerEditorFactory,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *qdesigner_internal::DesignerEditorFactory::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qdesigner_internal::DesignerEditorFactory::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_qdesigner_internal__DesignerEditorFactory.stringdata0))
        return static_cast<void*>(this);
    return QtVariantEditorFactory::qt_metacast(_clname);
}

int qdesigner_internal::DesignerEditorFactory::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QtVariantEditorFactory::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 17)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 17;
    }
    return _id;
}

// SIGNAL 0
void qdesigner_internal::DesignerEditorFactory::resetProperty(QtProperty * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
