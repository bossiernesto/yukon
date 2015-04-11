//
// Created by ernesto on 4/11/15.
//

#ifndef YUKON_JAVACLASS_H
#define YUKON_JAVACLASS_H

#pragma once

#include "structures.h"

class ClassHeap;

#include <cstdint>

class JavaClass : public JavaClassFileFormat {
public:
    JavaClass();

    virtual ~JavaClass();

private:
    std::size_t m_nByteCodeLength;
    void *m_pByteCode;
    u2 m_nObjectFieldsCount;
    ClassHeap *m_pClassHeap;

};


#endif //YUKON_JAVACLASS_H
