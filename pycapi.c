# include "Python.h"
# include "datetime.h"


# define CAPI_RETURN_LONG(CALL)      \
    long _result = CALL;      \
    if (PyErr_Occurred()) {          \
        return NULL;                 \
    }                                \
    return PyLong_FromLong(_result);

# define CAPI_RETURN_PYOBJECT(CALL)       \
    PyObject* _result = (PyObject*) CALL; \
    if (!_result) {                       \
        if (PyErr_Occurred()) {           \
            return NULL;                  \
        }                                 \
        Py_RETURN_NONE;                   \
    }                                     \
    return _result;

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

# define CAPI_METHOD_3PYOBJECT(F) {#F, capi_##F, METH_VARARGS, NULL}
# define CAPI_DEFINE_3PYOBJECT(RETURN, F)                                        \
static PyObject* capi_##F(PyObject* Py_UNUSED(self), PyObject* args) {           \
    PyObject* parsed[3];                                                         \
    if(!PyArg_UnpackTuple(args, #F, 3, 3, &parsed[0], &parsed[1], &parsed[2])) { \
        return NULL;                                                             \
    }                                                                            \
    RETURN(F(parsed[0], parsed[1], parsed[2]));                                  \
}


static void _PyVersion_Decrement(void) {
    PyErr_Format(
        PyExc_NotImplementedError,
        "_PyVersion_Decrement support is removed after Python %d.%d.%d (you are using %d.%d.%d). You must downgrade your Python version to use it.",
        PY_MAJOR_VERSION, PY_MINOR_VERSION, PY_MICRO_VERSION - 1,
        PY_MAJOR_VERSION, PY_MINOR_VERSION, PY_MICRO_VERSION
    );
}

static void _PyVersion_Increment(void) {
    PyErr_Format(
        PyExc_NotImplementedError,
        "_PyVersion_Increment support is added in Python %d.%d.%d (you are using %d.%d.%d). You must upgrade your Python version to use it.",
        PY_MAJOR_VERSION, PY_MINOR_VERSION, PY_MICRO_VERSION + 1,
        PY_MAJOR_VERSION, PY_MINOR_VERSION, PY_MICRO_VERSION
    );
}


CAPI_DEFINE_VOID(CAPI_RETURN_LONG, PyErr_BadArgument)
CAPI_DEFINE_VOID(CAPI_RETURN_LONG, PyErr_CheckSignals)
CAPI_DEFINE_VOID(CAPI_RETURN_LONG, PyImport_GetMagicNumber)
CAPI_DEFINE_VOID(CAPI_RETURN_LONG, Py_IsInitialized)

CAPI_DEFINE_VOID(CAPI_RETURN_PYOBJECT, PyDict_New)
CAPI_DEFINE_VOID(CAPI_RETURN_PYOBJECT, PyErr_NoMemory)
CAPI_DEFINE_VOID(CAPI_RETURN_PYOBJECT, PyErr_Occurred)
CAPI_DEFINE_VOID(CAPI_RETURN_PYOBJECT, PyEval_GetBuiltins)
CAPI_DEFINE_VOID(CAPI_RETURN_PYOBJECT, PyEval_GetLocals)
CAPI_DEFINE_VOID(CAPI_RETURN_PYOBJECT, PyEval_GetGlobals)
CAPI_DEFINE_VOID(CAPI_RETURN_PYOBJECT, PyFloat_GetInfo)
CAPI_DEFINE_VOID(CAPI_RETURN_PYOBJECT, PyImport_GetModuleDict)
CAPI_DEFINE_VOID(CAPI_RETURN_PYOBJECT, PySys_GetXOptions)
CAPI_DEFINE_VOID(CAPI_RETURN_PYOBJECT, PyThreadState_GetDict)

CAPI_DEFINE_VOID(CAPI_RETURN_VOID, PyErr_BadInternalCall)
CAPI_DEFINE_VOID(CAPI_RETURN_VOID, PyErr_Clear)
CAPI_DEFINE_VOID(CAPI_RETURN_VOID, PyErr_Print)
CAPI_DEFINE_VOID(CAPI_RETURN_VOID, PyErr_SetInterrupt)
CAPI_DEFINE_VOID(CAPI_RETURN_VOID, PyEval_AcquireLock)
CAPI_DEFINE_VOID(CAPI_RETURN_VOID, PyEval_InitThreads)
CAPI_DEFINE_VOID(CAPI_RETURN_VOID, PyEval_ReleaseLock)
CAPI_DEFINE_VOID(CAPI_RETURN_VOID, PyImport_Cleanup)
CAPI_DEFINE_VOID(CAPI_RETURN_VOID, PyOS_AfterFork)
CAPI_DEFINE_VOID(CAPI_RETURN_VOID, PySys_ResetWarnOptions)
CAPI_DEFINE_VOID(CAPI_RETURN_VOID, Py_Finalize)
CAPI_DEFINE_VOID(CAPI_RETURN_VOID, Py_Initialize)
CAPI_DEFINE_VOID(CAPI_RETURN_VOID, _PyVersion_Decrement)
CAPI_DEFINE_VOID(CAPI_RETURN_VOID, _PyVersion_Increment)

