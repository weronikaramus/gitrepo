#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  figura01.py
import turtle

def main(args):
    turtle.setup(800, 600)
    for i in range(4):
        turtle.forward(200)
        turtle.left(90)
    
    turtle.done()
    
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
