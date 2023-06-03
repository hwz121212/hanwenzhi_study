/****************************************************************************
** Meta object code from reading C++ file 'qdesigner_appearanceoptions.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../qdesigner_appearanceoptions.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qdesigner_appearanceoptions.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QDesignerAppearanceOptionsWidget_t {
    QByteArrayData data[5];
    char stringdata0[80];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QDesignerAppearanceOptionsWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QDesignerAppearanceOptionsWidget_t qt_meta_stringdata_QDesignerAppearanceOptionsWidget = {
    {
QT_MOC_LITERAL(0, 0, 32), // "QDesignerAppearanceOptionsWidget"
QT_MOC_LITERAL(1, 33, 13), // "uiModeChanged"
QT_MOC_LITERAL(2, 47, 0), // ""
QT_MOC_LITERAL(3, 48, 8), // "modified"
QT_MOC_LITERAL(4, 57, 22) // "slotUiModeComboChanged"

    },
    "QDesignerAppearanceOptionsWidget\0"
    "uiModeChanged\0\0modified\0slotUiModeComboChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QDesignerAppearanceOptionsWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   27,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void QDesignerAppearanceOptionsWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QDesignerAppearanceOptionsWidget *_t = static_cast<QDesignerAppearanceOptionsWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->uiModeChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->slotUiModeComboChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QDesignerAppearanceOptionsWidget::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QDesignerAppearanceOptionsWidget::uiModeChanged)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject QDesignerAppearanceOptionsWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_QDesignerAppearanceOptionsWidget.data,
      qt_meta_data_QDesignerAppearanceOptionsWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QDesignerAppearanceOptionsWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QDesignerAppearanceOptionsWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QDesignerAppearanceOptionsWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int QDesignerAppearanceOptionsWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void QDesignerAppearanceOptionsWidget::uiModeChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_QDesignerAppearanceOptionsPage_t {
    QByteArrayData data[3];
    char stringdata0[48];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QDesignerAppearanceOptionsPage_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QDesignerAppearanceOptionsPage_t qt_meta_stringdata_QDesignerAppearanceOptionsPage = {
    {
QT_MOC_LITERAL(0, 0, 30), // "QDesignerAppearanceOptionsPage"
QT_MOC_LITERAL(1, 31, 15), // "settingsChanged"
QT_MOC_LITERAL(2, 47, 0) // ""

    },
    "QDesignerAppearanceOptionsPage\0"
    "settingsChanged\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QDesignerAppearanceOptionsPage[] = {

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
       1,    0,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,

       0        // eod
};

void QDesignerAppearanceOptionsPage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QDesignerAppearanceOptionsPage *_t = static_cast<QDesignerAppearanceOptionsPage *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->settingsChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QDesignerAppearanceOptionsPage::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QDesignerAppearanceOptionsPage::settingsChanged)) {
                *result = 0;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject QDesignerAppearanceOptionsPage::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QDesignerAppearanceOptionsPage.data,
      qt_meta_data_QDesignerAppearanceOptionsPage,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QDesignerAppearanceOptionsPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QDesignerAppearanceOptionsPage::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QDesignerAppearanceOptionsPage.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "QDesignerOptionsPageInterface"))
        return static_cast< QDesignerOptionsPageInterface*>(this);
    return QObject::qt_metacast(_clname);
}

int QDesignerAppearanceOptionsPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
void QDesignerAppearanceOptionsPage::settingsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
