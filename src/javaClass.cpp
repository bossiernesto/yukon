//
// Created by ernesto on 4/11/15.
//

#include "javaClass.h"

JavaClass::JavaClass(void):
        m_pClassHeap(NULL),
        m_pByteCode(NULL),
        m_nByteCodeLength(NULL),
        m_nObjectFieldsCount(NULL)
{
}

JavaClass::~JavaClass(void)
{
    // TODO: delete constant_pool, fields, methods and attributes etc.

    if(m_pByteCode) delete m_pByteCode;
    //if(methods) delete[] methods;
    //if(fields) delete[] fields;
}
