/****************************************************************************
** Meta object code from reading C++ file 'qquickwebenginecontextmenurequest_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../5.9.6/QtWebEngine/private/qquickwebenginecontextmenurequest_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qquickwebenginecontextmenurequest_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QQuickWebEngineContextMenuRequest_t {
    QByteArrayData data[20];
    char stringdata0[268];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QQuickWebEngineContextMenuRequest_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QQuickWebEngineContextMenuRequest_t qt_meta_stringdata_QQuickWebEngineContextMenuRequest = {
    {
QT_MOC_LITERAL(0, 0, 33), // "QQuickWebEngineContextMenuReq..."
QT_MOC_LITERAL(1, 34, 1), // "x"
QT_MOC_LITERAL(2, 36, 1), // "y"
QT_MOC_LITERAL(3, 38, 12), // "selectedText"
QT_MOC_LITERAL(4, 51, 8), // "linkText"
QT_MOC_LITERAL(5, 60, 7), // "linkUrl"
QT_MOC_LITERAL(6, 68, 8), // "mediaUrl"
QT_MOC_LITERAL(7, 77, 9), // "mediaType"
QT_MOC_LITERAL(8, 87, 9), // "MediaType"
QT_MOC_LITERAL(9, 97, 17), // "isContentEditable"
QT_MOC_LITERAL(10, 115, 14), // "misspelledWord"
QT_MOC_LITERAL(11, 130, 23), // "spellCheckerSuggestions"
QT_MOC_LITERAL(12, 154, 8), // "accepted"
QT_MOC_LITERAL(13, 163, 13), // "MediaTypeNone"
QT_MOC_LITERAL(14, 177, 14), // "MediaTypeImage"
QT_MOC_LITERAL(15, 192, 14), // "MediaTypeVideo"
QT_MOC_LITERAL(16, 207, 14), // "MediaTypeAudio"
QT_MOC_LITERAL(17, 222, 15), // "MediaTypeCanvas"
QT_MOC_LITERAL(18, 238, 13), // "MediaTypeFile"
QT_MOC_LITERAL(19, 252, 15) // "MediaTypePlugin"

    },
    "QQuickWebEngineContextMenuRequest\0x\0"
    "y\0selectedText\0linkText\0linkUrl\0"
    "mediaUrl\0mediaType\0MediaType\0"
    "isContentEditable\0misspelledWord\0"
    "spellCheckerSuggestions\0accepted\0"
    "MediaTypeNone\0MediaTypeImage\0"
    "MediaTypeVideo\0MediaTypeAudio\0"
    "MediaTypeCanvas\0MediaTypeFile\0"
    "MediaTypePlugin"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QQuickWebEngineContextMenuRequest[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
      11,   14, // properties
       1,   47, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, QMetaType::Int, 0x00095c01,
       2, QMetaType::Int, 0x00095c01,
       3, QMetaType::QString, 0x00095c01,
       4, QMetaType::QString, 0x00095c01,
       5, QMetaType::QUrl, 0x00095c01,
       6, QMetaType::QUrl, 0x00095c01,
       7, 0x80000000 | 8, 0x00095c09,
       9, QMetaType::Bool, 0x00095c01,
      10, QMetaType::QString, 0x00095c01,
      11, QMetaType::QStringList, 0x00095c01,
      12, QMetaType::Bool, 0x00095903,

 // enums: name, flags, count, data
       8, 0x0,    7,   51,

 // enum data: key, value
      13, uint(QQuickWebEngineContextMenuRequest::MediaTypeNone),
      14, uint(QQuickWebEngineContextMenuRequest::MediaTypeImage),
      15, uint(QQuickWebEngineContextMenuRequest::MediaTypeVideo),
      16, uint(QQuickWebEngineContextMenuRequest::MediaTypeAudio),
      17, uint(QQuickWebEngineContextMenuRequest::MediaTypeCanvas),
      18, uint(QQuickWebEngineContextMenuRequest::MediaTypeFile),
      19, uint(QQuickWebEngineContextMenuRequest::MediaTypePlugin),

       0        // eod
};

void QQuickWebEngineContextMenuRequest::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{

#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty) {
        QQuickWebEngineContextMenuRequest *_t = static_cast<QQuickWebEngineContextMenuRequest *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->x(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->y(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->selectedText(); break;
        case 3: *reinterpret_cast< QString*>(_v) = _t->linkText(); break;
        case 4: *reinterpret_cast< QUrl*>(_v) = _t->linkUrl(); break;
        case 5: *reinterpret_cast< QUrl*>(_v) = _t->mediaUrl(); break;
        case 6: *reinterpret_cast< MediaType*>(_v) = _t->mediaType(); break;
        case 7: *reinterpret_cast< bool*>(_v) = _t->isContentEditable(); break;
        case 8: *reinterpret_cast< QString*>(_v) = _t->misspelledWord(); break;
        case 9: *reinterpret_cast< QStringList*>(_v) = _t->spellCheckerSuggestions(); break;
        case 10: *reinterpret_cast< bool*>(_v) = _t->isAccepted(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QQuickWebEngineContextMenuRequest *_t = static_cast<QQuickWebEngineContextMenuRequest *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 10: _t->setAccepted(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject QQuickWebEngineContextMenuRequest::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QQuickWebEngineContextMenuRequest.data,
      qt_meta_data_QQuickWebEngineContextMenuRequest,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QQuickWebEngineContextMenuRequest::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QQuickWebEngineContextMenuRequest::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QQuickWebEngineContextMenuRequest.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QQuickWebEngineContextMenuRequest::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
   if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 11;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 11;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 11;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 11;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 11;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
