#!/usr/bin/python3
def print_last_digit(number):
    LD = number - ((number // 10) * 10)
    print("{}".format(LD), end="")
    return LD
