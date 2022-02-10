#!/usr/bin/env python

from cyaron import *

test = IO("test.in", "test.out")
for i in range(5):
    test.input_writeln(
        String.random_paragraph(12, ["aaa", "bbb", "ccc"])
    )
