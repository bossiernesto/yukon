#!/bin/sh
cd build && cmake .. && make && ./test/CharBagTest && ./test/HuffmanTreeTest && ./test/PriorityQueueTest
