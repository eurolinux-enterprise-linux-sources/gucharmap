/* -- THIS FILE IS GENERATED - DO NOT EDIT *//* -*- Mode: C; c-basic-offset: 4 -*- */

#include <Python.h>



#line 3 "gucharmap.override"
#include <Python.h>               
#define NO_IMPORT
#include <config.h>
#include <pygobject.h>
#include <pygtk/pygtk.h>
#include <gucharmap/gucharmap.h>

void pygucharmap_register_classes(PyObject *d);
void pygucharmap_add_constants(PyObject *module, const gchar *strip_prefix);

#line 19 "gucharmap.c"


/* ---------- types from other modules ---------- */
static PyTypeObject *_PyGObject_Type;
#define PyGObject_Type (*_PyGObject_Type)
static PyTypeObject *_PyGtkWidget_Type;
#define PyGtkWidget_Type (*_PyGtkWidget_Type)
static PyTypeObject *_PyGtkBin_Type;
#define PyGtkBin_Type (*_PyGtkBin_Type)
static PyTypeObject *_PyGtkHPaned_Type;
#define PyGtkHPaned_Type (*_PyGtkHPaned_Type)
static PyTypeObject *_PyGtkDrawingArea_Type;
#define PyGtkDrawingArea_Type (*_PyGtkDrawingArea_Type)
static PyTypeObject *_PyGtkListStore_Type;
#define PyGtkListStore_Type (*_PyGtkListStore_Type)
static PyTypeObject *_PyGtkTreeView_Type;
#define PyGtkTreeView_Type (*_PyGtkTreeView_Type)


/* ---------- forward type declarations ---------- */
PyTypeObject G_GNUC_INTERNAL PyGucharmapChaptersModel_Type;
PyTypeObject G_GNUC_INTERNAL PyGucharmapBlockChaptersModel_Type;
PyTypeObject G_GNUC_INTERNAL PyGucharmapChaptersView_Type;
PyTypeObject G_GNUC_INTERNAL PyGucharmapCharmap_Type;
PyTypeObject G_GNUC_INTERNAL PyGucharmapChartable_Type;
PyTypeObject G_GNUC_INTERNAL PyGucharmapCodepointList_Type;
PyTypeObject G_GNUC_INTERNAL PyGucharmapBlockCodepointList_Type;
PyTypeObject G_GNUC_INTERNAL PyGucharmapScriptChaptersModel_Type;
PyTypeObject G_GNUC_INTERNAL PyGucharmapScriptCodepointList_Type;

#line 50 "gucharmap.c"



/* ----------- GucharmapChaptersModel ----------- */

static PyObject *
_wrap_gucharmap_chapters_model_get_title(PyGObject *self)
{
    const gchar *ret;

    
    ret = gucharmap_chapters_model_get_title(GUCHARMAP_CHAPTERS_MODEL(self->obj));
    
    if (ret)
        return PyString_FromString(ret);
    Py_INCREF(Py_None);
    return Py_None;
}

static PyObject *
_wrap_gucharmap_chapters_model_get_book_codepoint_list(PyGObject *self)
{
    GucharmapCodepointList *ret;

    
    ret = gucharmap_chapters_model_get_book_codepoint_list(GUCHARMAP_CHAPTERS_MODEL(self->obj));
    
    /* pygobject_new handles NULL checking */
    return pygobject_new((GObject *)ret);
}

static const PyMethodDef _PyGucharmapChaptersModel_methods[] = {
    { "get_title", (PyCFunction)_wrap_gucharmap_chapters_model_get_title, METH_NOARGS,
      NULL },
    { "get_book_codepoint_list", (PyCFunction)_wrap_gucharmap_chapters_model_get_book_codepoint_list, METH_NOARGS,
      NULL },
    { NULL, NULL, 0, NULL }
};

PyTypeObject G_GNUC_INTERNAL PyGucharmapChaptersModel_Type = {
    PyObject_HEAD_INIT(NULL)
    0,                                 /* ob_size */
    "gucharmap.ChaptersModel",                   /* tp_name */
    sizeof(PyGObject),          /* tp_basicsize */
    0,                                 /* tp_itemsize */
    /* methods */
    (destructor)0,        /* tp_dealloc */
    (printfunc)0,                      /* tp_print */
    (getattrfunc)0,       /* tp_getattr */
    (setattrfunc)0,       /* tp_setattr */
    (cmpfunc)0,           /* tp_compare */
    (reprfunc)0,             /* tp_repr */
    (PyNumberMethods*)0,     /* tp_as_number */
    (PySequenceMethods*)0, /* tp_as_sequence */
    (PyMappingMethods*)0,   /* tp_as_mapping */
    (hashfunc)0,             /* tp_hash */
    (ternaryfunc)0,          /* tp_call */
    (reprfunc)0,              /* tp_str */
    (getattrofunc)0,     /* tp_getattro */
    (setattrofunc)0,     /* tp_setattro */
    (PyBufferProcs*)0,  /* tp_as_buffer */
    Py_TPFLAGS_DEFAULT | Py_TPFLAGS_BASETYPE,                      /* tp_flags */
    NULL,                        /* Documentation string */
    (traverseproc)0,     /* tp_traverse */
    (inquiry)0,             /* tp_clear */
    (richcmpfunc)0,   /* tp_richcompare */
    offsetof(PyGObject, weakreflist),             /* tp_weaklistoffset */
    (getiterfunc)0,          /* tp_iter */
    (iternextfunc)0,     /* tp_iternext */
    (struct PyMethodDef*)_PyGucharmapChaptersModel_methods, /* tp_methods */
    (struct PyMemberDef*)0,              /* tp_members */
    (struct PyGetSetDef*)0,  /* tp_getset */
    NULL,                              /* tp_base */
    NULL,                              /* tp_dict */
    (descrgetfunc)0,    /* tp_descr_get */
    (descrsetfunc)0,    /* tp_descr_set */
    offsetof(PyGObject, inst_dict),                 /* tp_dictoffset */
    (initproc)0,             /* tp_init */
    (allocfunc)0,           /* tp_alloc */
    (newfunc)0,               /* tp_new */
    (freefunc)0,             /* tp_free */
    (inquiry)0              /* tp_is_gc */
};



/* ----------- GucharmapBlockChaptersModel ----------- */

static int
_wrap_gucharmap_block_chapters_model_new(PyGObject *self, PyObject *args, PyObject *kwargs)
{
    static char* kwlist[] = { NULL };

    if (!PyArg_ParseTupleAndKeywords(args, kwargs,
                                     ":gucharmap.BlockChaptersModel.__init__",
                                     kwlist))
        return -1;

    pygobject_constructv(self, 0, NULL);
    if (!self->obj) {
        PyErr_SetString(
            PyExc_RuntimeError, 
            "could not create gucharmap.BlockChaptersModel object");
        return -1;
    }
    return 0;
}

PyTypeObject G_GNUC_INTERNAL PyGucharmapBlockChaptersModel_Type = {
    PyObject_HEAD_INIT(NULL)
    0,                                 /* ob_size */
    "gucharmap.BlockChaptersModel",                   /* tp_name */
    sizeof(PyGObject),          /* tp_basicsize */
    0,                                 /* tp_itemsize */
    /* methods */
    (destructor)0,        /* tp_dealloc */
    (printfunc)0,                      /* tp_print */
    (getattrfunc)0,       /* tp_getattr */
    (setattrfunc)0,       /* tp_setattr */
    (cmpfunc)0,           /* tp_compare */
    (reprfunc)0,             /* tp_repr */
    (PyNumberMethods*)0,     /* tp_as_number */
    (PySequenceMethods*)0, /* tp_as_sequence */
    (PyMappingMethods*)0,   /* tp_as_mapping */
    (hashfunc)0,             /* tp_hash */
    (ternaryfunc)0,          /* tp_call */
    (reprfunc)0,              /* tp_str */
    (getattrofunc)0,     /* tp_getattro */
    (setattrofunc)0,     /* tp_setattro */
    (PyBufferProcs*)0,  /* tp_as_buffer */
    Py_TPFLAGS_DEFAULT | Py_TPFLAGS_BASETYPE,                      /* tp_flags */
    NULL,                        /* Documentation string */
    (traverseproc)0,     /* tp_traverse */
    (inquiry)0,             /* tp_clear */
    (richcmpfunc)0,   /* tp_richcompare */
    offsetof(PyGObject, weakreflist),             /* tp_weaklistoffset */
    (getiterfunc)0,          /* tp_iter */
    (iternextfunc)0,     /* tp_iternext */
    (struct PyMethodDef*)NULL, /* tp_methods */
    (struct PyMemberDef*)0,              /* tp_members */
    (struct PyGetSetDef*)0,  /* tp_getset */
    NULL,                              /* tp_base */
    NULL,                              /* tp_dict */
    (descrgetfunc)0,    /* tp_descr_get */
    (descrsetfunc)0,    /* tp_descr_set */
    offsetof(PyGObject, inst_dict),                 /* tp_dictoffset */
    (initproc)_wrap_gucharmap_block_chapters_model_new,             /* tp_init */
    (allocfunc)0,           /* tp_alloc */
    (newfunc)0,               /* tp_new */
    (freefunc)0,             /* tp_free */
    (inquiry)0              /* tp_is_gc */
};



