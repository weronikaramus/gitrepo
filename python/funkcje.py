#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  funkcje.py

a, b = 4, 2


def odejmij():
    return a - b

def main(args):
    print("Helo")
    print(odejmij())
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