CAPI_DEFINE_1PYOBJECT(CAPI_RETURN_PYOBJECT, PyByteArray_FromObject)
CAPI_DEFINE_1PYOBJECT(CAPI_RETURN_PYOBJECT, PyBytes_FromObject)
CAPI_DEFINE_1PYOBJECT(CAPI_RETURN_PYOBJECT, PyCell_New)
CAPI_DEFINE_1PYOBJECT(CAPI_RETURN_PYOBJECT, PyCell_GET)
CAPI_DEFINE_1PYOBJECT(CAPI_RETURN_PYOBJECT, PyCell_Get)
CAPI_DEFINE_1PYOBJECT(CAPI_RETURN_PYOBJECT, PyCodec_StrictErrors)
CAPI_DEFINE_1PYOBJECT(CAPI_RETURN_PYOBJECT, PyCodec_IgnoreErrors)
CAPI_DEFINE_1PYOBJECT(CAPI_RETURN_PYOBJECT, PyCodec_ReplaceErrors)
CAPI_DEFINE_1PYOBJECT(CAPI_RETURN_PYOBJECT, PyCodec_XMLCharRefReplaceErrors)
CAPI_DEFINE_1PYOBJECT(CAPI_RETURN_PYOBJECT, PyCodec_BackslashReplaceErrors)
CAPI_DEFINE_1PYOBJECT(CAPI_RETURN_PYOBJECT, PyDate_FromTimestamp)
CAPI_DEFINE_1PYOBJECT(CAPI_RETURN_PYOBJECT, PyDateTime_FromTimestamp)
CAPI_DEFINE_1PYOBJECT(CAPI_RETURN_PYOBJECT, PyDict_Items)
CAPI_DEFINE_1PYOBJECT(CAPI_RETURN_PYOBJECT, PyDict_Keys)
CAPI_DEFINE_1PYOBJECT(CAPI_RETURN_PYOBJECT, PyDict_Copy)
CAPI_DEFINE_1PYOBJECT(CAPI_RETURN_PYOBJECT, PyDict_Values)
CAPI_DEFINE_1PYOBJECT(CAPI_RETURN_PYOBJECT, PyDictProxy_New)
CAPI_DEFINE_1PYOBJECT(CAPI_RETURN_PYOBJECT, PyErr_SetFromErrno)
CAPI_DEFINE_1PYOBJECT(CAPI_RETURN_PYOBJECT, PyException_GetCause)
CAPI_DEFINE_1PYOBJECT(CAPI_RETURN_PYOBJECT, PyException_GetContext)
CAPI_DEFINE_1PYOBJECT(CAPI_RETURN_PYOBJECT, PyException_GetTraceback)
CAPI_DEFINE_1PYOBJECT(CAPI_RETURN_PYOBJECT, PyFloat_FromString)
CAPI_DEFINE_1PYOBJECT(CAPI_RETURN_PYOBJECT, PyFrozenSet_New)
CAPI_DEFINE_1PYOBJECT(CAPI_RETURN_PYOBJECT, PyFunction_GetAnnotations)
CAPI_DEFINE_1PYOBJECT(CAPI_RETURN_PYOBJECT, PyFunction_GetClosure)
CAPI_DEFINE_1PYOBJECT(CAPI_RETURN_PYOBJECT, PyFunction_GetCode)
CAPI_DEFINE_1PYOBJECT(CAPI_RETURN_PYOBJECT, PyFunction_GetDefaults)
CAPI_DEFINE_1PYOBJECT(CAPI_RETURN_PYOBJECT, PyFunction_GetGlobals)
CAPI_DEFINE_1PYOBJECT(CAPI_RETURN_PYOBJECT, PyFunction_GetModule)
CAPI_DEFINE_1PYOBJECT(CAPI_RETURN_PYOBJECT, PyImport_AddModuleObject)
CAPI_DEFINE_1PYOBJECT(CAPI_RETURN_PYOBJECT, PyImport_GetImporter)
CAPI_DEFINE_1PYOBJECT(CAPI_RETURN_PYOBJECT, PyImport_Import)
CAPI_DEFINE_1PYOBJECT(CAPI_RETURN_PYOBJECT, PyImport_ReloadModule)
CAPI_DEFINE_1PYOBJECT(CAPI_RETURN_PYOBJECT, PyInstanceMethod_Function)
CAPI_DEFINE_1PYOBJECT(CAPI_RETURN_PYOBJECT, PyInstanceMethod_GET_FUNCTION)
CAPI_DEFINE_1PYOBJECT(CAPI_RETURN_PYOBJECT, PyInstanceMethod_New)
CAPI_DEFINE_1PYOBJECT(CAPI_RETURN_PYOBJECT, PyIter_Next)
CAPI_DEFINE_1PYOBJECT(CAPI_RETURN_PYOBJECT, PyList_AsTuple)
CAPI_DEFINE_1PYOBJECT(CAPI_RETURN_PYOBJECT, PyMapping_Items)
CAPI_DEFINE_1PYOBJECT(CAPI_RETURN_PYOBJECT, PyMapping_Keys)
CAPI_DEFINE_1PYOBJECT(CAPI_RETURN_PYOBJECT, PyMapping_Values)
CAPI_DEFINE_1PYOBJECT(CAPI_RETURN_PYOBJECT, PyMemoryView_FromObject)
CAPI_DEFINE_1PYOBJECT(CAPI_RETURN_PYOBJECT, PyMethod_Function)
CAPI_DEFINE_1PYOBJECT(CAPI_RETURN_PYOBJECT, PyMethod_GET_FUNCTION)
CAPI_DEFINE_1PYOBJECT(CAPI_RETURN_PYOBJECT, PyMethod_GET_SELF)
CAPI_DEFINE_1PYOBJECT(CAPI_RETURN_PYOBJECT, PyMethod_Self)
CAPI_DEFINE_1PYOBJECT(CAPI_RETURN_PYOBJECT, PyModule_GetDict)
CAPI_DEFINE_1PYOBJECT(CAPI_RETURN_PYOBJECT, PyModule_GetFilenameObject)
CAPI_DEFINE_1PYOBJECT(CAPI_RETURN_PYOBJECT, PyModule_GetNameObject)
CAPI_DEFINE_1PYOBJECT(CAPI_RETURN_PYOBJECT, PyModule_NewObject)
CAPI_DEFINE_1PYOBJECT(CAPI_RETURN_PYOBJECT, PyNumber_Absolute)
CAPI_DEFINE_1PYOBJECT(CAPI_RETURN_PYOBJECT, PyNumber_Float)
CAPI_DEFINE_1PYOBJECT(CAPI_RETURN_PYOBJECT, PyNumber_Index)
CAPI_DEFINE_1PYOBJECT(CAPI_RETURN_PYOBJECT, PyNumber_Invert)
CAPI_DEFINE_1PYOBJECT(CAPI_RETURN_PYOBJECT, PyNumber_Long)
CAPI_DEFINE_1PYOBJECT(CAPI_RETURN_PYOBJECT, PyNumber_Negative)
CAPI_DEFINE_1PYOBJECT(CAPI_RETURN_PYOBJECT, PyNumber_Positive)
CAPI_DEFINE_1PYOBJECT(CAPI_RETURN_PYOBJECT, PyObject_ASCII)
CAPI_DEFINE_1PYOBJECT(CAPI_RETURN_PYOBJECT, PyObject_Bytes)
CAPI_DEFINE_1PYOBJECT(CAPI_RETURN_PYOBJECT, PyObject_Dir)
CAPI_DEFINE_1PYOBJECT(CAPI_RETURN_PYOBJECT, PyObject_GetIter)
CAPI_DEFINE_1PYOBJECT(CAPI_RETURN_PYOBJECT, PyObject_Repr)
CAPI_DEFINE_1PYOBJECT(CAPI_RETURN_PYOBJECT, PyObject_Str)
CAPI_DEFINE_1PYOBJECT(CAPI_RETURN_PYOBJECT, PyObject_Type)
CAPI_DEFINE_1PYOBJECT(CAPI_RETURN_PYOBJECT, PySeqIter_New)
CAPI_DEFINE_1PYOBJECT(CAPI_RETURN_PYOBJECT, PySequence_List)
CAPI_DEFINE_1PYOBJECT(CAPI_RETURN_PYOBJECT, PySequence_Tuple)
CAPI_DEFINE_1PYOBJECT(CAPI_RETURN_PYOBJECT, PySet_New)
CAPI_DEFINE_1PYOBJECT(CAPI_RETURN_PYOBJECT, PySet_Pop)
CAPI_DEFINE_1PYOBJECT(CAPI_RETURN_PYOBJECT, PyUnicode_FromObject)
CAPI_DEFINE_1PYOBJECT(CAPI_RETURN_PYOBJECT, PyUnicode_AsUTF8String)
CAPI_DEFINE_1PYOBJECT(CAPI_RETURN_PYOBJECT, PyUnicode_AsUTF16String)
CAPI_DEFINE_1PYOBJECT(CAPI_RETURN_PYOBJECT, PyUnicode_AsUTF32String)
CAPI_DEFINE_1PYOBJECT(CAPI_RETURN_PYOBJECT, PyUnicode_AsUnicodeEscapeString)
CAPI_DEFINE_1PYOBJECT(CAPI_RETURN_PYOBJECT, PyUnicode_AsRawUnicodeEscapeString)
CAPI_DEFINE_1PYOBJECT(CAPI_RETURN_PYOBJECT, PyUnicode_AsLatin1String)
CAPI_DEFINE_1PYOBJECT(CAPI_RETURN_PYOBJECT, PyUnicode_AsASCIIString)
CAPI_DEFINE_1PYOBJECT(CAPI_RETURN_PYOBJECT, PyUnicode_EncodeFSDefault)
CAPI_DEFINE_1PYOBJECT(CAPI_RETURN_PYOBJECT, PyUnicodeDecodeError_GetEncoding)
CAPI_DEFINE_1PYOBJECT(CAPI_RETURN_PYOBJECT, PyUnicodeDecodeError_GetObject)
CAPI_DEFINE_1PYOBJECT(CAPI_RETURN_PYOBJECT, PyUnicodeDecodeError_GetReason)
CAPI_DEFINE_1PYOBJECT(CAPI_RETURN_PYOBJECT, PyWeakref_GET_OBJECT)
CAPI_DEFINE_1PYOBJECT(CAPI_RETURN_PYOBJECT, PyWeakref_GetObject)

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