/* ----------- GucharmapChaptersView ----------- */

static int
_wrap_gucharmap_chapters_view_new(PyGObject *self, PyObject *args, PyObject *kwargs)
{
    static char* kwlist[] = { NULL };

    if (!PyArg_ParseTupleAndKeywords(args, kwargs,
                                     ":gucharmap.ChaptersView.__init__",
                                     kwlist))
        return -1;

    pygobject_constructv(self, 0, NULL);
    if (!self->obj) {
        PyErr_SetString(
            PyExc_RuntimeError, 
            "could not create gucharmap.ChaptersView object");
        return -1;
    }
    return 0;
}

static PyObject *
_wrap_gucharmap_chapters_view_set_model(PyGObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "model", NULL };
    PyGObject *model;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs,"O!:GucharmapChaptersView.set_model", kwlist, &PyGucharmapChaptersModel_Type, &model))
        return NULL;
    
    gucharmap_chapters_view_set_model(GUCHARMAP_CHAPTERS_VIEW(self->obj), GUCHARMAP_CHAPTERS_MODEL(model->obj));
    
    Py_INCREF(Py_None);
    return Py_None;
}

static PyObject *
_wrap_gucharmap_chapters_view_get_model(PyGObject *self)
{
    GucharmapChaptersModel *ret;

    
    ret = gucharmap_chapters_view_get_model(GUCHARMAP_CHAPTERS_VIEW(self->obj));
    
    /* pygobject_new handles NULL checking */
    return pygobject_new((GObject *)ret);
}

static PyObject *
_wrap_gucharmap_chapters_view_select_character(PyGObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "wc", NULL };
    int ret;
    gunichar wc;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs,"O&:GucharmapChaptersView.select_character", kwlist, pyg_pyobj_to_unichar_conv, &wc))
        return NULL;
    
    ret = gucharmap_chapters_view_select_character(GUCHARMAP_CHAPTERS_VIEW(self->obj), wc);
    
    return PyBool_FromLong(ret);

}

static PyObject *
_wrap_gucharmap_chapters_view_get_codepoint_list(PyGObject *self)
{
    GucharmapCodepointList *ret;

    
    ret = gucharmap_chapters_view_get_codepoint_list(GUCHARMAP_CHAPTERS_VIEW(self->obj));
    
    /* pygobject_new handles NULL checking */
    return pygobject_new((GObject *)ret);
}

static PyObject *
_wrap_gucharmap_chapters_view_get_book_codepoint_list(PyGObject *self)
{
    GucharmapCodepointList *ret;

    
    ret = gucharmap_chapters_view_get_book_codepoint_list(GUCHARMAP_CHAPTERS_VIEW(self->obj));
    
    /* pygobject_new handles NULL checking */
    return pygobject_new((GObject *)ret);
}

static PyObject *
_wrap_gucharmap_chapters_view_next(PyGObject *self)
{
    
    gucharmap_chapters_view_next(GUCHARMAP_CHAPTERS_VIEW(self->obj));
    
    Py_INCREF(Py_None);
    return Py_None;
}

static PyObject *
_wrap_gucharmap_chapters_view_previous(PyGObject *self)
{
    
    gucharmap_chapters_view_previous(GUCHARMAP_CHAPTERS_VIEW(self->obj));
    
    Py_INCREF(Py_None);
    return Py_None;
}

static PyObject *
_wrap_gucharmap_chapters_view_get_selected(PyGObject *self)
{
    gchar *ret;

    
    ret = gucharmap_chapters_view_get_selected(GUCHARMAP_CHAPTERS_VIEW(self->obj));
    
    if (ret) {
        PyObject *py_ret = PyString_FromString(ret);
        g_free(ret);
        return py_ret;
    }
    Py_INCREF(Py_None);
    return Py_None;
}

static PyObject *
_wrap_gucharmap_chapters_view_set_selected(PyGObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "name", NULL };
    char *name;
    int ret;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs,"s:GucharmapChaptersView.set_selected", kwlist, &name))
        return NULL;
    
    ret = gucharmap_chapters_view_set_selected(GUCHARMAP_CHAPTERS_VIEW(self->obj), name);
    
    return PyBool_FromLong(ret);

}

static PyObject *
_wrap_gucharmap_chapters_view_select_locale(PyGObject *self)
{
    int ret;

    
    ret = gucharmap_chapters_view_select_locale(GUCHARMAP_CHAPTERS_VIEW(self->obj));
    
    return PyBool_FromLong(ret);

}

static const PyMethodDef _PyGucharmapChaptersView_methods[] = {
    { "set_model", (PyCFunction)_wrap_gucharmap_chapters_view_set_model, METH_VARARGS|METH_KEYWORDS,
      NULL },
    { "get_model", (PyCFunction)_wrap_gucharmap_chapters_view_get_model, METH_NOARGS,
      NULL },
    { "select_character", (PyCFunction)_wrap_gucharmap_chapters_view_select_character, METH_VARARGS|METH_KEYWORDS,
      NULL },
    { "get_codepoint_list", (PyCFunction)_wrap_gucharmap_chapters_view_get_codepoint_list, METH_NOARGS,
      NULL },
    { "get_book_codepoint_list", (PyCFunction)_wrap_gucharmap_chapters_view_get_book_codepoint_list, METH_NOARGS,
      NULL },
    { "next", (PyCFunction)_wrap_gucharmap_chapters_view_next, METH_NOARGS,
      NULL },
    { "previous", (PyCFunction)_wrap_gucharmap_chapters_view_previous, METH_NOARGS,
      NULL },
    { "get_selected", (PyCFunction)_wrap_gucharmap_chapters_view_get_selected, METH_NOARGS,
      NULL },
    { "set_selected", (PyCFunction)_wrap_gucharmap_chapters_view_set_selected, METH_VARARGS|METH_KEYWORDS,
      NULL },
    { "select_locale", (PyCFunction)_wrap_gucharmap_chapters_view_select_locale, METH_NOARGS,
      NULL },
    { NULL, NULL, 0, NULL }
};

PyTypeObject G_GNUC_INTERNAL PyGucharmapChaptersView_Type = {
    PyObject_HEAD_INIT(NULL)
    0,                                 /* ob_size */
    "gucharmap.ChaptersView",                   /* tp_name */
    sizeof(PyGObject),          /* tp_basicsize */
    0,                                 /* tp_itemsize */
    /* methods */
    (destructor)0,        /* tp_dealloc */
    (printfunc)0,                      /* tp_print */
    (getattrfunc)0,       /* tp_getattr */
    (setattrfunc)0,       /* tp_setattr */
    (cmpfunc)0,           /* tp_compare */
    (reprfunc)0,             /* tp_repr */
    (PyNumberMethods*)0,     /* tp_as_number */
    (PySequenceMethods*)0, /* tp_as_sequence */
    (PyMappingMethods*)0,   /* tp_as_mapping */
    (hashfunc)0,             /* tp_hash */
    (ternaryfunc)0,          /* tp_call */
    (reprfunc)0,              /* tp_str */
    (getattrofunc)0,     /* tp_getattro */
    (setattrofunc)0,     /* tp_setattro */
    (PyBufferProcs*)0,  /* tp_as_buffer */
    Py_TPFLAGS_DEFAULT | Py_TPFLAGS_BASETYPE,                      /* tp_flags */
    NULL,                        /* Documentation string */
    (traverseproc)0,     /* tp_traverse */
    (inquiry)0,             /* tp_clear */
    (richcmpfunc)0,   /* tp_richcompare */
    offsetof(PyGObject, weakreflist),             /* tp_weaklistoffset */
    (getiterfunc)0,          /* tp_iter */
    (iternextfunc)0,     /* tp_iternext */
    (struct PyMethodDef*)_PyGucharmapChaptersView_methods, /* tp_methods */
    (struct PyMemberDef*)0,              /* tp_members */
    (struct PyGetSetDef*)0,  /* tp_getset */
    NULL,                              /* tp_base */
    NULL,                              /* tp_dict */
    (descrgetfunc)0,    /* tp_descr_get */
    (descrsetfunc)0,    /* tp_descr_set */
    offsetof(PyGObject, inst_dict),                 /* tp_dictoffset */
    (initproc)_wrap_gucharmap_chapters_view_new,             /* tp_init */
    (allocfunc)0,           /* tp_alloc */
    (newfunc)0,               /* tp_new */
    (freefunc)0,             /* tp_free */
    (inquiry)0              /* tp_is_gc */
};



/* ----------- GucharmapCharmap ----------- */

static int
_wrap_gucharmap_charmap_new(PyGObject *self, PyObject *args, PyObject *kwargs)
{
    static char* kwlist[] = { NULL };

    if (!PyArg_ParseTupleAndKeywords(args, kwargs,
                                     ":gucharmap.Charmap.__init__",
                                     kwlist))
        return -1;

    pygobject_constructv(self, 0, NULL);
    if (!self->obj) {
        PyErr_SetString(
            PyExc_RuntimeError, 
            "could not create gucharmap.Charmap object");
        return -1;
    }
    return 0;
}

