/****************************************************************************
** Meta object code from reading C++ file 'v_app_u.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "v_app_u.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'v_app_u.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_V_App_U_t {
    const uint offsetsAndSize[18];
    char stringdata0[111];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_V_App_U_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_V_App_U_t qt_meta_stringdata_V_App_U = {
    {
QT_MOC_LITERAL(0, 7), // "V_App_U"
QT_MOC_LITERAL(8, 17), // "onAddSaldoClicked"
QT_MOC_LITERAL(26, 0), // ""
QT_MOC_LITERAL(27, 1), // "s"
QT_MOC_LITERAL(29, 17), // "onDeleteTriggered"
QT_MOC_LITERAL(47, 16), // "onImpUtTriggered"
QT_MOC_LITERAL(64, 15), // "addSaldoClicked"
QT_MOC_LITERAL(80, 15), // "deleteTriggered"
QT_MOC_LITERAL(96, 14) // "impUtTriggered"

    },
    "V_App_U\0onAddSaldoClicked\0\0s\0"
    "onDeleteTriggered\0onImpUtTriggered\0"
    "addSaldoClicked\0deleteTriggered\0"
    "impUtTriggered"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_V_App_U[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   50,    2, 0x06,    1 /* Public */,
       4,    0,   53,    2, 0x06,    3 /* Public */,
       5,    0,   54,    2, 0x06,    4 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       6,    0,   55,    2, 0x0a,    5 /* Public */,
       7,    0,   56,    2, 0x0a,    6 /* Public */,
       8,    0,   57,    2, 0x0a,    7 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Double,    3,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void V_App_U::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<V_App_U *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->onAddSaldoClicked((*reinterpret_cast< std::add_pointer_t<double>>(_a[1]))); break;
        case 1: _t->onDeleteTriggered(); break;
        case 2: _t->onImpUtTriggered(); break;
        case 3: _t->addSaldoClicked(); break;
        case 4: _t->deleteTriggered(); break;
        case 5: _t->impUtTriggered(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (V_App_U::*)(double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&V_App_U::onAddSaldoClicked)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (V_App_U::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&V_App_U::onDeleteTriggered)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (V_App_U::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&V_App_U::onImpUtTriggered)) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject V_App_U::staticMetaObject = { {
    QMetaObject::SuperData::link<V_Main::staticMetaObject>(),
    qt_meta_stringdata_V_App_U.offsetsAndSize,
    qt_meta_data_V_App_U,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_V_App_U_t
, QtPrivate::TypeAndForceComplete<V_App_U, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<double, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *V_App_U::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *V_App_U::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_V_App_U.stringdata0))
        return static_cast<void*>(this);
    return V_Main::qt_metacast(_clname);
}

int V_App_U::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = V_Main::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void V_App_U::onAddSaldoClicked(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void V_App_U::onDeleteTriggered()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void V_App_U::onImpUtTriggered()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
