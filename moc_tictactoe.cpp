/****************************************************************************
** Meta object code from reading C++ file 'tictactoe.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "tictactoe.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tictactoe.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_TicTacToe_t {
    QByteArrayData data[7];
    char stringdata[69];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_TicTacToe_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_TicTacToe_t qt_meta_stringdata_TicTacToe = {
    {
QT_MOC_LITERAL(0, 0, 9),
QT_MOC_LITERAL(1, 10, 10),
QT_MOC_LITERAL(2, 21, 0),
QT_MOC_LITERAL(3, 22, 12),
QT_MOC_LITERAL(4, 35, 10),
QT_MOC_LITERAL(5, 46, 9),
QT_MOC_LITERAL(6, 56, 11)
    },
    "TicTacToe\0humanMoves\0\0computerMove\0"
    "prediction\0humanMove\0currentGrid\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TicTacToe[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x06,
       3,    2,   35,    2, 0x06,
       4,    1,   40,    2, 0x06,

 // slots: name, argc, parameters, tag, flags
       5,    2,   43,    2, 0x0a,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    2,    2,
    QMetaType::Void, QMetaType::QString,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    2,    6,

       0        // eod
};

void TicTacToe::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        TicTacToe *_t = static_cast<TicTacToe *>(_o);
        switch (_id) {
        case 0: _t->humanMoves(); break;
        case 1: _t->computerMove((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 2: _t->prediction((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->humanMove((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (TicTacToe::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TicTacToe::humanMoves)) {
                *result = 0;
            }
        }
        {
            typedef void (TicTacToe::*_t)(int , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TicTacToe::computerMove)) {
                *result = 1;
            }
        }
        {
            typedef void (TicTacToe::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&TicTacToe::prediction)) {
                *result = 2;
            }
        }
    }
}

const QMetaObject TicTacToe::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_TicTacToe.data,
      qt_meta_data_TicTacToe,  qt_static_metacall, 0, 0}
};


const QMetaObject *TicTacToe::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TicTacToe::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_TicTacToe.stringdata))
        return static_cast<void*>(const_cast< TicTacToe*>(this));
    return QObject::qt_metacast(_clname);
}

int TicTacToe::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void TicTacToe::humanMoves()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void TicTacToe::computerMove(int _t1, int _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void TicTacToe::prediction(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
