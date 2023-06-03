/****************************************************************************
** Meta object code from reading C++ file 'qdeclarativeplaylist_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../qdeclarativeplaylist_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qdeclarativeplaylist_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QDeclarativePlaylistItem_t {
    QByteArrayData data[2];
    char stringdata0[32];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QDeclarativePlaylistItem_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QDeclarativePlaylistItem_t qt_meta_stringdata_QDeclarativePlaylistItem = {
    {
QT_MOC_LITERAL(0, 0, 24), // "QDeclarativePlaylistItem"
QT_MOC_LITERAL(1, 25, 6) // "source"

    },
    "QDeclarativePlaylistItem\0source"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QDeclarativePlaylistItem[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       1,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, QMetaType::QUrl, 0x00095103,

       0        // eod
};

void QDeclarativePlaylistItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{

#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty) {
        QDeclarativePlaylistItem *_t = static_cast<QDeclarativePlaylistItem *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QUrl*>(_v) = _t->source(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QDeclarativePlaylistItem *_t = static_cast<QDeclarativePlaylistItem *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setSource(*reinterpret_cast< QUrl*>(_v)); break;
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

const QMetaObject QDeclarativePlaylistItem::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QDeclarativePlaylistItem.data,
      qt_meta_data_QDeclarativePlaylistItem,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QDeclarativePlaylistItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QDeclarativePlaylistItem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QDeclarativePlaylistItem.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QDeclarativePlaylistItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
   if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 1;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
struct qt_meta_stringdata_QDeclarativePlaylist_t {
    QByteArrayData data[71];
    char stringdata0[888];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QDeclarativePlaylist_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QDeclarativePlaylist_t qt_meta_stringdata_QDeclarativePlaylist = {
    {
QT_MOC_LITERAL(0, 0, 20), // "QDeclarativePlaylist"
QT_MOC_LITERAL(1, 21, 15), // "DefaultProperty"
QT_MOC_LITERAL(2, 37, 5), // "items"
QT_MOC_LITERAL(3, 43, 19), // "playbackModeChanged"
QT_MOC_LITERAL(4, 63, 0), // ""
QT_MOC_LITERAL(5, 64, 24), // "currentItemSourceChanged"
QT_MOC_LITERAL(6, 89, 19), // "currentIndexChanged"
QT_MOC_LITERAL(7, 109, 16), // "itemCountChanged"
QT_MOC_LITERAL(8, 126, 15), // "readOnlyChanged"
QT_MOC_LITERAL(9, 142, 12), // "errorChanged"
QT_MOC_LITERAL(10, 155, 21), // "itemAboutToBeInserted"
QT_MOC_LITERAL(11, 177, 5), // "start"
QT_MOC_LITERAL(12, 183, 3), // "end"
QT_MOC_LITERAL(13, 187, 12), // "itemInserted"
QT_MOC_LITERAL(14, 200, 20), // "itemAboutToBeRemoved"
QT_MOC_LITERAL(15, 221, 11), // "itemRemoved"
QT_MOC_LITERAL(16, 233, 11), // "itemChanged"
QT_MOC_LITERAL(17, 245, 6), // "loaded"
QT_MOC_LITERAL(18, 252, 10), // "loadFailed"
QT_MOC_LITERAL(19, 263, 5), // "error"
QT_MOC_LITERAL(20, 269, 27), // "QDeclarativePlaylist::Error"
QT_MOC_LITERAL(21, 297, 11), // "errorString"
QT_MOC_LITERAL(22, 309, 10), // "itemSource"
QT_MOC_LITERAL(23, 320, 5), // "index"
QT_MOC_LITERAL(24, 326, 9), // "nextIndex"
QT_MOC_LITERAL(25, 336, 5), // "steps"
QT_MOC_LITERAL(26, 342, 13), // "previousIndex"
QT_MOC_LITERAL(27, 356, 4), // "next"
QT_MOC_LITERAL(28, 361, 8), // "previous"
QT_MOC_LITERAL(29, 370, 7), // "shuffle"
QT_MOC_LITERAL(30, 378, 4), // "load"
QT_MOC_LITERAL(31, 383, 8), // "location"
QT_MOC_LITERAL(32, 392, 6), // "format"
QT_MOC_LITERAL(33, 399, 4), // "save"
QT_MOC_LITERAL(34, 404, 7), // "addItem"
QT_MOC_LITERAL(35, 412, 6), // "source"
QT_MOC_LITERAL(36, 419, 8), // "addItems"
QT_MOC_LITERAL(37, 428, 11), // "QList<QUrl>"
QT_MOC_LITERAL(38, 440, 7), // "sources"
QT_MOC_LITERAL(39, 448, 10), // "insertItem"
QT_MOC_LITERAL(40, 459, 11), // "insertItems"
QT_MOC_LITERAL(41, 471, 8), // "moveItem"
QT_MOC_LITERAL(42, 480, 4), // "from"
QT_MOC_LITERAL(43, 485, 2), // "to"
QT_MOC_LITERAL(44, 488, 10), // "removeItem"
QT_MOC_LITERAL(45, 499, 11), // "removeItems"
QT_MOC_LITERAL(46, 511, 5), // "clear"
QT_MOC_LITERAL(47, 517, 25), // "_q_mediaAboutToBeInserted"
QT_MOC_LITERAL(48, 543, 16), // "_q_mediaInserted"
QT_MOC_LITERAL(49, 560, 24), // "_q_mediaAboutToBeRemoved"
QT_MOC_LITERAL(50, 585, 15), // "_q_mediaRemoved"
QT_MOC_LITERAL(51, 601, 15), // "_q_mediaChanged"
QT_MOC_LITERAL(52, 617, 13), // "_q_loadFailed"
QT_MOC_LITERAL(53, 631, 12), // "playbackMode"
QT_MOC_LITERAL(54, 644, 12), // "PlaybackMode"
QT_MOC_LITERAL(55, 657, 17), // "currentItemSource"
QT_MOC_LITERAL(56, 675, 12), // "currentIndex"
QT_MOC_LITERAL(57, 688, 9), // "itemCount"
QT_MOC_LITERAL(58, 698, 8), // "readOnly"
QT_MOC_LITERAL(59, 707, 5), // "Error"
QT_MOC_LITERAL(60, 713, 42), // "QQmlListProperty<QDeclarative..."
QT_MOC_LITERAL(61, 756, 15), // "CurrentItemOnce"
QT_MOC_LITERAL(62, 772, 17), // "CurrentItemInLoop"
QT_MOC_LITERAL(63, 790, 10), // "Sequential"
QT_MOC_LITERAL(64, 801, 4), // "Loop"
QT_MOC_LITERAL(65, 806, 6), // "Random"
QT_MOC_LITERAL(66, 813, 7), // "NoError"
QT_MOC_LITERAL(67, 821, 11), // "FormatError"
QT_MOC_LITERAL(68, 833, 23), // "FormatNotSupportedError"
QT_MOC_LITERAL(69, 857, 12), // "NetworkError"
QT_MOC_LITERAL(70, 870, 17) // "AccessDeniedError"

    },
    "QDeclarativePlaylist\0DefaultProperty\0"
    "items\0playbackModeChanged\0\0"
    "currentItemSourceChanged\0currentIndexChanged\0"
    "itemCountChanged\0readOnlyChanged\0"
    "errorChanged\0itemAboutToBeInserted\0"
    "start\0end\0itemInserted\0itemAboutToBeRemoved\0"
    "itemRemoved\0itemChanged\0loaded\0"
    "loadFailed\0error\0QDeclarativePlaylist::Error\0"
    "errorString\0itemSource\0index\0nextIndex\0"
    "steps\0previousIndex\0next\0previous\0"
    "shuffle\0load\0location\0format\0save\0"
    "addItem\0source\0addItems\0QList<QUrl>\0"
    "sources\0insertItem\0insertItems\0moveItem\0"
    "from\0to\0removeItem\0removeItems\0clear\0"
    "_q_mediaAboutToBeInserted\0_q_mediaInserted\0"
    "_q_mediaAboutToBeRemoved\0_q_mediaRemoved\0"
    "_q_mediaChanged\0_q_loadFailed\0"
    "playbackMode\0PlaybackMode\0currentItemSource\0"
    "currentIndex\0itemCount\0readOnly\0Error\0"
    "QQmlListProperty<QDeclarativePlaylistItem>\0"
    "CurrentItemOnce\0CurrentItemInLoop\0"
    "Sequential\0Loop\0Random\0NoError\0"
    "FormatError\0FormatNotSupportedError\0"
    "NetworkError\0AccessDeniedError"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QDeclarativePlaylist[] = {

 // content:
       7,       // revision
       0,       // classname
       1,   14, // classinfo
      40,   16, // methods
       8,  380, // properties
       2,  412, // enums/sets
       0,    0, // constructors
       0,       // flags
      14,       // signalCount

 // classinfo: key, value
       1,    2,

 // signals: name, argc, parameters, tag, flags
       3,    0,  256,    4, 0x06 /* Public */,
       5,    0,  257,    4, 0x06 /* Public */,
       6,    0,  258,    4, 0x06 /* Public */,
       7,    0,  259,    4, 0x06 /* Public */,
       8,    0,  260,    4, 0x06 /* Public */,
       9,    0,  261,    4, 0x06 /* Public */,
      10,    2,  262,    4, 0x06 /* Public */,
      13,    2,  267,    4, 0x06 /* Public */,
      14,    2,  272,    4, 0x06 /* Public */,
      15,    2,  277,    4, 0x06 /* Public */,
      16,    2,  282,    4, 0x06 /* Public */,
      17,    0,  287,    4, 0x06 /* Public */,
      18,    0,  288,    4, 0x06 /* Public */,
      19,    2,  289,    4, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      22,    1,  294,    4, 0x0a /* Public */,
      24,    1,  297,    4, 0x0a /* Public */,
      24,    0,  300,    4, 0x2a /* Public | MethodCloned */,
      26,    1,  301,    4, 0x0a /* Public */,
      26,    0,  304,    4, 0x2a /* Public | MethodCloned */,
      27,    0,  305,    4, 0x0a /* Public */,
      28,    0,  306,    4, 0x0a /* Public */,
      29,    0,  307,    4, 0x0a /* Public */,
      30,    2,  308,    4, 0x0a /* Public */,
      30,    1,  313,    4, 0x2a /* Public | MethodCloned */,
      33,    2,  316,    4, 0x0a /* Public */,
      33,    1,  321,    4, 0x2a /* Public | MethodCloned */,
      34,    1,  324,    4, 0x0a /* Public */,
      36,    1,  327,    4, 0x8a /* Public | MethodRevisioned */,
      39,    2,  330,    4, 0x0a /* Public */,
      40,    2,  335,    4, 0x8a /* Public | MethodRevisioned */,
      41,    2,  340,    4, 0x8a /* Public | MethodRevisioned */,
      44,    1,  345,    4, 0x0a /* Public */,
      45,    2,  348,    4, 0x8a /* Public | MethodRevisioned */,
      46,    0,  353,    4, 0x0a /* Public */,
      47,    2,  354,    4, 0x08 /* Private */,
      48,    2,  359,    4, 0x08 /* Private */,
      49,    2,  364,    4, 0x08 /* Private */,
      50,    2,  369,    4, 0x08 /* Private */,
      51,    2,  374,    4, 0x08 /* Private */,
      52,    0,  379,    4, 0x08 /* Private */,

 // signals: revision
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,

 // slots: revision
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       1,
       0,
       1,
       1,
       0,
       1,
       0,
       0,
       0,
       0,
       0,
       0,
       0,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   11,   12,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   11,   12,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   11,   12,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   11,   12,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   11,   12,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 20, QMetaType::QString,   19,   21,

 // slots: parameters
    QMetaType::QUrl, QMetaType::Int,   23,
    QMetaType::Int, QMetaType::Int,   25,
    QMetaType::Int,
    QMetaType::Int, QMetaType::Int,   25,
    QMetaType::Int,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QUrl, QMetaType::QString,   31,   32,
    QMetaType::Void, QMetaType::QUrl,   31,
    QMetaType::Bool, QMetaType::QUrl, QMetaType::QString,   31,   32,
    QMetaType::Bool, QMetaType::QUrl,   31,
    QMetaType::Bool, QMetaType::QUrl,   35,
    QMetaType::Bool, 0x80000000 | 37,   38,
    QMetaType::Bool, QMetaType::Int, QMetaType::QUrl,   23,   35,
    QMetaType::Bool, QMetaType::Int, 0x80000000 | 37,   23,   38,
    QMetaType::Bool, QMetaType::Int, QMetaType::Int,   42,   43,
    QMetaType::Bool, QMetaType::Int,   23,
    QMetaType::Bool, QMetaType::Int, QMetaType::Int,   11,   12,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   11,   12,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   11,   12,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   11,   12,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   11,   12,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   11,   12,
    QMetaType::Void,

 // properties: name, type, flags
      53, 0x80000000 | 54, 0x0049510b,
      55, QMetaType::QUrl, 0x00495001,
      56, QMetaType::Int, 0x00495103,
      57, QMetaType::Int, 0x00495001,
      58, QMetaType::Bool, 0x00495001,
      19, 0x80000000 | 59, 0x00495009,
      21, QMetaType::QString, 0x00495001,
       2, 0x80000000 | 60, 0x00094009,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,
       4,
       5,
       5,
       0,

 // enums: name, flags, count, data
      54, 0x0,    5,  420,
      59, 0x0,    5,  430,

 // enum data: key, value
      61, uint(QDeclarativePlaylist::CurrentItemOnce),
      62, uint(QDeclarativePlaylist::CurrentItemInLoop),
      63, uint(QDeclarativePlaylist::Sequential),
      64, uint(QDeclarativePlaylist::Loop),
      65, uint(QDeclarativePlaylist::Random),
      66, uint(QDeclarativePlaylist::NoError),
      67, uint(QDeclarativePlaylist::FormatError),
      68, uint(QDeclarativePlaylist::FormatNotSupportedError),
      69, uint(QDeclarativePlaylist::NetworkError),
      70, uint(QDeclarativePlaylist::AccessDeniedError),

       0        // eod
};