static PyObject *
_wrap_gucharmap_charmap_set_active_character(PyGObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "uc", NULL };
    gunichar uc;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs,"O&:GucharmapCharmap.set_active_character", kwlist, pyg_pyobj_to_unichar_conv, &uc))
        return NULL;
    
    gucharmap_charmap_set_active_character(GUCHARMAP_CHARMAP(self->obj), uc);
    
    Py_INCREF(Py_None);
    return Py_None;
}

static PyObject *
_wrap_gucharmap_charmap_get_active_character(PyGObject *self)
{
    gunichar ret;
    Py_UNICODE py_ret;

    
    ret = gucharmap_charmap_get_active_character(GUCHARMAP_CHARMAP(self->obj));
    
#if !defined(Py_UNICODE_SIZE) || Py_UNICODE_SIZE == 2
    if (ret > 0xffff) {
        PyErr_SetString(PyExc_RuntimeError, "returned character can not be represented in 16-bit unicode");
        return NULL;
    }
#endif
    py_ret = (Py_UNICODE)ret;
    return PyUnicode_FromUnicode(&py_ret, 1);

}

static PyObject *
_wrap_gucharmap_charmap_set_active_chapter(PyGObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "chapter", NULL };
    char *chapter;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs,"s:GucharmapCharmap.set_active_chapter", kwlist, &chapter))
        return NULL;
    
    gucharmap_charmap_set_active_chapter(GUCHARMAP_CHARMAP(self->obj), chapter);
    
    Py_INCREF(Py_None);
    return Py_None;
}

static PyObject *
_wrap_gucharmap_charmap_get_active_chapter(PyGObject *self)
{
    gchar *ret;

    
    ret = gucharmap_charmap_get_active_chapter(GUCHARMAP_CHARMAP(self->obj));
    
    if (ret) {
        PyObject *py_ret = PyString_FromString(ret);
        g_free(ret);
        return py_ret;
    }
    Py_INCREF(Py_None);
    return Py_None;
}

static PyObject *
_wrap_gucharmap_charmap_next_chapter(PyGObject *self)
{
    
    gucharmap_charmap_next_chapter(GUCHARMAP_CHARMAP(self->obj));
    
    Py_INCREF(Py_None);
    return Py_None;
}

static PyObject *
_wrap_gucharmap_charmap_previous_chapter(PyGObject *self)
{
    
    gucharmap_charmap_previous_chapter(GUCHARMAP_CHARMAP(self->obj));
    
    Py_INCREF(Py_None);
    return Py_None;
}

static PyObject *
_wrap_gucharmap_charmap_get_chapters_view(PyGObject *self)
{
    GucharmapChaptersView *ret;

    
    ret = gucharmap_charmap_get_chapters_view(GUCHARMAP_CHARMAP(self->obj));
    
    /* pygobject_new handles NULL checking */
    return pygobject_new((GObject *)ret);
}

static PyObject *
_wrap_gucharmap_charmap_set_chapters_model(PyGObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "model", NULL };
    PyGObject *model;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs,"O!:GucharmapCharmap.set_chapters_model", kwlist, &PyGucharmapChaptersModel_Type, &model))
        return NULL;
    
    gucharmap_charmap_set_chapters_model(GUCHARMAP_CHARMAP(self->obj), GUCHARMAP_CHAPTERS_MODEL(model->obj));
    
    Py_INCREF(Py_None);
    return Py_None;
}

static PyObject *
_wrap_gucharmap_charmap_get_chapters_model(PyGObject *self)
{
    GucharmapChaptersModel *ret;

    
    ret = gucharmap_charmap_get_chapters_model(GUCHARMAP_CHARMAP(self->obj));
    
    /* pygobject_new handles NULL checking */
    return pygobject_new((GObject *)ret);
}

static PyObject *
_wrap_gucharmap_charmap_get_active_codepoint_list(PyGObject *self)
{
    GucharmapCodepointList *ret;

    
    ret = gucharmap_charmap_get_active_codepoint_list(GUCHARMAP_CHARMAP(self->obj));
    
    /* pygobject_new handles NULL checking */
    return pygobject_new((GObject *)ret);
}

static PyObject *
_wrap_gucharmap_charmap_get_book_codepoint_list(PyGObject *self)
{
    GucharmapCodepointList *ret;

    
    ret = gucharmap_charmap_get_book_codepoint_list(GUCHARMAP_CHARMAP(self->obj));
    
    /* pygobject_new handles NULL checking */
    return pygobject_new((GObject *)ret);
}

static PyObject *
_wrap_gucharmap_charmap_set_chapters_visible(PyGObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "visible", NULL };
    int visible;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs,"i:GucharmapCharmap.set_chapters_visible", kwlist, &visible))
        return NULL;
    
    gucharmap_charmap_set_chapters_visible(GUCHARMAP_CHARMAP(self->obj), visible);
    
    Py_INCREF(Py_None);
    return Py_None;
}

static PyObject *
_wrap_gucharmap_charmap_get_chapters_visible(PyGObject *self)
{
    int ret;

    
    ret = gucharmap_charmap_get_chapters_visible(GUCHARMAP_CHARMAP(self->obj));
    
    return PyBool_FromLong(ret);

}

static PyObject *
_wrap_gucharmap_charmap_set_page_visible(PyGObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "page", "visible", NULL };
    int page, visible;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs,"ii:GucharmapCharmap.set_page_visible", kwlist, &page, &visible))
        return NULL;
    
    gucharmap_charmap_set_page_visible(GUCHARMAP_CHARMAP(self->obj), page, visible);
    
    Py_INCREF(Py_None);
    return Py_None;
}

static PyObject *
_wrap_gucharmap_charmap_get_page_visible(PyGObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "page", NULL };
    int page, ret;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs,"i:GucharmapCharmap.get_page_visible", kwlist, &page))
        return NULL;
    
    ret = gucharmap_charmap_get_page_visible(GUCHARMAP_CHARMAP(self->obj), page);
    
    return PyBool_FromLong(ret);

}

static PyObject *
_wrap_gucharmap_charmap_set_active_page(PyGObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "page", NULL };
    int page;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs,"i:GucharmapCharmap.set_active_page", kwlist, &page))
        return NULL;
    
    gucharmap_charmap_set_active_page(GUCHARMAP_CHARMAP(self->obj), page);
    
    Py_INCREF(Py_None);
    return Py_None;
}

static PyObject *
_wrap_gucharmap_charmap_get_active_page(PyGObject *self)
{
    int ret;

    
    ret = gucharmap_charmap_get_active_page(GUCHARMAP_CHARMAP(self->obj));
    
    return PyInt_FromLong(ret);
}

static PyObject *
_wrap_gucharmap_charmap_set_snap_pow2(PyGObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "snap", NULL };
    int snap;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs,"i:GucharmapCharmap.set_snap_pow2", kwlist, &snap))
        return NULL;
    
    gucharmap_charmap_set_snap_pow2(GUCHARMAP_CHARMAP(self->obj), snap);
    
    Py_INCREF(Py_None);
    return Py_None;
}

static PyObject *
_wrap_gucharmap_charmap_get_snap_pow2(PyGObject *self)
{
    int ret;

    
    ret = gucharmap_charmap_get_snap_pow2(GUCHARMAP_CHARMAP(self->obj));
    
    return PyBool_FromLong(ret);

}

static PyObject *
_wrap_gucharmap_charmap_get_chartable(PyGObject *self)
{
    GucharmapChartable *ret;

    
    ret = gucharmap_charmap_get_chartable(GUCHARMAP_CHARMAP(self->obj));
    
    /* pygobject_new handles NULL checking */
    return pygobject_new((GObject *)ret);
}

