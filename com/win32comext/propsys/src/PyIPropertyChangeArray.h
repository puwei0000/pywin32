// This file declares the IPropertyChangeArray Interface and Gateway for Python.
// Generated by makegw.py
// ---------------------------------------------------
//
// Interface Declaration

class PyIPropertyChangeArray : public PyIUnknown {
   public:
    MAKE_PYCOM_CTOR(PyIPropertyChangeArray);
    static IPropertyChangeArray *GetI(PyObject *self);
    static PyComTypeObject type;

    // The Python methods
    static PyObject *GetCount(PyObject *self, PyObject *args);
    static PyObject *GetAt(PyObject *self, PyObject *args);
    static PyObject *InsertAt(PyObject *self, PyObject *args);
    static PyObject *Append(PyObject *self, PyObject *args);
    static PyObject *AppendOrReplace(PyObject *self, PyObject *args);
    static PyObject *RemoveAt(PyObject *self, PyObject *args);
    static PyObject *IsKeyInArray(PyObject *self, PyObject *args);

   protected:
    PyIPropertyChangeArray(IUnknown *pdisp);
    ~PyIPropertyChangeArray();
};
