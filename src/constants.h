#define CONSTANT_Class  7
#define CONSTANT_Fieldref  9
#define CONSTANT_Methodref  10
#define CONSTANT_InterfaceMethodref  11
#define CONSTANT_String  8
#define CONSTANT_Integer  3
#define CONSTANT_Float  4
#define CONSTANT_Long  5
#define CONSTANT_Double  6
#define CONSTANT_NameAndType  12
#define CONSTANT_Utf8  1

//General Accesses
#define ACCESS_PUBLIC  0x0001 /*Declared public; may be ACCESSessed from outside its package.  */
#define ACCESS_FINAL  0x0010  /*Declared final; no subclasses allowed.  */
#define ACCESS_SUPER  0x0020  /*Treat superclass methods specially when invoked by the invokespecial instruction.  */
#define ACCESS_INTERFACE  0x0200 /*Is an interface, not a class.  */
#define ACCESS_ABSTRACT  0x0400 /*Declared abstract; may not be instantiated.  */

//Method Access
#define ACCESSESS_PUBLIC  0x0001  /*Declared public; may be ACCESSessed from outside its package.  */
#define ACCESSESS_PRIVATE  0x0002  /*Declared private; ACCESSessible only within the defining class.  */
#define ACCESSESS_PROTECTED  0x0004  /*Declared protected; may be ACCESSessed within subclasses.  */
#define ACCESSESS_STATIC  0x0008  /*Declared static.  */
#define ACCESS_FINAL  0x0010  /*Declared final; may not be overridden.  */
#define ACCESS_SYNCHRONIZED  0x0020  /*Declared synchronized; invocation is wrapped in a monitor lock.  */
#define ACCESS_NATIVE  0x0100  /*Declared native; implemented in a language other than Java.  */
#define ACCESS_ABSTRACT  0x0400  /*Declared abstract; no implementation is provided.  */
#define ACCESS_STRICT  0x0800  /*Declared strictfp; floating-point mode is FP-strict  */

#define T_BOOLEAN  4
#define T_CHAR  5
#define T_FLOAT  6
#define T_DOUBLE  7
#define T_BYTE  8
#define T_SHORT  9
#define T_INT  10
#define T_LONG  11  