CAPI_DEFINE_2PYOBJECT(CAPI_RETURN_PYOBJECT, PyByteArray_Concat)
CAPI_DEFINE_2PYOBJECT(CAPI_RETURN_PYOBJECT, PyCallIter_New)
CAPI_DEFINE_2PYOBJECT(CAPI_RETURN_PYOBJECT, PyDict_GetItem)
CAPI_DEFINE_2PYOBJECT(CAPI_RETURN_PYOBJECT, PyDict_GetItemWithError)
CAPI_DEFINE_2PYOBJECT(CAPI_RETURN_PYOBJECT, PyErr_SetFromErrnoWithFilenameObject)
CAPI_DEFINE_2PYOBJECT(CAPI_RETURN_PYOBJECT, PyFunction_New)
CAPI_DEFINE_2PYOBJECT(CAPI_RETURN_PYOBJECT, PyMethod_New)
CAPI_DEFINE_2PYOBJECT(CAPI_RETURN_PYOBJECT, PyNumber_Add)
CAPI_DEFINE_2PYOBJECT(CAPI_RETURN_PYOBJECT, PyNumber_And)
CAPI_DEFINE_2PYOBJECT(CAPI_RETURN_PYOBJECT, PyNumber_Divmod)
CAPI_DEFINE_2PYOBJECT(CAPI_RETURN_PYOBJECT, PyNumber_FloorDivide)
CAPI_DEFINE_2PYOBJECT(CAPI_RETURN_PYOBJECT, PyNumber_InPlaceAdd)
CAPI_DEFINE_2PYOBJECT(CAPI_RETURN_PYOBJECT, PyNumber_InPlaceAnd)
CAPI_DEFINE_2PYOBJECT(CAPI_RETURN_PYOBJECT, PyNumber_InPlaceFloorDivide)
CAPI_DEFINE_2PYOBJECT(CAPI_RETURN_PYOBJECT, PyNumber_InPlaceLshift)
CAPI_DEFINE_2PYOBJECT(CAPI_RETURN_PYOBJECT, PyNumber_InPlaceMultiply)
CAPI_DEFINE_2PYOBJECT(CAPI_RETURN_PYOBJECT, PyNumber_InPlaceOr)
CAPI_DEFINE_2PYOBJECT(CAPI_RETURN_PYOBJECT, PyNumber_InPlaceRemainder)
CAPI_DEFINE_2PYOBJECT(CAPI_RETURN_PYOBJECT, PyNumber_InPlaceRshift)
CAPI_DEFINE_2PYOBJECT(CAPI_RETURN_PYOBJECT, PyNumber_InPlaceSubtract)
CAPI_DEFINE_2PYOBJECT(CAPI_RETURN_PYOBJECT, PyNumber_InPlaceTrueDivide)
CAPI_DEFINE_2PYOBJECT(CAPI_RETURN_PYOBJECT, PyNumber_InPlaceXor)
CAPI_DEFINE_2PYOBJECT(CAPI_RETURN_PYOBJECT, PyNumber_Lshift)
CAPI_DEFINE_2PYOBJECT(CAPI_RETURN_PYOBJECT, PyNumber_Multiply)
CAPI_DEFINE_2PYOBJECT(CAPI_RETURN_PYOBJECT, PyNumber_Or)
CAPI_DEFINE_2PYOBJECT(CAPI_RETURN_PYOBJECT, PyNumber_Remainder)
CAPI_DEFINE_2PYOBJECT(CAPI_RETURN_PYOBJECT, PyNumber_Rshift)
CAPI_DEFINE_2PYOBJECT(CAPI_RETURN_PYOBJECT, PyNumber_Subtract)
CAPI_DEFINE_2PYOBJECT(CAPI_RETURN_PYOBJECT, PyNumber_TrueDivide)
CAPI_DEFINE_2PYOBJECT(CAPI_RETURN_PYOBJECT, PyNumber_Xor)
CAPI_DEFINE_2PYOBJECT(CAPI_RETURN_PYOBJECT, PyObject_CallObject)
CAPI_DEFINE_2PYOBJECT(CAPI_RETURN_PYOBJECT, PyObject_GenericGetAttr)
CAPI_DEFINE_2PYOBJECT(CAPI_RETURN_PYOBJECT, PyObject_GetAttr)
CAPI_DEFINE_2PYOBJECT(CAPI_RETURN_PYOBJECT, PyObject_GetItem)
CAPI_DEFINE_2PYOBJECT(CAPI_RETURN_PYOBJECT, PySequence_Concat)
CAPI_DEFINE_2PYOBJECT(CAPI_RETURN_PYOBJECT, PySequence_InPlaceConcat)
CAPI_DEFINE_2PYOBJECT(CAPI_RETURN_PYOBJECT, PyUnicode_AsCharmapString)
CAPI_DEFINE_2PYOBJECT(CAPI_RETURN_PYOBJECT, PyUnicode_Concat)
CAPI_DEFINE_2PYOBJECT(CAPI_RETURN_PYOBJECT, PyUnicode_Join)
CAPI_DEFINE_2PYOBJECT(CAPI_RETURN_PYOBJECT, PyUnicode_Format)
CAPI_DEFINE_2PYOBJECT(CAPI_RETURN_PYOBJECT, PyWeakref_NewProxy)
CAPI_DEFINE_2PYOBJECT(CAPI_RETURN_PYOBJECT, PyWeakref_NewRef)
CAPI_DEFINE_2PYOBJECT(CAPI_RETURN_PYOBJECT, PyWrapper_New)

