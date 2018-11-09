/****************************************************************************
** Meta object code from reading C++ file 'easytrades.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Easytrades/easytrades.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'easytrades.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_EasyTrades_t {
    QByteArrayData data[12];
    char stringdata0[261];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_EasyTrades_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_EasyTrades_t qt_meta_stringdata_EasyTrades = {
    {
QT_MOC_LITERAL(0, 0, 10), // "EasyTrades"
QT_MOC_LITERAL(1, 11, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 35), // "on_actionStart_EasyTrades_tri..."
QT_MOC_LITERAL(4, 70, 23), // "on_actionExit_triggered"
QT_MOC_LITERAL(5, 94, 23), // "on_pushButton_4_clicked"
QT_MOC_LITERAL(6, 118, 23), // "on_pushButton_2_clicked"
QT_MOC_LITERAL(7, 142, 23), // "on_pushButton_3_clicked"
QT_MOC_LITERAL(8, 166, 24), // "on_actionAbout_triggered"
QT_MOC_LITERAL(9, 191, 36), // "on_actionCheck_for_Updates_tr..."
QT_MOC_LITERAL(10, 228, 17), // "on_action_started"
QT_MOC_LITERAL(11, 246, 14) // "on_action_test"

    },
    "EasyTrades\0on_pushButton_clicked\0\0"
    "on_actionStart_EasyTrades_triggered\0"
    "on_actionExit_triggered\0on_pushButton_4_clicked\0"
    "on_pushButton_2_clicked\0on_pushButton_3_clicked\0"
    "on_actionAbout_triggered\0"
    "on_actionCheck_for_Updates_triggered\0"
    "on_action_started\0on_action_test"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_EasyTrades[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   64,    2, 0x08 /* Private */,
       3,    0,   65,    2, 0x08 /* Private */,
       4,    0,   66,    2, 0x08 /* Private */,
       5,    0,   67,    2, 0x08 /* Private */,
       6,    0,   68,    2, 0x08 /* Private */,
       7,    0,   69,    2, 0x08 /* Private */,
       8,    0,   70,    2, 0x08 /* Private */,
       9,    0,   71,    2, 0x08 /* Private */,
      10,    0,   72,    2, 0x08 /* Private */,
      11,    0,   73,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void EasyTrades::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        EasyTrades *_t = static_cast<EasyTrades *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_pushButton_clicked(); break;
        case 1: _t->on_actionStart_EasyTrades_triggered(); break;
        case 2: _t->on_actionExit_triggered(); break;
        case 3: _t->on_pushButton_4_clicked(); break;
        case 4: _t->on_pushButton_2_clicked(); break;
        case 5: _t->on_pushButton_3_clicked(); break;
        case 6: _t->on_actionAbout_triggered(); break;
        case 7: _t->on_actionCheck_for_Updates_triggered(); break;
        case 8: _t->on_action_started(); break;
        case 9: _t->on_action_test(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject EasyTrades::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_EasyTrades.data,
      qt_meta_data_EasyTrades,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *EasyTrades::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *EasyTrades::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_EasyTrades.stringdata0))
        return static_cast<void*>(const_cast< EasyTrades*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int EasyTrades::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
