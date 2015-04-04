//
// Created by ernesto on 4/4/15.
//
#include <stdexcept>
#include "cspec.h"
#include "opcode.h"

int main(int argc, char **argv) {

    describe("Check Opcodes", function()
            {

                it("Test nop operation", function()
                {
                    should_int(nop) be equal to(0);
                });

                it("Test aconst_null operation", function()
                {
                    should_int(aconst_null) be equal to(1);
                });

                it("Test iconst_m1 operation", function()
                {
                    should_int(iconst_m1) be equal to(2);
                });

                it("Test iconst_0 operation", function()
                {
                    should_int(iconst_0) be equal to(3);
                });

                it("Test iconst_1 operation", function()
                {
                    should_int(iconst_1) be equal to(4);
                });

            });

    return CSPEC_RESULT;
}
