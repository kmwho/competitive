#! /usr/bin/python
# kmwho
# Codeforces 353 D2

from __future__ import print_function

def solvecase():
    return ""

def solve():
    a,b,c  = map(int, input().strip().split() )
    
    if c < 0:
        b = a + ( a - b )
        c = -c

    if c == 0:
        if a == b:
            return "YES"
        else:
            return "NO"
    b = b-a
    if b > 0 and ( (b%c) == 0 ):
        return "YES"
    elif b == 0:
        return "YES"
    else:
        return "NO"

def main():
	print( str(solve()) )


main()