static const PyMethodDef _PyGucharmapCharmap_methods[] = {
    { "set_active_character", (PyCFunction)_wrap_gucharmap_charmap_set_active_character, METH_VARARGS|METH_KEYWORDS,
      NULL },
    { "get_active_character", (PyCFunction)_wrap_gucharmap_charmap_get_active_character, METH_NOARGS,
      NULL },
    { "set_active_chapter", (PyCFunction)_wrap_gucharmap_charmap_set_active_chapter, METH_VARARGS|METH_KEYWORDS,
      NULL },
    { "get_active_chapter", (PyCFunction)_wrap_gucharmap_charmap_get_active_chapter, METH_NOARGS,
      NULL },
    { "next_chapter", (PyCFunction)_wrap_gucharmap_charmap_next_chapter, METH_NOARGS,
      NULL },
    { "previous_chapter", (PyCFunction)_wrap_gucharmap_charmap_previous_chapter, METH_NOARGS,
      NULL },
    { "get_chapters_view", (PyCFunction)_wrap_gucharmap_charmap_get_chapters_view, METH_NOARGS,
      NULL },
    { "set_chapters_model", (PyCFunction)_wrap_gucharmap_charmap_set_chapters_model, METH_VARARGS|METH_KEYWORDS,
      NULL },
    { "get_chapters_model", (PyCFunction)_wrap_gucharmap_charmap_get_chapters_model, METH_NOARGS,
      NULL },
    { "get_active_codepoint_list", (PyCFunction)_wrap_gucharmap_charmap_get_active_codepoint_list, METH_NOARGS,
      NULL },
    { "get_book_codepoint_list", (PyCFunction)_wrap_gucharmap_charmap_get_book_codepoint_list, METH_NOARGS,
      NULL },
    { "set_chapters_visible", (PyCFunction)_wrap_gucharmap_charmap_set_chapters_visible, METH_VARARGS|METH_KEYWORDS,
      NULL },
    { "get_chapters_visible", (PyCFunction)_wrap_gucharmap_charmap_get_chapters_visible, METH_NOARGS,
      NULL },
    { "set_page_visible", (PyCFunction)_wrap_gucharmap_charmap_set_page_visible, METH_VARARGS|METH_KEYWORDS,
      NULL },
    { "get_page_visible", (PyCFunction)_wrap_gucharmap_charmap_get_page_visible, METH_VARARGS|METH_KEYWORDS,
      NULL },
    { "set_active_page", (PyCFunction)_wrap_gucharmap_charmap_set_active_page, METH_VARARGS|METH_KEYWORDS,
      NULL },
    { "get_active_page", (PyCFunction)_wrap_gucharmap_charmap_get_active_page, METH_NOARGS,
      NULL },
    { "set_snap_pow2", (PyCFunction)_wrap_gucharmap_charmap_set_snap_pow2, METH_VARARGS|METH_KEYWORDS,
      NULL },
    { "get_snap_pow2", (PyCFunction)_wrap_gucharmap_charmap_get_snap_pow2, METH_NOARGS,
      NULL },
    { "get_chartable", (PyCFunction)_wrap_gucharmap_charmap_get_chartable, METH_NOARGS,
      NULL },
    { NULL, NULL, 0, NULL }
};

PyTypeObject G_GNUC_INTERNAL PyGucharmapCharmap_Type = {
    PyObject_HEAD_INIT(NULL)
    0,                                 /* ob_size */
    "gucharmap.Charmap",                   /* tp_name */
    sizeof(PyGObject),          /* tp_basicsize */
    0,                                 /* tp_itemsize */
    /* methods */
    (destructor)0,        /* tp_dealloc */
    (printfunc)0,                      /* tp_print */
    (getattrfunc)0,       /* tp_getattr */
    (setattrfunc)0,       /* tp_setattr */
    (cmpfunc)0,           /* tp_compare */
    (reprfunc)0,             /* tp_repr */
    (PyNumberMethods*)0,     /* tp_as_number */
    (PySequenceMethods*)0, /* tp_as_sequence */
    (PyMappingMethods*)0,   /* tp_as_mapping */
    (hashfunc)0,             /* tp_hash */
    (ternaryfunc)0,          /* tp_call */
    (reprfunc)0,              /* tp_str */
    (getattrofunc)0,     /* tp_getattro */
    (setattrofunc)0,     /* tp_setattro */
    (PyBufferProcs*)0,  /* tp_as_buffer */
    Py_TPFLAGS_DEFAULT | Py_TPFLAGS_BASETYPE,                      /* tp_flags */
    NULL,                        /* Documentation string */
    (traverseproc)0,     /* tp_traverse */
    (inquiry)0,             /* tp_clear */
    (richcmpfunc)0,   /* tp_richcompare */
    offsetof(PyGObject, weakreflist),             /* tp_weaklistoffset */
    (getiterfunc)0,          /* tp_iter */
    (iternextfunc)0,     /* tp_iternext */
    (struct PyMethodDef*)_PyGucharmapCharmap_methods, /* tp_methods */
    (struct PyMemberDef*)0,              /* tp_members */
    (struct PyGetSetDef*)0,  /* tp_getset */
    NULL,                              /* tp_base */
    NULL,                              /* tp_dict */
    (descrgetfunc)0,    /* tp_descr_get */
    (descrsetfunc)0,    /* tp_descr_set */
    offsetof(PyGObject, inst_dict),                 /* tp_dictoffset */
    (initproc)_wrap_gucharmap_charmap_new,             /* tp_init */
    (allocfunc)0,           /* tp_alloc */
    (newfunc)0,               /* tp_new */
    (freefunc)0,             /* tp_free */
    (inquiry)0              /* tp_is_gc */
};



/* ----------- GucharmapChartable ----------- */

static int
_wrap_gucharmap_chartable_new(PyGObject *self, PyObject *args, PyObject *kwargs)
{
    static char* kwlist[] = { NULL };

    if (!PyArg_ParseTupleAndKeywords(args, kwargs,
                                     ":gucharmap.Chartable.__init__",
                                     kwlist))
        return -1;

    pygobject_constructv(self, 0, NULL);
    if (!self->obj) {
        PyErr_SetString(
            PyExc_RuntimeError, 
            "could not create gucharmap.Chartable object");
        return -1;
    }
    return 0;
}

static PyObject *
_wrap_gucharmap_chartable_get_active_character(PyGObject *self)
{
    gunichar ret;
    Py_UNICODE py_ret;

    
    ret = gucharmap_chartable_get_active_character(GUCHARMAP_CHARTABLE(self->obj));
    
#if !defined(Py_UNICODE_SIZE) || Py_UNICODE_SIZE == 2
    if (ret > 0xffff) {
        PyErr_SetString(PyExc_RuntimeError, "returned character can not be represented in 16-bit unicode");
        return NULL;
    }
#endif
    py_ret = (Py_UNICODE)ret;
    return PyUnicode_FromUnicode(&py_ret, 1);

}

static PyObject *
_wrap_gucharmap_chartable_set_active_character(PyGObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "uc", NULL };
    gunichar uc;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs,"O&:GucharmapChartable.set_active_character", kwlist, pyg_pyobj_to_unichar_conv, &uc))
        return NULL;
    
    gucharmap_chartable_set_active_character(GUCHARMAP_CHARTABLE(self->obj), uc);
    
    Py_INCREF(Py_None);
    return Py_None;
}

static PyObject *
_wrap_gucharmap_chartable_set_zoom_enabled(PyGObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "enabled", NULL };
    int enabled;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs,"i:GucharmapChartable.set_zoom_enabled", kwlist, &enabled))
        return NULL;
    
    gucharmap_chartable_set_zoom_enabled(GUCHARMAP_CHARTABLE(self->obj), enabled);
    
    Py_INCREF(Py_None);
    return Py_None;
}

static PyObject *
_wrap_gucharmap_chartable_get_zoom_enabled(PyGObject *self)
{
    int ret;

    
    ret = gucharmap_chartable_get_zoom_enabled(GUCHARMAP_CHARTABLE(self->obj));
    
    return PyBool_FromLong(ret);

}

static PyObject *
_wrap_gucharmap_chartable_set_snap_pow2(PyGObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "snap", NULL };
    int snap;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs,"i:GucharmapChartable.set_snap_pow2", kwlist, &snap))
        return NULL;
    
    gucharmap_chartable_set_snap_pow2(GUCHARMAP_CHARTABLE(self->obj), snap);
    
    Py_INCREF(Py_None);
    return Py_None;
}

static PyObject *
_wrap_gucharmap_chartable_get_snap_pow2(PyGObject *self)
{
    int ret;

    
    ret = gucharmap_chartable_get_snap_pow2(GUCHARMAP_CHARTABLE(self->obj));
    
    return PyBool_FromLong(ret);

}

static PyObject *
_wrap_gucharmap_chartable_set_codepoint_list(PyGObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "list", NULL };
    PyGObject *list;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs,"O!:GucharmapChartable.set_codepoint_list", kwlist, &PyGucharmapCodepointList_Type, &list))
        return NULL;
    
    gucharmap_chartable_set_codepoint_list(GUCHARMAP_CHARTABLE(self->obj), GUCHARMAP_CODEPOINT_LIST(list->obj));
    
    Py_INCREF(Py_None);
    return Py_None;
}

static PyObject *
_wrap_gucharmap_chartable_get_codepoint_list(PyGObject *self)
{
    GucharmapCodepointList *ret;

    
    ret = gucharmap_chartable_get_codepoint_list(GUCHARMAP_CHARTABLE(self->obj));
    
    /* pygobject_new handles NULL checking */
    return pygobject_new((GObject *)ret);
}

static const PyMethodDef _PyGucharmapChartable_methods[] = {
    { "get_active_character", (PyCFunction)_wrap_gucharmap_chartable_get_active_character, METH_NOARGS,
      NULL },
    { "set_active_character", (PyCFunction)_wrap_gucharmap_chartable_set_active_character, METH_VARARGS|METH_KEYWORDS,
      NULL },
    { "set_zoom_enabled", (PyCFunction)_wrap_gucharmap_chartable_set_zoom_enabled, METH_VARARGS|METH_KEYWORDS,
      NULL },
    { "get_zoom_enabled", (PyCFunction)_wrap_gucharmap_chartable_get_zoom_enabled, METH_NOARGS,
      NULL },
    { "set_snap_pow2", (PyCFunction)_wrap_gucharmap_chartable_set_snap_pow2, METH_VARARGS|METH_KEYWORDS,
      NULL },
    { "get_snap_pow2", (PyCFunction)_wrap_gucharmap_chartable_get_snap_pow2, METH_NOARGS,
      NULL },
    { "set_codepoint_list", (PyCFunction)_wrap_gucharmap_chartable_set_codepoint_list, METH_VARARGS|METH_KEYWORDS,
      NULL },
    { "get_codepoint_list", (PyCFunction)_wrap_gucharmap_chartable_get_codepoint_list, METH_NOARGS,
      NULL },
    { NULL, NULL, 0, NULL }
};

