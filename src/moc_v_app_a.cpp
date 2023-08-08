/****************************************************************************
** Meta object code from reading C++ file 'v_app_a.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "v_app_a.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'v_app_a.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_V_App_A_t {
    const uint offsetsAndSize[44];
    char stringdata0[202];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_V_App_A_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_V_App_A_t qt_meta_stringdata_V_App_A = {
    {
QT_MOC_LITERAL(0, 7), // "V_App_A"
QT_MOC_LITERAL(8, 15), // "onAddQtaClicked"
QT_MOC_LITERAL(24, 0), // ""
QT_MOC_LITERAL(25, 2), // "id"
QT_MOC_LITERAL(28, 3), // "qta"
QT_MOC_LITERAL(32, 15), // "onAddFilClicked"
QT_MOC_LITERAL(48, 5), // "Film*"
QT_MOC_LITERAL(54, 1), // "f"
QT_MOC_LITERAL(56, 15), // "onAddMusClicked"
QT_MOC_LITERAL(72, 7), // "Musica*"
QT_MOC_LITERAL(80, 1), // "m"
QT_MOC_LITERAL(82, 15), // "onAddLibClicked"
QT_MOC_LITERAL(98, 6), // "Libro*"
QT_MOC_LITERAL(105, 1), // "l"
QT_MOC_LITERAL(107, 15), // "onAddPreClicked"
QT_MOC_LITERAL(123, 6), // "Premi*"
QT_MOC_LITERAL(130, 1), // "p"
QT_MOC_LITERAL(132, 13), // "addQtaClicked"
QT_MOC_LITERAL(146, 13), // "addFilClicked"
QT_MOC_LITERAL(160, 13), // "addMusClicked"
QT_MOC_LITERAL(174, 13), // "addLibClicked"
QT_MOC_LITERAL(188, 13) // "addPreClicked"

    },
    "V_App_A\0onAddQtaClicked\0\0id\0qta\0"
    "onAddFilClicked\0Film*\0f\0onAddMusClicked\0"
    "Musica*\0m\0onAddLibClicked\0Libro*\0l\0"
    "onAddPreClicked\0Premi*\0p\0addQtaClicked\0"
    "addFilClicked\0addMusClicked\0addLibClicked\0"
    "addPreClicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_V_App_A[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    2,   74,    2, 0x06,    1 /* Public */,
       5,    1,   79,    2, 0x06,    4 /* Public */,
       8,    1,   82,    2, 0x06,    6 /* Public */,
      11,    1,   85,    2, 0x06,    8 /* Public */,
      14,    1,   88,    2, 0x06,   10 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      17,    0,   91,    2, 0x08,   12 /* Private */,
      18,    0,   92,    2, 0x08,   13 /* Private */,
      19,    0,   93,    2, 0x08,   14 /* Private */,
      20,    0,   94,    2, 0x08,   15 /* Private */,
      21,    0,   95,    2, 0x08,   16 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::UShort,    3,    4,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, 0x80000000 | 12,   13,
    QMetaType::Void, 0x80000000 | 15,   16,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void V_App_A::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<V_App_A *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->onAddQtaClicked((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<ushort>>(_a[2]))); break;
        case 1: _t->onAddFilClicked((*reinterpret_cast< std::add_pointer_t<Film*>>(_a[1]))); break;
        case 2: _t->onAddMusClicked((*reinterpret_cast< std::add_pointer_t<Musica*>>(_a[1]))); break;
        case 3: _t->onAddLibClicked((*reinterpret_cast< std::add_pointer_t<Libro*>>(_a[1]))); break;
        case 4: _t->onAddPreClicked((*reinterpret_cast< std::add_pointer_t<Premi*>>(_a[1]))); break;
        case 5: _t->addQtaClicked(); break;
        case 6: _t->addFilClicked(); break;
        case 7: _t->addMusClicked(); break;
        case 8: _t->addLibClicked(); break;
        case 9: _t->addPreClicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (V_App_A::*)(QString , unsigned short int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&V_App_A::onAddQtaClicked)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (V_App_A::*)(Film * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&V_App_A::onAddFilClicked)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (V_App_A::*)(Musica * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&V_App_A::onAddMusClicked)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (V_App_A::*)(Libro * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&V_App_A::onAddLibClicked)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (V_App_A::*)(Premi * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&V_App_A::onAddPreClicked)) {
                *result = 4;
                return;
            }
        }
    }
}

const QMetaObject V_App_A::staticMetaObject = { {
    QMetaObject::SuperData::link<V_Main::staticMetaObject>(),
    qt_meta_stringdata_V_App_A.offsetsAndSize,
    qt_meta_data_V_App_A,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_V_App_A_t
, QtPrivate::TypeAndForceComplete<V_App_A, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<unsigned short int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<Film *, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<Musica *, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<Libro *, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<Premi *, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *V_App_A::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *V_App_A::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_V_App_A.stringdata0))
        return static_cast<void*>(this);
    return V_Main::qt_metacast(_clname);
}

int V_App_A::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = V_Main::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void V_App_A::onAddQtaClicked(QString _t1, unsigned short int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void V_App_A::onAddFilClicked(Film * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void V_App_A::onAddMusClicked(Musica * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void V_App_A::onAddLibClicked(Libro * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void V_App_A::onAddPreClicked(Premi * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