CAPI_DEFINE_2PYOBJECT(CAPI_RETURN_VOID, PyCell_SET)
CAPI_DEFINE_2PYOBJECT(CAPI_RETURN_VOID, PyErr_SetObject)
CAPI_DEFINE_2PYOBJECT(CAPI_RETURN_VOID, PyException_SetCause)
CAPI_DEFINE_2PYOBJECT(CAPI_RETURN_VOID, PyException_SetContext)

CAPI_DEFINE_3PYOBJECT(CAPI_RETURN_PYOBJECT, PyDict_SetDefault)
CAPI_DEFINE_3PYOBJECT(CAPI_RETURN_PYOBJECT, PyErr_SetFromErrnoWithFilenameObjects)
CAPI_DEFINE_3PYOBJECT(CAPI_RETURN_PYOBJECT, PyErr_SetImportError)
CAPI_DEFINE_3PYOBJECT(CAPI_RETURN_PYOBJECT, PyEval_EvalCode)
CAPI_DEFINE_3PYOBJECT(CAPI_RETURN_PYOBJECT, PyFunction_NewWithQualName)
CAPI_DEFINE_3PYOBJECT(CAPI_RETURN_PYOBJECT, PyNumber_InPlacePower)
CAPI_DEFINE_3PYOBJECT(CAPI_RETURN_PYOBJECT, PyNumber_Power)
CAPI_DEFINE_3PYOBJECT(CAPI_RETURN_PYOBJECT, PyObject_Call)
CAPI_DEFINE_3PYOBJECT(CAPI_RETURN_PYOBJECT, PySlice_New)

