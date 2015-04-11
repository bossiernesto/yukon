//
// Created by ernesto on 4/11/15.
//

#ifndef YUKON_STRUCTURES_H
#define YUKON_STRUCTURES_H
#pragma once

#include "types.h"
#include "constants.h"

struct cpInfo_str {
    u1 tag;
    u1 *info;
};
typedef struct cpInfo_str *cpInfo;

struct attributeInfo_str {
    u2 attributeNameIndex;
    u4 attributeLength;
    u1 *info; //attributeLength;
};
typedef struct attributeInfo_str *attributeInfo;

struct methodInfo_str {
    u2 accessFlags;
    u2 nameIndex;
    u2 descriptorIndex;
    u2 attributesCount;
    attributeInfo attributes; //attributesCount;
};
typedef struct methodInfo_str *methodInfo;

struct fieldInfo_str {
    u2 accessFlags;
    u2 nameIndex;
    u2 descriptorIndex;
    u2 attributesCount;
    attributeInfo attributes; //attributesCount;
};
typedef struct fieldInfo_str* fieldInfo;

struct JavaClassFileFormat {
    u4 magic;
    u2 minorVersion;
    u2 majorVersion;
    u2 constantPoolCount;
    cpInfo constantPool; //constantPoolCount-1;
    u2 accessFlags;
    u2 thisClass;
    u2 super_class;
    u2 interfacesCount;
    u2 *interfaces; //interfacesCount;
    u2 fieldsCount;
    fieldInfo fields; //fieldsCount;
    u2 methodsCount;
    methodInfo methods; //methodsCount;
    u2 attributesCount;
    attributeInfo *attributes; //attributesCount;
};


#endif  //YUKON_STRUCTURES_H
