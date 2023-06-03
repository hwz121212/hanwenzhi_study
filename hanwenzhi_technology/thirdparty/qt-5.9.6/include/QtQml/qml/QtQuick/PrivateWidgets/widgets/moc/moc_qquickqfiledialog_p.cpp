/****************************************************************************
** Meta object code from reading C++ file 'qquickqfiledialog_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../qquickqfiledialog_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qquickqfiledialog_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QQuickQFileDialog_t {
    QByteArrayData data[1];
    char stringdata0[18];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QQuickQFileDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QQuickQFileDialog_t qt_meta_stringdata_QQuickQFileDialog = {
    {
QT_MOC_LITERAL(0, 0, 17) // "QQuickQFileDialog"

    },
    "QQuickQFileDialog"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QQuickQFileDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void QQuickQFileDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject QQuickQFileDialog::staticMetaObject = {
    { &QQuickAbstractFileDialog::staticMetaObject, qt_meta_stringdata_QQuickQFileDialog.data,
      qt_meta_data_QQuickQFileDialog,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QQuickQFileDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QQuickQFileDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QQuickQFileDialog.stringdata0))
        return static_cast<void*>(this);
    return QQuickAbstractFileDialog::qt_metacast(_clname);
}

int QQuickQFileDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QQuickAbstractFileDialog::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_QFileDialogHelper_t {
    QByteArrayData data[8];
    char stringdata0[89];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QFileDialogHelper_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QFileDialogHelper_t qt_meta_stringdata_QFileDialogHelper = {
    {
QT_MOC_LITERAL(0, 0, 17), // "QFileDialogHelper"
QT_MOC_LITERAL(1, 18, 14), // "currentChanged"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 4), // "path"
QT_MOC_LITERAL(4, 39, 16), // "directoryEntered"
QT_MOC_LITERAL(5, 56, 12), // "fileSelected"
QT_MOC_LITERAL(6, 69, 13), // "filesSelected"
QT_MOC_LITERAL(7, 83, 5) // "paths"

    },
    "QFileDialogHelper\0currentChanged\0\0"
    "path\0directoryEntered\0fileSelected\0"
    "filesSelected\0paths"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QFileDialogHelper[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x08 /* Private */,
       4,    1,   37,    2, 0x08 /* Private */,
       5,    1,   40,    2, 0x08 /* Private */,
       6,    1,   43,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QStringList,    7,

       0        // eod
};

void QFileDialogHelper::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QFileDialogHelper *_t = static_cast<QFileDialogHelper *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->currentChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->directoryEntered((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->fileSelected((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->filesSelected((*reinterpret_cast< const QStringList(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject QFileDialogHelper::staticMetaObject = {
    { &QPlatformFileDialogHelper::staticMetaObject, qt_meta_stringdata_QFileDialogHelper.data,
      qt_meta_data_QFileDialogHelper,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QFileDialogHelper::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QFileDialogHelper::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QFileDialogHelper.stringdata0))
        return static_cast<void*>(this);
    return QPlatformFileDialogHelper::qt_metacast(_clname);
}

int QFileDialogHelper::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QPlatformFileDialogHelper::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