PyTypeObject G_GNUC_INTERNAL PyGucharmapChartable_Type = {
    PyObject_HEAD_INIT(NULL)
    0,                                 /* ob_size */
    "gucharmap.Chartable",                   /* tp_name */
    sizeof(PyGObject),          /* tp_basicsize */
    0,                                 /* tp_itemsize */
    /* methods */
    (destructor)0,        /* tp_dealloc */
    (printfunc)0,                      /* tp_print */
    (getattrfunc)0,       /* tp_getattr */
    (setattrfunc)0,       /* tp_setattr */
    (cmpfunc)0,           /* tp_compare */
    (reprfunc)0,             /* tp_repr */
    (PyNumberMethods*)0,     /* tp_as_number */
    (PySequenceMethods*)0, /* tp_as_sequence */
    (PyMappingMethods*)0,   /* tp_as_mapping */
    (hashfunc)0,             /* tp_hash */
    (ternaryfunc)0,          /* tp_call */
    (reprfunc)0,              /* tp_str */
    (getattrofunc)0,     /* tp_getattro */
    (setattrofunc)0,     /* tp_setattro */
    (PyBufferProcs*)0,  /* tp_as_buffer */
    Py_TPFLAGS_DEFAULT | Py_TPFLAGS_BASETYPE,                      /* tp_flags */
    NULL,                        /* Documentation string */
    (traverseproc)0,     /* tp_traverse */
    (inquiry)0,             /* tp_clear */
    (richcmpfunc)0,   /* tp_richcompare */
    offsetof(PyGObject, weakreflist),             /* tp_weaklistoffset */
    (getiterfunc)0,          /* tp_iter */
    (iternextfunc)0,     /* tp_iternext */
    (struct PyMethodDef*)_PyGucharmapChartable_methods, /* tp_methods */
    (struct PyMemberDef*)0,              /* tp_members */
    (struct PyGetSetDef*)0,  /* tp_getset */
    NULL,                              /* tp_base */
    NULL,                              /* tp_dict */
    (descrgetfunc)0,    /* tp_descr_get */
    (descrsetfunc)0,    /* tp_descr_set */
    offsetof(PyGObject, inst_dict),                 /* tp_dictoffset */
    (initproc)_wrap_gucharmap_chartable_new,             /* tp_init */
    (allocfunc)0,           /* tp_alloc */
    (newfunc)0,               /* tp_new */
    (freefunc)0,             /* tp_free */
    (inquiry)0              /* tp_is_gc */
};



/* ----------- GucharmapCodepointList ----------- */

static PyObject *
_wrap_gucharmap_codepoint_list_get_char(PyGObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "index", NULL };
    int index;
    gunichar ret;
    Py_UNICODE py_ret;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs,"i:GucharmapCodepointList.get_char", kwlist, &index))
        return NULL;
    
    ret = gucharmap_codepoint_list_get_char(GUCHARMAP_CODEPOINT_LIST(self->obj), index);
    
#if !defined(Py_UNICODE_SIZE) || Py_UNICODE_SIZE == 2
    if (ret > 0xffff) {
        PyErr_SetString(PyExc_RuntimeError, "returned character can not be represented in 16-bit unicode");
        return NULL;
    }
#endif
    py_ret = (Py_UNICODE)ret;
    return PyUnicode_FromUnicode(&py_ret, 1);

}

static PyObject *
_wrap_gucharmap_codepoint_list_get_index(PyGObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "wc", NULL };
    int ret;
    gunichar wc;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs,"O&:GucharmapCodepointList.get_index", kwlist, pyg_pyobj_to_unichar_conv, &wc))
        return NULL;
    
    ret = gucharmap_codepoint_list_get_index(GUCHARMAP_CODEPOINT_LIST(self->obj), wc);
    
    return PyInt_FromLong(ret);
}

static PyObject *
_wrap_gucharmap_codepoint_list_get_last_index(PyGObject *self)
{
    int ret;

    
    ret = gucharmap_codepoint_list_get_last_index(GUCHARMAP_CODEPOINT_LIST(self->obj));
    
    return PyInt_FromLong(ret);
}

static const PyMethodDef _PyGucharmapCodepointList_methods[] = {
    { "get_char", (PyCFunction)_wrap_gucharmap_codepoint_list_get_char, METH_VARARGS|METH_KEYWORDS,
      NULL },
    { "get_index", (PyCFunction)_wrap_gucharmap_codepoint_list_get_index, METH_VARARGS|METH_KEYWORDS,
      NULL },
    { "get_last_index", (PyCFunction)_wrap_gucharmap_codepoint_list_get_last_index, METH_NOARGS,
      NULL },
    { NULL, NULL, 0, NULL }
};

PyTypeObject G_GNUC_INTERNAL PyGucharmapCodepointList_Type = {
    PyObject_HEAD_INIT(NULL)
    0,                                 /* ob_size */
    "gucharmap.CodepointList",                   /* tp_name */
    sizeof(PyGObject),          /* tp_basicsize */
    0,                                 /* tp_itemsize */
    /* methods */
    (destructor)0,        /* tp_dealloc */
    (printfunc)0,                      /* tp_print */
    (getattrfunc)0,       /* tp_getattr */
    (setattrfunc)0,       /* tp_setattr */
    (cmpfunc)0,           /* tp_compare */
    (reprfunc)0,             /* tp_repr */
    (PyNumberMethods*)0,     /* tp_as_number */
    (PySequenceMethods*)0, /* tp_as_sequence */
    (PyMappingMethods*)0,   /* tp_as_mapping */
    (hashfunc)0,             /* tp_hash */
    (ternaryfunc)0,          /* tp_call */
    (reprfunc)0,              /* tp_str */
    (getattrofunc)0,     /* tp_getattro */
    (setattrofunc)0,     /* tp_setattro */
    (PyBufferProcs*)0,  /* tp_as_buffer */
    Py_TPFLAGS_DEFAULT | Py_TPFLAGS_BASETYPE,                      /* tp_flags */
    NULL,                        /* Documentation string */
    (traverseproc)0,     /* tp_traverse */
    (inquiry)0,             /* tp_clear */
    (richcmpfunc)0,   /* tp_richcompare */
    offsetof(PyGObject, weakreflist),             /* tp_weaklistoffset */
    (getiterfunc)0,          /* tp_iter */
    (iternextfunc)0,     /* tp_iternext */
    (struct PyMethodDef*)_PyGucharmapCodepointList_methods, /* tp_methods */
    (struct PyMemberDef*)0,              /* tp_members */
    (struct PyGetSetDef*)0,  /* tp_getset */
    NULL,                              /* tp_base */
    NULL,                              /* tp_dict */
    (descrgetfunc)0,    /* tp_descr_get */
    (descrsetfunc)0,    /* tp_descr_set */
    offsetof(PyGObject, inst_dict),                 /* tp_dictoffset */
    (initproc)0,             /* tp_init */
    (allocfunc)0,           /* tp_alloc */
    (newfunc)0,               /* tp_new */
    (freefunc)0,             /* tp_free */
    (inquiry)0              /* tp_is_gc */
};



/* ----------- GucharmapBlockCodepointList ----------- */

static int
_wrap_gucharmap_block_codepoint_list_new(PyGObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "start", "end", NULL };
    gunichar start, end;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs,"O&O&:GucharmapBlockCodepointList.__init__", kwlist, pyg_pyobj_to_unichar_conv, &start, pyg_pyobj_to_unichar_conv, &end))
        return -1;
    self->obj = (GObject *)gucharmap_block_codepoint_list_new(start, end);

    if (!self->obj) {
        PyErr_SetString(PyExc_RuntimeError, "could not create GucharmapBlockCodepointList object");
        return -1;
    }
    pygobject_register_wrapper((PyObject *)self);
    return 0;
}

