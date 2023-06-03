/****************************************************************************
** Meta object code from reading C++ file 'messageeditorwidgets.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../messageeditorwidgets.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'messageeditorwidgets.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ExpandingTextEdit_t {
    QByteArrayData data[5];
    char stringdata0[71];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ExpandingTextEdit_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ExpandingTextEdit_t qt_meta_stringdata_ExpandingTextEdit = {
    {
QT_MOC_LITERAL(0, 0, 17), // "ExpandingTextEdit"
QT_MOC_LITERAL(1, 18, 12), // "updateHeight"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 12), // "documentSize"
QT_MOC_LITERAL(4, 45, 25) // "reallyEnsureCursorVisible"

    },
    "ExpandingTextEdit\0updateHeight\0\0"
    "documentSize\0reallyEnsureCursorVisible"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ExpandingTextEdit[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x08 /* Private */,
       4,    0,   27,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QSizeF,    3,
    QMetaType::Void,

       0        // eod
};

void ExpandingTextEdit::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ExpandingTextEdit *_t = static_cast<ExpandingTextEdit *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateHeight((*reinterpret_cast< const QSizeF(*)>(_a[1]))); break;
        case 1: _t->reallyEnsureCursorVisible(); break;
        default: ;
        }
    }
}

const QMetaObject ExpandingTextEdit::staticMetaObject = {
    { &QTextEdit::staticMetaObject, qt_meta_stringdata_ExpandingTextEdit.data,
      qt_meta_data_ExpandingTextEdit,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *ExpandingTextEdit::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ExpandingTextEdit::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ExpandingTextEdit.stringdata0))
        return static_cast<void*>(this);
    return QTextEdit::qt_metacast(_clname);
}