CAPI_DEFINE_3PYOBJECT(CAPI_RETURN_VOID, PyErr_Restore)
CAPI_DEFINE_3PYOBJECT(CAPI_RETURN_VOID, PyErr_SetExcInfo)

# if 0x030700F0 <= PY_VERSION_HEX

    CAPI_DEFINE_VOID(CAPI_RETURN_LONG, PyContext_ClearFreeList)

    CAPI_DEFINE_VOID(CAPI_RETURN_PYOBJECT, PyContext_CopyCurrent)
    CAPI_DEFINE_VOID(CAPI_RETURN_PYOBJECT, PyContext_New)

    CAPI_DEFINE_VOID(CAPI_RETURN_VOID, PyOS_AfterFork_Child)
    CAPI_DEFINE_VOID(CAPI_RETURN_VOID, PyOS_AfterFork_Parent)
    CAPI_DEFINE_VOID(CAPI_RETURN_VOID, PyOS_BeforeFork)

    CAPI_DEFINE_1PYOBJECT(CAPI_RETURN_PYOBJECT, PyContext_Copy)
    CAPI_DEFINE_1PYOBJECT(CAPI_RETURN_PYOBJECT, PyTimeZone_FromOffset)
    CAPI_DEFINE_1PYOBJECT(CAPI_RETURN_PYOBJECT, PyImport_GetModule)

    CAPI_DEFINE_2PYOBJECT(CAPI_RETURN_PYOBJECT, PyContextVar_Set)
    CAPI_DEFINE_2PYOBJECT(CAPI_RETURN_PYOBJECT, PyTimeZone_FromOffsetAndName)

# endif

# if 0x030600F0 <= PY_VERSION_HEX

    CAPI_DEFINE_1PYOBJECT(CAPI_RETURN_PYOBJECT, PyOS_FSPath)        

# endif

# if 0x030500F0 <= PY_VERSION_HEX

    CAPI_DEFINE_1PYOBJECT(CAPI_RETURN_PYOBJECT, PyCodec_NameReplaceErrors)

    CAPI_DEFINE_2PYOBJECT(CAPI_RETURN_PYOBJECT, PyNumber_InPlaceMatrixMultiply)
    CAPI_DEFINE_2PYOBJECT(CAPI_RETURN_PYOBJECT, PyNumber_MatrixMultiply)

# endif

# ifdef MS_WINDOWS

    CAPI_DEFINE_1PYOBJECT(CAPI_RETURN_PYOBJECT, PyUnicode_AsMBCSString)

# endif