PyTypeObject G_GNUC_INTERNAL PyGucharmapBlockCodepointList_Type = {
    PyObject_HEAD_INIT(NULL)
    0,                                 /* ob_size */
    "gucharmap.BlockCodepointList",                   /* tp_name */
    sizeof(PyGObject),          /* tp_basicsize */
    0,                                 /* tp_itemsize */
    /* methods */
    (destructor)0,        /* tp_dealloc */
    (printfunc)0,                      /* tp_print */
    (getattrfunc)0,       /* tp_getattr */
    (setattrfunc)0,       /* tp_setattr */
    (cmpfunc)0,           /* tp_compare */
    (reprfunc)0,             /* tp_repr */
    (PyNumberMethods*)0,     /* tp_as_number */
    (PySequenceMethods*)0, /* tp_as_sequence */
    (PyMappingMethods*)0,   /* tp_as_mapping */
    (hashfunc)0,             /* tp_hash */
    (ternaryfunc)0,          /* tp_call */
    (reprfunc)0,              /* tp_str */
    (getattrofunc)0,     /* tp_getattro */
    (setattrofunc)0,     /* tp_setattro */
    (PyBufferProcs*)0,  /* tp_as_buffer */
    Py_TPFLAGS_DEFAULT | Py_TPFLAGS_BASETYPE,                      /* tp_flags */
    NULL,                        /* Documentation string */
    (traverseproc)0,     /* tp_traverse */
    (inquiry)0,             /* tp_clear */
    (richcmpfunc)0,   /* tp_richcompare */
    offsetof(PyGObject, weakreflist),             /* tp_weaklistoffset */
    (getiterfunc)0,          /* tp_iter */
    (iternextfunc)0,     /* tp_iternext */
    (struct PyMethodDef*)NULL, /* tp_methods */
    (struct PyMemberDef*)0,              /* tp_members */
    (struct PyGetSetDef*)0,  /* tp_getset */
    NULL,                              /* tp_base */
    NULL,                              /* tp_dict */
    (descrgetfunc)0,    /* tp_descr_get */
    (descrsetfunc)0,    /* tp_descr_set */
    offsetof(PyGObject, inst_dict),                 /* tp_dictoffset */
    (initproc)_wrap_gucharmap_block_codepoint_list_new,             /* tp_init */
    (allocfunc)0,           /* tp_alloc */
    (newfunc)0,               /* tp_new */
    (freefunc)0,             /* tp_free */
    (inquiry)0              /* tp_is_gc */
};



/* ----------- GucharmapScriptChaptersModel ----------- */

static int
_wrap_gucharmap_script_chapters_model_new(PyGObject *self, PyObject *args, PyObject *kwargs)
{
    static char* kwlist[] = { NULL };

    if (!PyArg_ParseTupleAndKeywords(args, kwargs,
                                     ":gucharmap.ScriptChaptersModel.__init__",
                                     kwlist))
        return -1;

    pygobject_constructv(self, 0, NULL);
    if (!self->obj) {
        PyErr_SetString(
            PyExc_RuntimeError, 
            "could not create gucharmap.ScriptChaptersModel object");
        return -1;
    }
    return 0;
}

PyTypeObject G_GNUC_INTERNAL PyGucharmapScriptChaptersModel_Type = {
    PyObject_HEAD_INIT(NULL)
    0,                                 /* ob_size */
    "gucharmap.ScriptChaptersModel",                   /* tp_name */
    sizeof(PyGObject),          /* tp_basicsize */
    0,                                 /* tp_itemsize */
    /* methods */
    (destructor)0,        /* tp_dealloc */
    (printfunc)0,                      /* tp_print */
    (getattrfunc)0,       /* tp_getattr */
    (setattrfunc)0,       /* tp_setattr */
    (cmpfunc)0,           /* tp_compare */
    (reprfunc)0,             /* tp_repr */
    (PyNumberMethods*)0,     /* tp_as_number */
    (PySequenceMethods*)0, /* tp_as_sequence */
    (PyMappingMethods*)0,   /* tp_as_mapping */
    (hashfunc)0,             /* tp_hash */
    (ternaryfunc)0,          /* tp_call */
    (reprfunc)0,              /* tp_str */
    (getattrofunc)0,     /* tp_getattro */
    (setattrofunc)0,     /* tp_setattro */
    (PyBufferProcs*)0,  /* tp_as_buffer */
    Py_TPFLAGS_DEFAULT | Py_TPFLAGS_BASETYPE,                      /* tp_flags */
    NULL,                        /* Documentation string */
    (traverseproc)0,     /* tp_traverse */
    (inquiry)0,             /* tp_clear */
    (richcmpfunc)0,   /* tp_richcompare */
    offsetof(PyGObject, weakreflist),             /* tp_weaklistoffset */
    (getiterfunc)0,          /* tp_iter */
    (iternextfunc)0,     /* tp_iternext */
    (struct PyMethodDef*)NULL, /* tp_methods */
    (struct PyMemberDef*)0,              /* tp_members */
    (struct PyGetSetDef*)0,  /* tp_getset */
    NULL,                              /* tp_base */
    NULL,                              /* tp_dict */
    (descrgetfunc)0,    /* tp_descr_get */
    (descrsetfunc)0,    /* tp_descr_set */
    offsetof(PyGObject, inst_dict),                 /* tp_dictoffset */
    (initproc)_wrap_gucharmap_script_chapters_model_new,             /* tp_init */
    (allocfunc)0,           /* tp_alloc */
    (newfunc)0,               /* tp_new */
    (freefunc)0,             /* tp_free */
    (inquiry)0              /* tp_is_gc */
};



/* ----------- GucharmapScriptCodepointList ----------- */

static int
_wrap_gucharmap_script_codepoint_list_new(PyGObject *self, PyObject *args, PyObject *kwargs)
{
    static char* kwlist[] = { NULL };

    if (!PyArg_ParseTupleAndKeywords(args, kwargs,
                                     ":gucharmap.ScriptCodepointList.__init__",
                                     kwlist))
        return -1;

    pygobject_constructv(self, 0, NULL);
    if (!self->obj) {
        PyErr_SetString(
            PyExc_RuntimeError, 
            "could not create gucharmap.ScriptCodepointList object");
        return -1;
    }
    return 0;
}

static PyObject *
_wrap_gucharmap_script_codepoint_list_set_script(PyGObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "script", NULL };
    char *script;
    int ret;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs,"s:GucharmapScriptCodepointList.set_script", kwlist, &script))
        return NULL;
    
    ret = gucharmap_script_codepoint_list_set_script(GUCHARMAP_SCRIPT_CODEPOINT_LIST(self->obj), script);
    
    return PyBool_FromLong(ret);

}

static PyObject *
_wrap_gucharmap_script_codepoint_list_append_script(PyGObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "script", NULL };
    char *script;
    int ret;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs,"s:GucharmapScriptCodepointList.append_script", kwlist, &script))
        return NULL;
    
    ret = gucharmap_script_codepoint_list_append_script(GUCHARMAP_SCRIPT_CODEPOINT_LIST(self->obj), script);
    
    return PyBool_FromLong(ret);

}

static const PyMethodDef _PyGucharmapScriptCodepointList_methods[] = {
    { "set_script", (PyCFunction)_wrap_gucharmap_script_codepoint_list_set_script, METH_VARARGS|METH_KEYWORDS,
      NULL },
    { "append_script", (PyCFunction)_wrap_gucharmap_script_codepoint_list_append_script, METH_VARARGS|METH_KEYWORDS,
      NULL },
    { NULL, NULL, 0, NULL }
};

PyTypeObject G_GNUC_INTERNAL PyGucharmapScriptCodepointList_Type = {
    PyObject_HEAD_INIT(NULL)
    0,                                 /* ob_size */
    "gucharmap.ScriptCodepointList",                   /* tp_name */
    sizeof(PyGObject),          /* tp_basicsize */
    0,                                 /* tp_itemsize */
    /* methods */
    (destructor)0,        /* tp_dealloc */
    (printfunc)0,                      /* tp_print */
    (getattrfunc)0,       /* tp_getattr */
    (setattrfunc)0,       /* tp_setattr */
    (cmpfunc)0,           /* tp_compare */
    (reprfunc)0,             /* tp_repr */
    (PyNumberMethods*)0,     /* tp_as_number */
    (PySequenceMethods*)0, /* tp_as_sequence */
    (PyMappingMethods*)0,   /* tp_as_mapping */
    (hashfunc)0,             /* tp_hash */
    (ternaryfunc)0,          /* tp_call */
    (reprfunc)0,              /* tp_str */
    (getattrofunc)0,     /* tp_getattro */
    (setattrofunc)0,     /* tp_setattro */
    (PyBufferProcs*)0,  /* tp_as_buffer */
    Py_TPFLAGS_DEFAULT | Py_TPFLAGS_BASETYPE,                      /* tp_flags */
    NULL,                        /* Documentation string */
    (traverseproc)0,     /* tp_traverse */
    (inquiry)0,             /* tp_clear */
    (richcmpfunc)0,   /* tp_richcompare */
    offsetof(PyGObject, weakreflist),             /* tp_weaklistoffset */
    (getiterfunc)0,          /* tp_iter */
    (iternextfunc)0,     /* tp_iternext */
    (struct PyMethodDef*)_PyGucharmapScriptCodepointList_methods, /* tp_methods */
    (struct PyMemberDef*)0,              /* tp_members */
    (struct PyGetSetDef*)0,  /* tp_getset */
    NULL,                              /* tp_base */
    NULL,                              /* tp_dict */
    (descrgetfunc)0,    /* tp_descr_get */
    (descrsetfunc)0,    /* tp_descr_set */
    offsetof(PyGObject, inst_dict),                 /* tp_dictoffset */
    (initproc)_wrap_gucharmap_script_codepoint_list_new,             /* tp_init */
    (allocfunc)0,           /* tp_alloc */
    (newfunc)0,               /* tp_new */
    (freefunc)0,             /* tp_free */
    (inquiry)0              /* tp_is_gc */
};



/* ----------- functions ----------- */