int ExpandingTextEdit::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTextEdit::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_FormatTextEdit_t {
    QByteArrayData data[8];
    char stringdata0[90];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FormatTextEdit_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FormatTextEdit_t qt_meta_stringdata_FormatTextEdit = {
    {
QT_MOC_LITERAL(0, 0, 14), // "FormatTextEdit"
QT_MOC_LITERAL(1, 15, 15), // "editorDestroyed"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 12), // "setPlainText"
QT_MOC_LITERAL(4, 45, 4), // "text"
QT_MOC_LITERAL(5, 50, 10), // "userAction"
QT_MOC_LITERAL(6, 61, 22), // "setVisualizeWhitespace"
QT_MOC_LITERAL(7, 84, 5) // "value"

    },
    "FormatTextEdit\0editorDestroyed\0\0"
    "setPlainText\0text\0userAction\0"
    "setVisualizeWhitespace\0value"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FormatTextEdit[] = {

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
       1,    0,   29,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    2,   30,    2, 0x0a /* Public */,
       6,    1,   35,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::Bool,    4,    5,
    QMetaType::Void, QMetaType::Bool,    7,

       0        // eod
};

void FormatTextEdit::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        FormatTextEdit *_t = static_cast<FormatTextEdit *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->editorDestroyed(); break;
        case 1: _t->setPlainText((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 2: _t->setVisualizeWhitespace((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (FormatTextEdit::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FormatTextEdit::editorDestroyed)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject FormatTextEdit::staticMetaObject = {
    { &ExpandingTextEdit::staticMetaObject, qt_meta_stringdata_FormatTextEdit.data,
      qt_meta_data_FormatTextEdit,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *FormatTextEdit::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FormatTextEdit::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FormatTextEdit.stringdata0))
        return static_cast<void*>(this);
    return ExpandingTextEdit::qt_metacast(_clname);
}

int FormatTextEdit::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ExpandingTextEdit::qt_metacall(_c, _id, _a);
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
void FormatTextEdit::editorDestroyed()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
struct qt_meta_stringdata_FormWidget_t {
    QByteArrayData data[8];
    char stringdata0[111];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FormWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FormWidget_t qt_meta_stringdata_FormWidget = {
    {
QT_MOC_LITERAL(0, 0, 10), // "FormWidget"
QT_MOC_LITERAL(1, 11, 11), // "textChanged"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 10), // "QTextEdit*"
QT_MOC_LITERAL(4, 35, 16), // "selectionChanged"
QT_MOC_LITERAL(5, 52, 21), // "cursorPositionChanged"
QT_MOC_LITERAL(6, 74, 20), // "slotSelectionChanged"
QT_MOC_LITERAL(7, 95, 15) // "slotTextChanged"

    },
    "FormWidget\0textChanged\0\0QTextEdit*\0"
    "selectionChanged\0cursorPositionChanged\0"
    "slotSelectionChanged\0slotTextChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FormWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x06 /* Public */,
       4,    1,   42,    2, 0x06 /* Public */,
       5,    0,   45,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    0,   46,    2, 0x08 /* Private */,
       7,    0,   47,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void FormWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        FormWidget *_t = static_cast<FormWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->textChanged((*reinterpret_cast< QTextEdit*(*)>(_a[1]))); break;
        case 1: _t->selectionChanged((*reinterpret_cast< QTextEdit*(*)>(_a[1]))); break;
        case 2: _t->cursorPositionChanged(); break;
        case 3: _t->slotSelectionChanged(); break;
        case 4: _t->slotTextChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTextEdit* >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTextEdit* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (FormWidget::*_t)(QTextEdit * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FormWidget::textChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (FormWidget::*_t)(QTextEdit * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FormWidget::selectionChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (FormWidget::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FormWidget::cursorPositionChanged)) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject FormWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_FormWidget.data,
      qt_meta_data_FormWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *FormWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FormWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FormWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int FormWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void FormWidget::textChanged(QTextEdit * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void FormWidget::selectionChanged(QTextEdit * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void FormWidget::cursorPositionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
struct qt_meta_stringdata_FormMultiWidget_t {
    QByteArrayData data[11];
    char stringdata0[167];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FormMultiWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FormMultiWidget_t qt_meta_stringdata_FormMultiWidget = {
    {
QT_MOC_LITERAL(0, 0, 15), // "FormMultiWidget"
QT_MOC_LITERAL(1, 16, 13), // "editorCreated"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 10), // "QTextEdit*"
QT_MOC_LITERAL(4, 42, 11), // "textChanged"
QT_MOC_LITERAL(5, 54, 16), // "selectionChanged"
QT_MOC_LITERAL(6, 71, 21), // "cursorPositionChanged"
QT_MOC_LITERAL(7, 93, 15), // "slotTextChanged"
QT_MOC_LITERAL(8, 109, 20), // "slotSelectionChanged"
QT_MOC_LITERAL(9, 130, 18), // "minusButtonClicked"
QT_MOC_LITERAL(10, 149, 17) // "plusButtonClicked"

    },
    "FormMultiWidget\0editorCreated\0\0"
    "QTextEdit*\0textChanged\0selectionChanged\0"
    "cursorPositionChanged\0slotTextChanged\0"
    "slotSelectionChanged\0minusButtonClicked\0"
    "plusButtonClicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FormMultiWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x06 /* Public */,
       4,    1,   57,    2, 0x06 /* Public */,
       5,    1,   60,    2, 0x06 /* Public */,
       6,    0,   63,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    0,   64,    2, 0x08 /* Private */,
       8,    0,   65,    2, 0x08 /* Private */,
       9,    0,   66,    2, 0x08 /* Private */,
      10,    0,   67,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void FormMultiWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        FormMultiWidget *_t = static_cast<FormMultiWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->editorCreated((*reinterpret_cast< QTextEdit*(*)>(_a[1]))); break;
        case 1: _t->textChanged((*reinterpret_cast< QTextEdit*(*)>(_a[1]))); break;
        case 2: _t->selectionChanged((*reinterpret_cast< QTextEdit*(*)>(_a[1]))); break;
        case 3: _t->cursorPositionChanged(); break;
        case 4: _t->slotTextChanged(); break;
        case 5: _t->slotSelectionChanged(); break;
        case 6: _t->minusButtonClicked(); break;
        case 7: _t->plusButtonClicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTextEdit* >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTextEdit* >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTextEdit* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (FormMultiWidget::*_t)(QTextEdit * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FormMultiWidget::editorCreated)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (FormMultiWidget::*_t)(QTextEdit * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FormMultiWidget::textChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (FormMultiWidget::*_t)(QTextEdit * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FormMultiWidget::selectionChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (FormMultiWidget::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FormMultiWidget::cursorPositionChanged)) {
                *result = 3;
                return;
            }
        }
    }
}

const QMetaObject FormMultiWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_FormMultiWidget.data,
      qt_meta_data_FormMultiWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *FormMultiWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FormMultiWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FormMultiWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int FormMultiWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void FormMultiWidget::editorCreated(QTextEdit * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void FormMultiWidget::textChanged(QTextEdit * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void FormMultiWidget::selectionChanged(QTextEdit * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void FormMultiWidget::cursorPositionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
