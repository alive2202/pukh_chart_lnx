/****************************************************************************
** Meta object code from reading C++ file 'ChartGL.h'
**
** Created: Wed Jan 9 14:45:26 2019
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "ChartGL.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ChartGL.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ChartGL[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
      16,   49, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
       9,    8,    8,    8, 0x0a,
      19,    8,    8,    8, 0x0a,
      49,   34,    8,    8, 0x0a,
      67,    8,    8,    8, 0x0a,
      80,    8,    8,    8, 0x0a,
      93,    8,    8,    8, 0x0a,
     107,    8,    8,    8, 0x0a,

 // properties: name, type, flags
     125,  120, 0x01095003,
     129,  120, 0x01095003,
     135,  120, 0x01095003,
     140,  120, 0x01095003,
     151,  147, 0x02095003,
     161,  147, 0x02095003,
     171,  147, 0x02095003,
     179,  147, 0x02095003,
     187,  147, 0x02095003,
     195,  147, 0x02095003,
     203,  147, 0x02095003,
     213,  147, 0x02095003,
     223,  147, 0x02095003,
     233,  147, 0x02095003,
     243,  147, 0x02095003,
     258,  147, 0x02095003,

       0        // eod
};

static const char qt_meta_stringdata_ChartGL[] = {
    "ChartGL\0\0paintGL()\0initializeGL()\0"
    "nWidth,nHeight\0resizeGL(int,int)\0"
    "ChangeNext()\0ChangePrev()\0ChangeFirst()\0"
    "ChangeLast()\0bool\0ico\0point\0line\0"
    "square\0int\0pointSize\0lineWidth\0marginL\0"
    "marginR\0marginT\0marginB\0startMinX\0"
    "startMinY\0startMaxX\0startMaxY\0"
    "startNumXTicks\0startNumYTicks\0"
};

void ChartGL::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ChartGL *_t = static_cast<ChartGL *>(_o);
        switch (_id) {
        case 0: _t->paintGL(); break;
        case 1: _t->initializeGL(); break;
        case 2: _t->resizeGL((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 3: _t->ChangeNext(); break;
        case 4: _t->ChangePrev(); break;
        case 5: _t->ChangeFirst(); break;
        case 6: _t->ChangeLast(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData ChartGL::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ChartGL::staticMetaObject = {
    { &QGLWidget::staticMetaObject, qt_meta_stringdata_ChartGL,
      qt_meta_data_ChartGL, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ChartGL::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ChartGL::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ChartGL::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ChartGL))
        return static_cast<void*>(const_cast< ChartGL*>(this));
    return QGLWidget::qt_metacast(_clname);
}

int ChartGL::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGLWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = GetICO(); break;
        case 1: *reinterpret_cast< bool*>(_v) = GetPoint(); break;
        case 2: *reinterpret_cast< bool*>(_v) = GetLine(); break;
        case 3: *reinterpret_cast< bool*>(_v) = GetSquare(); break;
        case 4: *reinterpret_cast< int*>(_v) = GetPointSize(); break;
        case 5: *reinterpret_cast< int*>(_v) = GetLineWidth(); break;
        case 6: *reinterpret_cast< int*>(_v) = GetMarginL(); break;
        case 7: *reinterpret_cast< int*>(_v) = GetMarginR(); break;
        case 8: *reinterpret_cast< int*>(_v) = GetMarginT(); break;
        case 9: *reinterpret_cast< int*>(_v) = GetMarginB(); break;
        case 10: *reinterpret_cast< int*>(_v) = GetStartMinX(); break;
        case 11: *reinterpret_cast< int*>(_v) = GetStartMinY(); break;
        case 12: *reinterpret_cast< int*>(_v) = GetStartMaxX(); break;
        case 13: *reinterpret_cast< int*>(_v) = GetStartMaxY(); break;
        case 14: *reinterpret_cast< int*>(_v) = GetStartNumXTicks(); break;
        case 15: *reinterpret_cast< int*>(_v) = GetStartNumYTicks(); break;
        }
        _id -= 16;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: SetICO(*reinterpret_cast< bool*>(_v)); break;
        case 1: SetPoint(*reinterpret_cast< bool*>(_v)); break;
        case 2: SetLine(*reinterpret_cast< bool*>(_v)); break;
        case 3: SetSquare(*reinterpret_cast< bool*>(_v)); break;
        case 4: SetPointSize(*reinterpret_cast< int*>(_v)); break;
        case 5: SetLineWidth(*reinterpret_cast< int*>(_v)); break;
        case 6: SetMarginL(*reinterpret_cast< int*>(_v)); break;
        case 7: SetMarginR(*reinterpret_cast< int*>(_v)); break;
        case 8: SetMarginT(*reinterpret_cast< int*>(_v)); break;
        case 9: SetMarginB(*reinterpret_cast< int*>(_v)); break;
        case 10: SetStartMinX(*reinterpret_cast< int*>(_v)); break;
        case 11: SetStartMinY(*reinterpret_cast< int*>(_v)); break;
        case 12: SetStartMaxX(*reinterpret_cast< int*>(_v)); break;
        case 13: SetStartMaxY(*reinterpret_cast< int*>(_v)); break;
        case 14: SetStartNumXTicks(*reinterpret_cast< int*>(_v)); break;
        case 15: SetStartNumYTicks(*reinterpret_cast< int*>(_v)); break;
        }
        _id -= 16;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 16;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 16;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 16;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 16;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 16;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 16;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_END_MOC_NAMESPACE
