#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  figura01.py
import turtle

def main(args):
    turtle.setup(800, 600)
    for i in range(5):
        turtle.forward(100)
        turtle.left(144)
    pass
    for i in range(5):
        turtle.forward(120)
        turtle.left(144)
    
    turtle.done()
    
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
