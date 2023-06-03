/****************************************************************************
** Meta object code from reading C++ file 'qtgradientview.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../qtgradienteditor/qtgradientview.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qtgradientview.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QtGradientView_t {
    QByteArrayData data[21];
    char stringdata0[313];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QtGradientView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QtGradientView_t qt_meta_stringdata_QtGradientView = {
    {
QT_MOC_LITERAL(0, 0, 14), // "QtGradientView"
QT_MOC_LITERAL(1, 15, 22), // "currentGradientChanged"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 2), // "id"
QT_MOC_LITERAL(4, 42, 17), // "gradientActivated"
QT_MOC_LITERAL(5, 60, 17), // "slotGradientAdded"
QT_MOC_LITERAL(6, 78, 9), // "QGradient"
QT_MOC_LITERAL(7, 88, 8), // "gradient"
QT_MOC_LITERAL(8, 97, 19), // "slotGradientRenamed"
QT_MOC_LITERAL(9, 117, 5), // "newId"
QT_MOC_LITERAL(10, 123, 19), // "slotGradientChanged"
QT_MOC_LITERAL(11, 143, 11), // "newGradient"
QT_MOC_LITERAL(12, 155, 19), // "slotGradientRemoved"
QT_MOC_LITERAL(13, 175, 15), // "slotNewGradient"
QT_MOC_LITERAL(14, 191, 16), // "slotEditGradient"
QT_MOC_LITERAL(15, 208, 18), // "slotRemoveGradient"
QT_MOC_LITERAL(16, 227, 18), // "slotRenameGradient"
QT_MOC_LITERAL(17, 246, 16), // "QListWidgetItem*"
QT_MOC_LITERAL(18, 263, 4), // "item"
QT_MOC_LITERAL(19, 268, 22), // "slotCurrentItemChanged"
QT_MOC_LITERAL(20, 291, 21) // "slotGradientActivated"

    },
    "QtGradientView\0currentGradientChanged\0"
    "\0id\0gradientActivated\0slotGradientAdded\0"
    "QGradient\0gradient\0slotGradientRenamed\0"
    "newId\0slotGradientChanged\0newGradient\0"
    "slotGradientRemoved\0slotNewGradient\0"
    "slotEditGradient\0slotRemoveGradient\0"
    "slotRenameGradient\0QListWidgetItem*\0"
    "item\0slotCurrentItemChanged\0"
    "slotGradientActivated"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QtGradientView[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   79,    2, 0x06 /* Public */,
       4,    1,   82,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    2,   85,    2, 0x08 /* Private */,
       8,    2,   90,    2, 0x08 /* Private */,
      10,    2,   95,    2, 0x08 /* Private */,
      12,    1,  100,    2, 0x08 /* Private */,
      13,    0,  103,    2, 0x08 /* Private */,
      14,    0,  104,    2, 0x08 /* Private */,
      15,    0,  105,    2, 0x08 /* Private */,
      16,    0,  106,    2, 0x08 /* Private */,
      16,    1,  107,    2, 0x08 /* Private */,
      19,    1,  110,    2, 0x08 /* Private */,
      20,    1,  113,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, 0x80000000 | 6,    3,    7,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    3,    9,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 6,    3,   11,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 17,   18,
    QMetaType::Void, 0x80000000 | 17,   18,
    QMetaType::Void, 0x80000000 | 17,   18,

       0        // eod
};

void QtGradientView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QtGradientView *_t = static_cast<QtGradientView *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->currentGradientChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->gradientActivated((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->slotGradientAdded((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QGradient(*)>(_a[2]))); break;
        case 3: _t->slotGradientRenamed((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 4: _t->slotGradientChanged((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QGradient(*)>(_a[2]))); break;
        case 5: _t->slotGradientRemoved((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->slotNewGradient(); break;
        case 7: _t->slotEditGradient(); break;
        case 8: _t->slotRemoveGradient(); break;
        case 9: _t->slotRenameGradient(); break;
        case 10: _t->slotRenameGradient((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 11: _t->slotCurrentItemChanged((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 12: _t->slotGradientActivated((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QtGradientView::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QtGradientView::currentGradientChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QtGradientView::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QtGradientView::gradientActivated)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject QtGradientView::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_QtGradientView.data,
      qt_meta_data_QtGradientView,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QtGradientView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QtGradientView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QtGradientView.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int QtGradientView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
    }
    return _id;
}

// SIGNAL 0
void QtGradientView::currentGradientChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QtGradientView::gradientActivated(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
