#!/bin/sh
cd build && cmake .. && make && ./test/opcodeTest