static PyMethodDef CAPIMethods[] =  {

    CAPI_METHOD_VOID(PyErr_BadArgument),
    CAPI_METHOD_VOID(PyErr_CheckSignals),
    CAPI_METHOD_VOID(PyImport_GetMagicNumber),
    CAPI_METHOD_VOID(Py_IsInitialized),

    CAPI_METHOD_VOID(PyDict_New),
    CAPI_METHOD_VOID(PyErr_NoMemory),
    CAPI_METHOD_VOID(PyErr_Occurred),
    CAPI_METHOD_VOID(PyEval_GetBuiltins),
    CAPI_METHOD_VOID(PyEval_GetLocals),
    CAPI_METHOD_VOID(PyEval_GetGlobals),
    CAPI_METHOD_VOID(PyFloat_GetInfo),
    CAPI_METHOD_VOID(PyImport_GetModuleDict),
    CAPI_METHOD_VOID(PySys_GetXOptions),
    CAPI_METHOD_VOID(PyThreadState_GetDict),

    CAPI_METHOD_VOID(PyErr_BadInternalCall),
    CAPI_METHOD_VOID(PyErr_Clear),
    CAPI_METHOD_VOID(PyErr_Print),
    CAPI_METHOD_VOID(PyErr_SetInterrupt),
    CAPI_METHOD_VOID(PyEval_AcquireLock),
    CAPI_METHOD_VOID(PyEval_InitThreads),
    CAPI_METHOD_VOID(PyEval_ReleaseLock),
    CAPI_METHOD_VOID(PyImport_Cleanup),
    CAPI_METHOD_VOID(PyOS_AfterFork),
    CAPI_METHOD_VOID(PySys_ResetWarnOptions),
    CAPI_METHOD_VOID(Py_Finalize),
    CAPI_METHOD_VOID(Py_Initialize),
    CAPI_METHOD_VOID(_PyVersion_Decrement),
    CAPI_METHOD_VOID(_PyVersion_Increment),

    CAPI_METHOD_1PYOBJECT(PyByteArray_FromObject),
    CAPI_METHOD_1PYOBJECT(PyBytes_FromObject),
    CAPI_METHOD_1PYOBJECT(PyCell_New),
    CAPI_METHOD_1PYOBJECT(PyCell_GET),
    CAPI_METHOD_1PYOBJECT(PyCell_Get),
    CAPI_METHOD_1PYOBJECT(PyCodec_StrictErrors),
    CAPI_METHOD_1PYOBJECT(PyCodec_IgnoreErrors),
    CAPI_METHOD_1PYOBJECT(PyCodec_ReplaceErrors),
    CAPI_METHOD_1PYOBJECT(PyCodec_XMLCharRefReplaceErrors),
    CAPI_METHOD_1PYOBJECT(PyCodec_BackslashReplaceErrors),
    CAPI_METHOD_1PYOBJECT(PyDate_FromTimestamp),
    CAPI_METHOD_1PYOBJECT(PyDateTime_FromTimestamp),
    CAPI_METHOD_1PYOBJECT(PyDict_Items),
    CAPI_METHOD_1PYOBJECT(PyDict_Keys),
    CAPI_METHOD_1PYOBJECT(PyDict_Copy),
    CAPI_METHOD_1PYOBJECT(PyDict_Values),
    CAPI_METHOD_1PYOBJECT(PyDictProxy_New),
    CAPI_METHOD_1PYOBJECT(PyErr_SetFromErrno),
    CAPI_METHOD_1PYOBJECT(PyException_GetCause),
    CAPI_METHOD_1PYOBJECT(PyException_GetContext),
    CAPI_METHOD_1PYOBJECT(PyException_GetTraceback),
    CAPI_METHOD_1PYOBJECT(PyFloat_FromString),
    CAPI_METHOD_1PYOBJECT(PyFrozenSet_New),
    CAPI_METHOD_1PYOBJECT(PyFunction_GetAnnotations),
    CAPI_METHOD_1PYOBJECT(PyFunction_GetClosure),
    CAPI_METHOD_1PYOBJECT(PyFunction_GetCode),
    CAPI_METHOD_1PYOBJECT(PyFunction_GetDefaults),
    CAPI_METHOD_1PYOBJECT(PyFunction_GetGlobals),
    CAPI_METHOD_1PYOBJECT(PyFunction_GetModule),
    CAPI_METHOD_1PYOBJECT(PyImport_AddModuleObject),
    CAPI_METHOD_1PYOBJECT(PyImport_GetImporter),
    CAPI_METHOD_1PYOBJECT(PyImport_Import),
    CAPI_METHOD_1PYOBJECT(PyImport_ReloadModule),
    CAPI_METHOD_1PYOBJECT(PyInstanceMethod_Function),
    CAPI_METHOD_1PYOBJECT(PyInstanceMethod_GET_FUNCTION),
    CAPI_METHOD_1PYOBJECT(PyInstanceMethod_New),
    CAPI_METHOD_1PYOBJECT(PyIter_Next),
    CAPI_METHOD_1PYOBJECT(PyList_AsTuple),
    CAPI_METHOD_1PYOBJECT(PyMapping_Items),
    CAPI_METHOD_1PYOBJECT(PyMapping_Keys),
    CAPI_METHOD_1PYOBJECT(PyMapping_Values),
    CAPI_METHOD_1PYOBJECT(PyMemoryView_FromObject),
    CAPI_METHOD_1PYOBJECT(PyMethod_Function),
    CAPI_METHOD_1PYOBJECT(PyMethod_GET_FUNCTION),
    CAPI_METHOD_1PYOBJECT(PyMethod_GET_SELF),
    CAPI_METHOD_1PYOBJECT(PyMethod_Self),
    CAPI_METHOD_1PYOBJECT(PyModule_GetDict),
    CAPI_METHOD_1PYOBJECT(PyModule_GetFilenameObject),
    CAPI_METHOD_1PYOBJECT(PyModule_GetNameObject),
    CAPI_METHOD_1PYOBJECT(PyModule_NewObject),
    CAPI_METHOD_1PYOBJECT(PyNumber_Absolute),
    CAPI_METHOD_1PYOBJECT(PyNumber_Float),
    CAPI_METHOD_1PYOBJECT(PyNumber_Index),
    CAPI_METHOD_1PYOBJECT(PyNumber_Invert),
    CAPI_METHOD_1PYOBJECT(PyNumber_Long),
    CAPI_METHOD_1PYOBJECT(PyNumber_Negative),
    CAPI_METHOD_1PYOBJECT(PyNumber_Positive),
    CAPI_METHOD_1PYOBJECT(PyObject_ASCII),
    CAPI_METHOD_1PYOBJECT(PyObject_Bytes),
    CAPI_METHOD_1PYOBJECT(PyObject_Dir),
    CAPI_METHOD_1PYOBJECT(PyObject_GetIter),
    CAPI_METHOD_1PYOBJECT(PyObject_Repr),
    CAPI_METHOD_1PYOBJECT(PyObject_Str),
    CAPI_METHOD_1PYOBJECT(PyObject_Type),
    CAPI_METHOD_1PYOBJECT(PySeqIter_New),
    CAPI_METHOD_1PYOBJECT(PySequence_List),
    CAPI_METHOD_1PYOBJECT(PySequence_Tuple),
    CAPI_METHOD_1PYOBJECT(PySet_New),
    CAPI_METHOD_1PYOBJECT(PySet_Pop),
    CAPI_METHOD_1PYOBJECT(PyUnicode_FromObject),
    CAPI_METHOD_1PYOBJECT(PyUnicode_AsUTF8String),
    CAPI_METHOD_1PYOBJECT(PyUnicode_AsUTF16String),
    CAPI_METHOD_1PYOBJECT(PyUnicode_AsUTF32String),
    CAPI_METHOD_1PYOBJECT(PyUnicode_AsUnicodeEscapeString),
    CAPI_METHOD_1PYOBJECT(PyUnicode_AsRawUnicodeEscapeString),
    CAPI_METHOD_1PYOBJECT(PyUnicode_AsLatin1String),
    CAPI_METHOD_1PYOBJECT(PyUnicode_AsASCIIString),
    CAPI_METHOD_1PYOBJECT(PyUnicode_EncodeFSDefault),
    CAPI_METHOD_1PYOBJECT(PyUnicodeDecodeError_GetEncoding),
    CAPI_METHOD_1PYOBJECT(PyUnicodeDecodeError_GetObject),
    CAPI_METHOD_1PYOBJECT(PyUnicodeDecodeError_GetReason),
    CAPI_METHOD_1PYOBJECT(PyWeakref_GET_OBJECT),
    CAPI_METHOD_1PYOBJECT(PyWeakref_GetObject),

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

    CAPI_METHOD_2PYOBJECT(PyByteArray_Concat),
    CAPI_METHOD_2PYOBJECT(PyCallIter_New),
    CAPI_METHOD_2PYOBJECT(PyDict_GetItem),
    CAPI_METHOD_2PYOBJECT(PyDict_GetItemWithError),
    CAPI_METHOD_2PYOBJECT(PyErr_SetFromErrnoWithFilenameObject),
    CAPI_METHOD_2PYOBJECT(PyFunction_New),
    CAPI_METHOD_2PYOBJECT(PyMethod_New),
    CAPI_METHOD_2PYOBJECT(PyNumber_Add),
    CAPI_METHOD_2PYOBJECT(PyNumber_And),
    CAPI_METHOD_2PYOBJECT(PyNumber_Divmod),
    CAPI_METHOD_2PYOBJECT(PyNumber_FloorDivide),
    CAPI_METHOD_2PYOBJECT(PyNumber_InPlaceAdd),
    CAPI_METHOD_2PYOBJECT(PyNumber_InPlaceAnd),
    CAPI_METHOD_2PYOBJECT(PyNumber_InPlaceFloorDivide),
    CAPI_METHOD_2PYOBJECT(PyNumber_InPlaceLshift),
    CAPI_METHOD_2PYOBJECT(PyNumber_InPlaceMultiply),
    CAPI_METHOD_2PYOBJECT(PyNumber_InPlaceOr),
    CAPI_METHOD_2PYOBJECT(PyNumber_InPlaceRemainder),
    CAPI_METHOD_2PYOBJECT(PyNumber_InPlaceRshift),
    CAPI_METHOD_2PYOBJECT(PyNumber_InPlaceSubtract),
    CAPI_METHOD_2PYOBJECT(PyNumber_InPlaceTrueDivide),
    CAPI_METHOD_2PYOBJECT(PyNumber_InPlaceXor),
    CAPI_METHOD_2PYOBJECT(PyNumber_Lshift),
    CAPI_METHOD_2PYOBJECT(PyNumber_Multiply),
    CAPI_METHOD_2PYOBJECT(PyNumber_Or),
    CAPI_METHOD_2PYOBJECT(PyNumber_Remainder),
    CAPI_METHOD_2PYOBJECT(PyNumber_Rshift),
    CAPI_METHOD_2PYOBJECT(PyNumber_Subtract),
    CAPI_METHOD_2PYOBJECT(PyNumber_TrueDivide),
    CAPI_METHOD_2PYOBJECT(PyNumber_Xor),
    CAPI_METHOD_2PYOBJECT(PyObject_CallObject),
    CAPI_METHOD_2PYOBJECT(PyObject_GenericGetAttr),
    CAPI_METHOD_2PYOBJECT(PyObject_GetAttr),
    CAPI_METHOD_2PYOBJECT(PyObject_GetItem),
    CAPI_METHOD_2PYOBJECT(PySequence_Concat),
    CAPI_METHOD_2PYOBJECT(PySequence_InPlaceConcat),
    CAPI_METHOD_2PYOBJECT(PyUnicode_AsCharmapString),
    CAPI_METHOD_2PYOBJECT(PyUnicode_Concat),
    CAPI_METHOD_2PYOBJECT(PyUnicode_Join),
    CAPI_METHOD_2PYOBJECT(PyUnicode_Format),
    CAPI_METHOD_2PYOBJECT(PyWeakref_NewProxy),
    CAPI_METHOD_2PYOBJECT(PyWeakref_NewRef),
    CAPI_METHOD_2PYOBJECT(PyWrapper_New),

    CAPI_METHOD_2PYOBJECT(PyCell_SET),
    CAPI_METHOD_2PYOBJECT(PyErr_SetObject),
    CAPI_METHOD_2PYOBJECT(PyException_SetCause),
    CAPI_METHOD_2PYOBJECT(PyException_SetContext),

    CAPI_METHOD_3PYOBJECT(PyDict_SetDefault),
    CAPI_METHOD_3PYOBJECT(PyErr_SetFromErrnoWithFilenameObjects),
    CAPI_METHOD_3PYOBJECT(PyErr_SetImportError),
    CAPI_METHOD_3PYOBJECT(PyEval_EvalCode),
    CAPI_METHOD_3PYOBJECT(PyFunction_NewWithQualName),
    CAPI_METHOD_3PYOBJECT(PyNumber_InPlacePower),
    CAPI_METHOD_3PYOBJECT(PyNumber_Power),
    CAPI_METHOD_3PYOBJECT(PyObject_Call),
    CAPI_METHOD_3PYOBJECT(PySlice_New),

    CAPI_METHOD_3PYOBJECT(PyErr_Restore),
    CAPI_METHOD_3PYOBJECT(PyErr_SetExcInfo),

    # if 0x030700F0 <= PY_VERSION_HEX

        CAPI_METHOD_VOID(PyContext_ClearFreeList),

        CAPI_METHOD_VOID(PyContext_CopyCurrent),
        CAPI_METHOD_VOID(PyContext_New),

        CAPI_METHOD_VOID(PyOS_AfterFork_Child),
        CAPI_METHOD_VOID(PyOS_AfterFork_Parent),
        CAPI_METHOD_VOID(PyOS_BeforeFork),

        CAPI_METHOD_1PYOBJECT(PyContext_Copy),
        CAPI_METHOD_1PYOBJECT(PyTimeZone_FromOffset),
        CAPI_METHOD_1PYOBJECT(PyImport_GetModule),

        CAPI_METHOD_2PYOBJECT(PyContextVar_Set),
        CAPI_METHOD_2PYOBJECT(PyTimeZone_FromOffsetAndName),

    # endif

    # if 0x030600F0 <= PY_VERSION_HEX

        CAPI_METHOD_1PYOBJECT(PyOS_FSPath),

    # endif

    # if 0x030500F0 <= PY_VERSION_HEX

        CAPI_METHOD_1PYOBJECT(PyCodec_NameReplaceErrors),

        CAPI_METHOD_2PYOBJECT(PyNumber_InPlaceMatrixMultiply),
        CAPI_METHOD_2PYOBJECT(PyNumber_MatrixMultiply),

    # endif

    # ifdef MS_WINDOWS

        CAPI_METHOD_1PYOBJECT(PyUnicode_AsMBCSString)

    # endif

    {NULL, NULL, 0, NULL},
};


static struct PyModuleDef CAPIModule = {
    PyModuleDef_HEAD_INIT, "pycapi", NULL, -1, CAPIMethods,
};

PyObject* PyInit_pycapi(void) {
    
    PyDateTime_IMPORT;

    return PyModule_Create(&CAPIModule);
}
