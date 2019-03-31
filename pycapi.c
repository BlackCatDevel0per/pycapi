# include "Python.h"


# ifndef Py_UNUSED
    # define Py_UNUSED(X) X
# endif


# define CAPI_RETURN_VOID(CALL) \
    CALL;                       \
    if (PyErr_Occurred()) {     \
        return NULL;            \
    }                           \
    Py_RETURN_NONE;


# define CAPI_METHOD_VOID(F) {#F, capi_##F, METH_NOARGS, NULL}
# define CAPI_DEFINE_VOID(RETURN, F)                                                \
static PyObject* capi_##F(PyObject* Py_UNUSED(self), PyObject* Py_UNUSED(unused)) { \
    RETURN(F());                                                                    \
}

# define CAPI_METHOD_1PYOBJECT(F) {#F, capi_##F, METH_O, NULL}
# define CAPI_DEFINE_1PYOBJECT(RETURN, F)                             \
static PyObject* capi_##F(PyObject* Py_UNUSED(self), PyObject* arg) { \
    RETURN(F(arg));                                                   \
}

# define CAPI_METHOD_2PYOBJECT(F) {#F, capi_##F, METH_VARARGS, NULL}
# define CAPI_DEFINE_2PYOBJECT(RETURN, F)                              \
static PyObject* capi_##F(PyObject* Py_UNUSED(self), PyObject* args) { \
    PyObject* parsed[2];                                               \
    if(!PyArg_UnpackTuple(args, #F, 2, 2, &parsed[0], &parsed[1])) {   \
        return NULL;                                                   \
    }                                                                  \
    RETURN(F(parsed[0], parsed[1]));                                   \
}


CAPI_DEFINE_VOID(CAPI_RETURN_VOID, PyErr_BadInternalCall)
CAPI_DEFINE_VOID(CAPI_RETURN_VOID, PyErr_Clear)
CAPI_DEFINE_VOID(CAPI_RETURN_VOID, PyErr_Print)
CAPI_DEFINE_VOID(CAPI_RETURN_VOID, PyErr_SetInterrupt)
CAPI_DEFINE_VOID(CAPI_RETURN_VOID, PyEval_InitThreads)
CAPI_DEFINE_VOID(CAPI_RETURN_VOID, PyEval_ReleaseLock)
CAPI_DEFINE_VOID(CAPI_RETURN_VOID, PyImport_Cleanup)
CAPI_DEFINE_VOID(CAPI_RETURN_VOID, PySys_ResetWarnOptions)
CAPI_DEFINE_VOID(CAPI_RETURN_VOID, Py_Finalize)
CAPI_DEFINE_VOID(CAPI_RETURN_VOID, Py_Initialize)

CAPI_DEFINE_1PYOBJECT(CAPI_RETURN_VOID, PyDict_Clear)
CAPI_DEFINE_1PYOBJECT(CAPI_RETURN_VOID, PyErr_SetNone)
CAPI_DEFINE_1PYOBJECT(CAPI_RETURN_VOID, PyErr_WriteUnraisable)
CAPI_DEFINE_1PYOBJECT(CAPI_RETURN_VOID, PyObject_GC_Track)
CAPI_DEFINE_1PYOBJECT(CAPI_RETURN_VOID, PySys_AddWarnOptionUnicode)
CAPI_DEFINE_1PYOBJECT(CAPI_RETURN_VOID, Py_CLEAR)
CAPI_DEFINE_1PYOBJECT(CAPI_RETURN_VOID, Py_DECREF)
CAPI_DEFINE_1PYOBJECT(CAPI_RETURN_VOID, Py_INCREF)
CAPI_DEFINE_1PYOBJECT(CAPI_RETURN_VOID, Py_ReprLeave)
CAPI_DEFINE_1PYOBJECT(CAPI_RETURN_VOID, Py_XDECREF)
CAPI_DEFINE_1PYOBJECT(CAPI_RETURN_VOID, Py_XINCREF)

