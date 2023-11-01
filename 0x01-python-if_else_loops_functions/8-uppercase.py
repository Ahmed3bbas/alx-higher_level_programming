#!/usr/bin/python3

def uppercase(str):
    newstr = ""
    for c in str:
        if ord(c) in range(97, 123):  # is lowercase char
            newstr += chr(ord(c) - 32)
        else:  # ord(c) in range(65, 91)
            newstr += c
    print("{}".format(newstr))
