//
// Created by ernesto on 4/1/15.
//

#include "opcodes.h"
using namespace std;

TCHAR* OpcodeDesc[]={
        string("nop"),
        string("aconst_null"),
        string("iconst_m1"),
        string("iconst_0"),
        string("iconst_1"),
        string("iconst_2"),
        string("iconst_3"),
        string("iconst_4"),
        string("iconst_5"),
        string("lconst_0"),
        string("lconst_1"),
        string("fconst_0"),
        string("fconst_1"),
        string("fconst_2"),
        string("dconst_0"),
        string("dconst_1"),
        string("bipush"),
        string("sipush"),
        string("ldc"),
        string("ldc_w"),
        string("ldc2_w"),
        string("iload"),
        string("lload"),
        string("fload"),
        string("dload"),
        string("aload"),
        string("iload_0"),
        string("iload_1"),
        string("iload_2"),
        string("iload_3"),
        string("lload_0"),
        string("lload_1"),
        string("lload_2"),
        string("lload_3"),
        string("fload_0"),
        string("fload_1"),
        string("fload_2"),
        string("fload_3"),
        string("dload_0"),
        string("dload_1"),
        string("dload_2"),
        string("dload_3"),
        string("aload_0"),
        string("aload_1"),
        string("aload_2"),
        string("aload_3"),
        string("iaload"),
        string("laload"),
        string("faload"),
        string("daload"),
        string("aaload"),
        string("baload"),
        string("caload"),
        string("saload"),
        string("istore"),
        string("lstore"),
        string("fstore"),
        string("dstore"),
        string("astore"),
        string("istore_0"),
        string("istore_1"),
        string("istore_2"),
        string("istore_3"),
        string("lstore_0"),
        string("lstore_1"),
        string("lstore_2"),
        string("lstore_3"),
        string("fstore_0"),
        string("fstore_1"),
        string("fstore_2"),
        string("fstore_3"),
        string("dstore_0"),
        string("dstore_1"),
        string("dstore_2"),
        string("dstore_3"),
        string("astore_0"),
        string("astore_1"),
        string("astore_2"),
        string("astore_3"),
        string("iastore"),
        string("lastore"),
        string("fastore"),
        string("dastore"),
        string("aastore"),
        string("bastore"),
        string("castore"),
        string("sastore"),
        string("pop"),
        string("pop2"),
        string("dup"),
        string("dup_x1"),
        string("dup_x2"),
        string("dup2"),
        string("dup2_x1"),
        string("dup2_x2"),
        string("swap"),
        string("iadd"),
        string("ladd"),
        string("fadd"),
        string("dadd"),
        string("isub"),
        string("lsub"),
        string("fsub"),
        string("dsub"),
        string("imul"),
        string("lmul"),
        string("fmul"),
        string("dmul"),
        string("idiv"),
        string("ldiv"),
        string("fdiv"),
        string("ddiv"),
        string("irem"),
        string("lrem"),
        string("frem"),
        string("drem"),
        string("ineg"),
        string("lneg"),
        string("fneg"),
        string("dneg"),
        string("ishl"),
        string("lshl"),
        string("ishr"),
        string("lshr"),
        string("iushr"),
        string("lushr"),
        string("iand"),
        string("land"),
        string("ior"),
        string("lor"),
        string("ixor"),
        string("lxor"),
        string("iinc"),
        string("i2l"),
        string("i2f"),
        string("i2d"),
        string("l2i"),
        string("l2f"),
        string("l2d"),
        string("f2i"),
        string("f2l"),
        string("f2d"),
        string("d2i"),
        string("d2l"),
        string("d2f"),
        string("i2b"),
        string("i2c"),
        string("i2s"),
        string("lcmp"),
        string("fcmpl"),
        string("fcmpg"),
        string("dcmpl"),
        string("dcmpg"),
        string("ifeq"),
        string("ifne"),
        string("iflt"),
        string("ifge"),
        string("ifgt"),
        string("ifle"),
        string("if_icmpeq"),
        string("if_icmpne"),
        string("if_icmplt"),
        string("if_icmpge"),
        string("if_icmpgt"),
        string("if_icmple"),
        string("if_acmpeq"),
        string("if_acmpne"),
        string("goto"),
        string("jsr"),
        string("ret"),
        string("tableswitch"),
        string("lookupswitch"),
        string("ireturn"),
        string("lreturn"),
        string("freturn"),
        string("dreturn"),
        string("areturn"),
        string("return"),
        string("getstatic"),
        string("putstatic"),
        string("getfield"),
        string("putfield"),
        string("invokevirtual"),
        string("invokespecial"),
        string("invokestatic"),
        string("invokeinterface"),
        string(""),
        string("new"),
        string("newarray"),
        string("anewarray"),
        string("arraylength"),
        string("athrow"),
        string("checkcast"),
        string("instanceof"),
        string("monitorenter"),
        string("monitorexit"),
        string("wide"),
        string("multianewarray"),
        string("ifnull"),
        string("ifnonnull"),
        string("goto_w"),
        string("jsr_w")
};