static PyObject *
_wrap_gucharmap_get_unicode_name(PyObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "uc", NULL };
    const gchar *ret;
    gunichar uc;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs,"O&:gucharmap_get_unicode_name", kwlist, pyg_pyobj_to_unichar_conv, &uc))
        return NULL;
    
    ret = gucharmap_get_unicode_name(uc);
    
    if (ret)
        return PyString_FromString(ret);
    Py_INCREF(Py_None);
    return Py_None;
}

static PyObject *
_wrap_gucharmap_get_unicode_data_name(PyObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "uc", NULL };
    const gchar *ret;
    gunichar uc;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs,"O&:gucharmap_get_unicode_data_name", kwlist, pyg_pyobj_to_unichar_conv, &uc))
        return NULL;
    
    ret = gucharmap_get_unicode_data_name(uc);
    
    if (ret)
        return PyString_FromString(ret);
    Py_INCREF(Py_None);
    return Py_None;
}

static PyObject *
_wrap_gucharmap_get_unicode_data_name_count(PyObject *self)
{
    int ret;

    
    ret = gucharmap_get_unicode_data_name_count();
    
    return PyInt_FromLong(ret);
}

static PyObject *
_wrap_gucharmap_get_unicode_version(PyObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "wc", NULL };
    gunichar wc;
    gint ret;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs,"O&:gucharmap_get_unicode_version", kwlist, pyg_pyobj_to_unichar_conv, &wc))
        return NULL;
    
    ret = gucharmap_get_unicode_version(wc);
    
    return pyg_enum_from_gtype(GUCHARMAP_TYPE_UNICODE_VERSION, ret);
}

static PyObject *
_wrap_gucharmap_get_unicode_category_name(PyObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "uc", NULL };
    const gchar *ret;
    gunichar uc;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs,"O&:gucharmap_get_unicode_category_name", kwlist, pyg_pyobj_to_unichar_conv, &uc))
        return NULL;
    
    ret = gucharmap_get_unicode_category_name(uc);
    
    if (ret)
        return PyString_FromString(ret);
    Py_INCREF(Py_None);
    return Py_None;
}

static PyObject *
_wrap_gucharmap_get_unihan_count(PyObject *self)
{
    int ret;

    
    ret = gucharmap_get_unihan_count();
    
    return PyInt_FromLong(ret);
}

static PyObject *
_wrap_gucharmap_get_unicode_kDefinition(PyObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "uc", NULL };
    const gchar *ret;
    gunichar uc;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs,"O&:gucharmap_get_unicode_kDefinition", kwlist, pyg_pyobj_to_unichar_conv, &uc))
        return NULL;
    
    ret = gucharmap_get_unicode_kDefinition(uc);
    
    if (ret)
        return PyString_FromString(ret);
    Py_INCREF(Py_None);
    return Py_None;
}

static PyObject *
_wrap_gucharmap_get_unicode_kCantonese(PyObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "uc", NULL };
    const gchar *ret;
    gunichar uc;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs,"O&:gucharmap_get_unicode_kCantonese", kwlist, pyg_pyobj_to_unichar_conv, &uc))
        return NULL;
    
    ret = gucharmap_get_unicode_kCantonese(uc);
    
    if (ret)
        return PyString_FromString(ret);
    Py_INCREF(Py_None);
    return Py_None;
}

static PyObject *
_wrap_gucharmap_get_unicode_kMandarin(PyObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "uc", NULL };
    const gchar *ret;
    gunichar uc;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs,"O&:gucharmap_get_unicode_kMandarin", kwlist, pyg_pyobj_to_unichar_conv, &uc))
        return NULL;
    
    ret = gucharmap_get_unicode_kMandarin(uc);
    
    if (ret)
        return PyString_FromString(ret);
    Py_INCREF(Py_None);
    return Py_None;
}

static PyObject *
_wrap_gucharmap_get_unicode_kTang(PyObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "uc", NULL };
    const gchar *ret;
    gunichar uc;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs,"O&:gucharmap_get_unicode_kTang", kwlist, pyg_pyobj_to_unichar_conv, &uc))
        return NULL;
    
    ret = gucharmap_get_unicode_kTang(uc);
    
    if (ret)
        return PyString_FromString(ret);
    Py_INCREF(Py_None);
    return Py_None;
}

static PyObject *
_wrap_gucharmap_get_unicode_kKorean(PyObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "uc", NULL };
    const gchar *ret;
    gunichar uc;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs,"O&:gucharmap_get_unicode_kKorean", kwlist, pyg_pyobj_to_unichar_conv, &uc))
        return NULL;
    
    ret = gucharmap_get_unicode_kKorean(uc);
    
    if (ret)
        return PyString_FromString(ret);
    Py_INCREF(Py_None);
    return Py_None;
}

static PyObject *
_wrap_gucharmap_get_unicode_kJapaneseKun(PyObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "uc", NULL };
    const gchar *ret;
    gunichar uc;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs,"O&:gucharmap_get_unicode_kJapaneseKun", kwlist, pyg_pyobj_to_unichar_conv, &uc))
        return NULL;
    
    ret = gucharmap_get_unicode_kJapaneseKun(uc);
    
    if (ret)
        return PyString_FromString(ret);
    Py_INCREF(Py_None);
    return Py_None;
}

static PyObject *
_wrap_gucharmap_get_unicode_kJapaneseOn(PyObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "uc", NULL };
    const gchar *ret;
    gunichar uc;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs,"O&:gucharmap_get_unicode_kJapaneseOn", kwlist, pyg_pyobj_to_unichar_conv, &uc))
        return NULL;
    
    ret = gucharmap_get_unicode_kJapaneseOn(uc);
    
    if (ret)
        return PyString_FromString(ret);
    Py_INCREF(Py_None);
    return Py_None;
}

static PyObject *
_wrap_gucharmap_unichar_validate(PyObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "wc", NULL };
    int ret;
    gunichar wc;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs,"O&:gucharmap_unichar_validate", kwlist, pyg_pyobj_to_unichar_conv, &wc))
        return NULL;
    
    ret = gucharmap_unichar_validate(wc);
    
    return PyBool_FromLong(ret);

}

static PyObject *
_wrap_gucharmap_unichar_to_printable_utf8(PyObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "wc", "outbuf", NULL };
    char *outbuf;
    int ret;
    gunichar wc;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs,"O&s:gucharmap_unichar_to_printable_utf8", kwlist, pyg_pyobj_to_unichar_conv, &wc, &outbuf))
        return NULL;
    
    ret = gucharmap_unichar_to_printable_utf8(wc, outbuf);
    
    return PyInt_FromLong(ret);
}

static PyObject *
_wrap_gucharmap_unichar_isdefined(PyObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "wc", NULL };
    int ret;
    gunichar wc;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs,"O&:gucharmap_unichar_isdefined", kwlist, pyg_pyobj_to_unichar_conv, &wc))
        return NULL;
    
    ret = gucharmap_unichar_isdefined(wc);
    
    return PyBool_FromLong(ret);

}

static PyObject *
_wrap_gucharmap_unichar_isgraph(PyObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "wc", NULL };
    int ret;
    gunichar wc;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs,"O&:gucharmap_unichar_isgraph", kwlist, pyg_pyobj_to_unichar_conv, &wc))
        return NULL;
    
    ret = gucharmap_unichar_isgraph(wc);
    
    return PyBool_FromLong(ret);

}

static PyObject *
_wrap_gucharmap_unicode_get_script_for_char(PyObject *self, PyObject *args, PyObject *kwargs)
{
    static char *kwlist[] = { "wc", NULL };
    const gchar *ret;
    gunichar wc;

    if (!PyArg_ParseTupleAndKeywords(args, kwargs,"O&:gucharmap_unicode_get_script_for_char", kwlist, pyg_pyobj_to_unichar_conv, &wc))
        return NULL;
    
    ret = gucharmap_unicode_get_script_for_char(wc);
    
    if (ret)
        return PyString_FromString(ret);
    Py_INCREF(Py_None);
    return Py_None;
}

static PyObject *
_wrap_gucharmap_unicode_get_locale_character(PyObject *self)
{
    gunichar ret;
    Py_UNICODE py_ret;

    
    ret = gucharmap_unicode_get_locale_character();
    
#if !defined(Py_UNICODE_SIZE) || Py_UNICODE_SIZE == 2
    if (ret > 0xffff) {
        PyErr_SetString(PyExc_RuntimeError, "returned character can not be represented in 16-bit unicode");
        return NULL;
    }
#endif
    py_ret = (Py_UNICODE)ret;
    return PyUnicode_FromUnicode(&py_ret, 1);

}