void QDeclarativePlaylist::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QDeclarativePlaylist *_t = static_cast<QDeclarativePlaylist *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->playbackModeChanged(); break;
        case 1: _t->currentItemSourceChanged(); break;
        case 2: _t->currentIndexChanged(); break;
        case 3: _t->itemCountChanged(); break;
        case 4: _t->readOnlyChanged(); break;
        case 5: _t->errorChanged(); break;
        case 6: _t->itemAboutToBeInserted((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 7: _t->itemInserted((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 8: _t->itemAboutToBeRemoved((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 9: _t->itemRemoved((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 10: _t->itemChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 11: _t->loaded(); break;
        case 12: _t->loadFailed(); break;
        case 13: _t->error((*reinterpret_cast< QDeclarativePlaylist::Error(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 14: { QUrl _r = _t->itemSource((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QUrl*>(_a[0]) = std::move(_r); }  break;
        case 15: { int _r = _t->nextIndex((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 16: { int _r = _t->nextIndex();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 17: { int _r = _t->previousIndex((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 18: { int _r = _t->previousIndex();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 19: _t->next(); break;
        case 20: _t->previous(); break;
        case 21: _t->shuffle(); break;
        case 22: _t->load((*reinterpret_cast< const QUrl(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 23: _t->load((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 24: { bool _r = _t->save((*reinterpret_cast< const QUrl(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 25: { bool _r = _t->save((*reinterpret_cast< const QUrl(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 26: { bool _r = _t->addItem((*reinterpret_cast< const QUrl(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 27: { bool _r = _t->addItems((*reinterpret_cast< const QList<QUrl>(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 28: { bool _r = _t->insertItem((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QUrl(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 29: { bool _r = _t->insertItems((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QList<QUrl>(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 30: { bool _r = _t->moveItem((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 31: { bool _r = _t->removeItem((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 32: { bool _r = _t->removeItems((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 33: { bool _r = _t->clear();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 34: _t->_q_mediaAboutToBeInserted((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 35: _t->_q_mediaInserted((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 36: _t->_q_mediaAboutToBeRemoved((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 37: _t->_q_mediaRemoved((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 38: _t->_q_mediaChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 39: _t->_q_loadFailed(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 27:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<QUrl> >(); break;
            }
            break;
        case 29:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<QUrl> >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QDeclarativePlaylist::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QDeclarativePlaylist::playbackModeChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QDeclarativePlaylist::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QDeclarativePlaylist::currentItemSourceChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QDeclarativePlaylist::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QDeclarativePlaylist::currentIndexChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (QDeclarativePlaylist::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QDeclarativePlaylist::itemCountChanged)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (QDeclarativePlaylist::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QDeclarativePlaylist::readOnlyChanged)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (QDeclarativePlaylist::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QDeclarativePlaylist::errorChanged)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (QDeclarativePlaylist::*_t)(int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QDeclarativePlaylist::itemAboutToBeInserted)) {
                *result = 6;
                return;
            }
        }
        {
            typedef void (QDeclarativePlaylist::*_t)(int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QDeclarativePlaylist::itemInserted)) {
                *result = 7;
                return;
            }
        }
        {
            typedef void (QDeclarativePlaylist::*_t)(int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QDeclarativePlaylist::itemAboutToBeRemoved)) {
                *result = 8;
                return;
            }
        }
        {
            typedef void (QDeclarativePlaylist::*_t)(int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QDeclarativePlaylist::itemRemoved)) {
                *result = 9;
                return;
            }
        }
        {
            typedef void (QDeclarativePlaylist::*_t)(int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QDeclarativePlaylist::itemChanged)) {
                *result = 10;
                return;
            }
        }
        {
            typedef void (QDeclarativePlaylist::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QDeclarativePlaylist::loaded)) {
                *result = 11;
                return;
            }
        }
        {
            typedef void (QDeclarativePlaylist::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QDeclarativePlaylist::loadFailed)) {
                *result = 12;
                return;
            }
        }
        {
            typedef void (QDeclarativePlaylist::*_t)(QDeclarativePlaylist::Error , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QDeclarativePlaylist::error)) {
                *result = 13;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QDeclarativePlaylist *_t = static_cast<QDeclarativePlaylist *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< PlaybackMode*>(_v) = _t->playbackMode(); break;
        case 1: *reinterpret_cast< QUrl*>(_v) = _t->currentItemSource(); break;
        case 2: *reinterpret_cast< int*>(_v) = _t->currentIndex(); break;
        case 3: *reinterpret_cast< int*>(_v) = _t->itemCount(); break;
        case 4: *reinterpret_cast< bool*>(_v) = _t->readOnly(); break;
        case 5: *reinterpret_cast< Error*>(_v) = _t->error(); break;
        case 6: *reinterpret_cast< QString*>(_v) = _t->errorString(); break;
        case 7: *reinterpret_cast< QQmlListProperty<QDeclarativePlaylistItem>*>(_v) = _t->items(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QDeclarativePlaylist *_t = static_cast<QDeclarativePlaylist *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setPlaybackMode(*reinterpret_cast< PlaybackMode*>(_v)); break;
        case 2: _t->setCurrentIndex(*reinterpret_cast< int*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QDeclarativePlaylist::staticMetaObject = {
    { &QAbstractListModel::staticMetaObject, qt_meta_stringdata_QDeclarativePlaylist.data,
      qt_meta_data_QDeclarativePlaylist,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QDeclarativePlaylist::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QDeclarativePlaylist::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QDeclarativePlaylist.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "QQmlParserStatus"))
        return static_cast< QQmlParserStatus*>(this);
    if (!strcmp(_clname, "org.qt-project.Qt.QQmlParserStatus"))
        return static_cast< QQmlParserStatus*>(this);
    return QAbstractListModel::qt_metacast(_clname);
}

int QDeclarativePlaylist::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractListModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 40)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 40;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 40)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 40;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 8;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QDeclarativePlaylist::playbackModeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QDeclarativePlaylist::currentItemSourceChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void QDeclarativePlaylist::currentIndexChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void QDeclarativePlaylist::itemCountChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void QDeclarativePlaylist::readOnlyChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void QDeclarativePlaylist::errorChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void QDeclarativePlaylist::itemAboutToBeInserted(int _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void QDeclarativePlaylist::itemInserted(int _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void QDeclarativePlaylist::itemAboutToBeRemoved(int _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void QDeclarativePlaylist::itemRemoved(int _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void QDeclarativePlaylist::itemChanged(int _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void QDeclarativePlaylist::loaded()
{
    QMetaObject::activate(this, &staticMetaObject, 11, nullptr);
}

// SIGNAL 12
void QDeclarativePlaylist::loadFailed()
{
    QMetaObject::activate(this, &staticMetaObject, 12, nullptr);
}

// SIGNAL 13
void QDeclarativePlaylist::error(QDeclarativePlaylist::Error _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