CAPI_DEFINE_2PYOBJECT(CAPI_RETURN_VOID, PyCell_SET)
CAPI_DEFINE_2PYOBJECT(CAPI_RETURN_VOID, PyErr_SetObject)
CAPI_DEFINE_2PYOBJECT(CAPI_RETURN_VOID, PyException_SetCause)
CAPI_DEFINE_2PYOBJECT(CAPI_RETURN_VOID, PyException_SetContext)

# if 0x030700A0 <= PY_VERSION_HEX
    CAPI_DEFINE_VOID(CAPI_RETURN_VOID, PyOS_AfterFork_Child)
    CAPI_DEFINE_VOID(CAPI_RETURN_VOID, PyOS_AfterFork_Parent)
    CAPI_DEFINE_VOID(CAPI_RETURN_VOID, PyOS_BeforeFork)
# else
    CAPI_DEFINE_VOID(CAPI_RETURN_VOID, PyOS_AfterFork)
# endif

# if 0x030200A0 <= PY_VERSION_HEX
# else
    CAPI_DEFINE_VOID(CAPI_RETURN_VOID, PyEval_AcquireLock)
# endif


static PyMethodDef CAPIMethods[] =  {

    CAPI_METHOD_VOID(PyErr_BadInternalCall),
    CAPI_METHOD_VOID(PyErr_Clear),
    CAPI_METHOD_VOID(PyErr_Print),
    CAPI_METHOD_VOID(PyErr_SetInterrupt),
    CAPI_METHOD_VOID(PyEval_InitThreads),
    CAPI_METHOD_VOID(PyEval_ReleaseLock),
    CAPI_METHOD_VOID(PyImport_Cleanup),
    CAPI_METHOD_VOID(PySys_ResetWarnOptions),
    CAPI_METHOD_VOID(Py_Finalize),
    CAPI_METHOD_VOID(Py_Initialize),

    CAPI_METHOD_1PYOBJECT(PyDict_Clear),
    CAPI_METHOD_1PYOBJECT(PyErr_SetNone),
    CAPI_METHOD_1PYOBJECT(PyErr_WriteUnraisable),
    CAPI_METHOD_1PYOBJECT(PyObject_GC_Track),
    CAPI_METHOD_1PYOBJECT(PySys_AddWarnOptionUnicode),
    CAPI_METHOD_1PYOBJECT(Py_CLEAR),
    CAPI_METHOD_1PYOBJECT(Py_DECREF),
    CAPI_METHOD_1PYOBJECT(Py_INCREF),
    CAPI_METHOD_1PYOBJECT(Py_ReprLeave),
    CAPI_METHOD_1PYOBJECT(Py_XDECREF),
    CAPI_METHOD_1PYOBJECT(Py_XINCREF),

    CAPI_METHOD_2PYOBJECT(PyCell_SET),
    CAPI_METHOD_2PYOBJECT(PyErr_SetObject),
    CAPI_METHOD_2PYOBJECT(PyException_SetCause),
    CAPI_METHOD_2PYOBJECT(PyException_SetContext),

    # if 0x030700A0 <= PY_VERSION_HEX
        CAPI_METHOD_VOID(PyOS_AfterFork_Child),
        CAPI_METHOD_VOID(PyOS_AfterFork_Parent),
        CAPI_METHOD_VOID(PyOS_BeforeFork),
    # else
        CAPI_METHOD_VOID(PyOS_AfterFork),
    # endif

    # if 0x030200A0 <= PY_VERSION_HEX
    # else
        CAPI_METHOD_VOID(PyEval_AcquireLock),
    # endif

    {NULL, NULL, 0, NULL},
};


static struct PyModuleDef CAPIModule = {
    PyModuleDef_HEAD_INIT, "pycapi", NULL, -1, CAPIMethods,
};

PyObject* PyInit_pycapi(void) {
    return PyModule_Create(&CAPIModule);
}