const PyMethodDef pygucharmap_functions[] = {
    { "gucharmap_get_unicode_name", (PyCFunction)_wrap_gucharmap_get_unicode_name, METH_VARARGS|METH_KEYWORDS,
      NULL },
    { "gucharmap_get_unicode_data_name", (PyCFunction)_wrap_gucharmap_get_unicode_data_name, METH_VARARGS|METH_KEYWORDS,
      NULL },
    { "gucharmap_get_unicode_data_name_count", (PyCFunction)_wrap_gucharmap_get_unicode_data_name_count, METH_NOARGS,
      NULL },
    { "gucharmap_get_unicode_version", (PyCFunction)_wrap_gucharmap_get_unicode_version, METH_VARARGS|METH_KEYWORDS,
      NULL },
    { "gucharmap_get_unicode_category_name", (PyCFunction)_wrap_gucharmap_get_unicode_category_name, METH_VARARGS|METH_KEYWORDS,
      NULL },
    { "gucharmap_get_unihan_count", (PyCFunction)_wrap_gucharmap_get_unihan_count, METH_NOARGS,
      NULL },
    { "gucharmap_get_unicode_kDefinition", (PyCFunction)_wrap_gucharmap_get_unicode_kDefinition, METH_VARARGS|METH_KEYWORDS,
      NULL },
    { "gucharmap_get_unicode_kCantonese", (PyCFunction)_wrap_gucharmap_get_unicode_kCantonese, METH_VARARGS|METH_KEYWORDS,
      NULL },
    { "gucharmap_get_unicode_kMandarin", (PyCFunction)_wrap_gucharmap_get_unicode_kMandarin, METH_VARARGS|METH_KEYWORDS,
      NULL },
    { "gucharmap_get_unicode_kTang", (PyCFunction)_wrap_gucharmap_get_unicode_kTang, METH_VARARGS|METH_KEYWORDS,
      NULL },
    { "gucharmap_get_unicode_kKorean", (PyCFunction)_wrap_gucharmap_get_unicode_kKorean, METH_VARARGS|METH_KEYWORDS,
      NULL },
    { "gucharmap_get_unicode_kJapaneseKun", (PyCFunction)_wrap_gucharmap_get_unicode_kJapaneseKun, METH_VARARGS|METH_KEYWORDS,
      NULL },
    { "gucharmap_get_unicode_kJapaneseOn", (PyCFunction)_wrap_gucharmap_get_unicode_kJapaneseOn, METH_VARARGS|METH_KEYWORDS,
      NULL },
    { "gucharmap_unichar_validate", (PyCFunction)_wrap_gucharmap_unichar_validate, METH_VARARGS|METH_KEYWORDS,
      NULL },
    { "gucharmap_unichar_to_printable_utf8", (PyCFunction)_wrap_gucharmap_unichar_to_printable_utf8, METH_VARARGS|METH_KEYWORDS,
      NULL },
    { "gucharmap_unichar_isdefined", (PyCFunction)_wrap_gucharmap_unichar_isdefined, METH_VARARGS|METH_KEYWORDS,
      NULL },
    { "gucharmap_unichar_isgraph", (PyCFunction)_wrap_gucharmap_unichar_isgraph, METH_VARARGS|METH_KEYWORDS,
      NULL },
    { "gucharmap_unicode_get_script_for_char", (PyCFunction)_wrap_gucharmap_unicode_get_script_for_char, METH_VARARGS|METH_KEYWORDS,
      NULL },
    { "gucharmap_unicode_get_locale_character", (PyCFunction)_wrap_gucharmap_unicode_get_locale_character, METH_NOARGS,
      NULL },
    { NULL, NULL, 0, NULL }
};


/* ----------- enums and flags ----------- */

void
pygucharmap_add_constants(PyObject *module, const gchar *strip_prefix)
{
#ifdef VERSION
    PyModule_AddStringConstant(module, "__version__", VERSION);
#endif
  pyg_enum_add(module, "CharmapPageType", strip_prefix, GUCHARMAP_TYPE_CHARMAP_PAGE_TYPE);
  pyg_enum_add(module, "UnicodeVersion", strip_prefix, GUCHARMAP_TYPE_UNICODE_VERSION);

  if (PyErr_Occurred())
    PyErr_Print();
}

/* initialise stuff extension classes */
void
pygucharmap_register_classes(PyObject *d)
{
    PyObject *module;

    if ((module = PyImport_ImportModule("gobject")) != NULL) {
        _PyGObject_Type = (PyTypeObject *)PyObject_GetAttrString(module, "GObject");
        if (_PyGObject_Type == NULL) {
            PyErr_SetString(PyExc_ImportError,
                "cannot import name GObject from gobject");
            return ;
        }
    } else {
        PyErr_SetString(PyExc_ImportError,
            "could not import gobject");
        return ;
    }
    if ((module = PyImport_ImportModule("gtk")) != NULL) {
        _PyGtkWidget_Type = (PyTypeObject *)PyObject_GetAttrString(module, "Widget");
        if (_PyGtkWidget_Type == NULL) {
            PyErr_SetString(PyExc_ImportError,
                "cannot import name Widget from gtk");
            return ;
        }
        _PyGtkBin_Type = (PyTypeObject *)PyObject_GetAttrString(module, "Bin");
        if (_PyGtkBin_Type == NULL) {
            PyErr_SetString(PyExc_ImportError,
                "cannot import name Bin from gtk");
            return ;
        }
        _PyGtkHPaned_Type = (PyTypeObject *)PyObject_GetAttrString(module, "HPaned");
        if (_PyGtkHPaned_Type == NULL) {
            PyErr_SetString(PyExc_ImportError,
                "cannot import name HPaned from gtk");
            return ;
        }
        _PyGtkDrawingArea_Type = (PyTypeObject *)PyObject_GetAttrString(module, "DrawingArea");
        if (_PyGtkDrawingArea_Type == NULL) {
            PyErr_SetString(PyExc_ImportError,
                "cannot import name DrawingArea from gtk");
            return ;
        }
        _PyGtkListStore_Type = (PyTypeObject *)PyObject_GetAttrString(module, "ListStore");
        if (_PyGtkListStore_Type == NULL) {
            PyErr_SetString(PyExc_ImportError,
                "cannot import name ListStore from gtk");
            return ;
        }
        _PyGtkTreeView_Type = (PyTypeObject *)PyObject_GetAttrString(module, "TreeView");
        if (_PyGtkTreeView_Type == NULL) {
            PyErr_SetString(PyExc_ImportError,
                "cannot import name TreeView from gtk");
            return ;
        }
    } else {
        PyErr_SetString(PyExc_ImportError,
            "could not import gtk");
        return ;
    }


#line 1816 "gucharmap.c"
    pygobject_register_class(d, "GucharmapChaptersModel", GUCHARMAP_TYPE_CHAPTERS_MODEL, &PyGucharmapChaptersModel_Type, Py_BuildValue("(O)", &PyGtkListStore_Type));
    pygobject_register_class(d, "GucharmapBlockChaptersModel", GUCHARMAP_TYPE_BLOCK_CHAPTERS_MODEL, &PyGucharmapBlockChaptersModel_Type, Py_BuildValue("(O)", &PyGucharmapChaptersModel_Type));
    pyg_set_object_has_new_constructor(GUCHARMAP_TYPE_BLOCK_CHAPTERS_MODEL);
    pygobject_register_class(d, "GucharmapChaptersView", GUCHARMAP_TYPE_CHAPTERS_VIEW, &PyGucharmapChaptersView_Type, Py_BuildValue("(O)", &PyGtkTreeView_Type));
    pyg_set_object_has_new_constructor(GUCHARMAP_TYPE_CHAPTERS_VIEW);
    pygobject_register_class(d, "GucharmapCharmap", GUCHARMAP_TYPE_CHARMAP, &PyGucharmapCharmap_Type, Py_BuildValue("(O)", &PyGtkHPaned_Type));
    pyg_set_object_has_new_constructor(GUCHARMAP_TYPE_CHARMAP);
    pygobject_register_class(d, "GucharmapChartable", GUCHARMAP_TYPE_CHARTABLE, &PyGucharmapChartable_Type, Py_BuildValue("(O)", &PyGtkDrawingArea_Type));
    pyg_set_object_has_new_constructor(GUCHARMAP_TYPE_CHARTABLE);
    pygobject_register_class(d, "GucharmapCodepointList", GUCHARMAP_TYPE_CODEPOINT_LIST, &PyGucharmapCodepointList_Type, Py_BuildValue("(O)", &PyGObject_Type));
    pyg_set_object_has_new_constructor(GUCHARMAP_TYPE_CODEPOINT_LIST);
    pygobject_register_class(d, "GucharmapBlockCodepointList", GUCHARMAP_TYPE_BLOCK_CODEPOINT_LIST, &PyGucharmapBlockCodepointList_Type, Py_BuildValue("(O)", &PyGucharmapCodepointList_Type));
    pygobject_register_class(d, "GucharmapScriptChaptersModel", GUCHARMAP_TYPE_SCRIPT_CHAPTERS_MODEL, &PyGucharmapScriptChaptersModel_Type, Py_BuildValue("(O)", &PyGucharmapChaptersModel_Type));
    pyg_set_object_has_new_constructor(GUCHARMAP_TYPE_SCRIPT_CHAPTERS_MODEL);
    pygobject_register_class(d, "GucharmapScriptCodepointList", GUCHARMAP_TYPE_SCRIPT_CODEPOINT_LIST, &PyGucharmapScriptCodepointList_Type, Py_BuildValue("(O)", &PyGucharmapCodepointList_Type));
    pyg_set_object_has_new_constructor(GUCHARMAP_TYPE_SCRIPT_CODEPOINT_LIST);
}
