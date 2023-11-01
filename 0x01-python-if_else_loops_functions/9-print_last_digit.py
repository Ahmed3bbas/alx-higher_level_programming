#!/usr/bin/python3
def print_last_digit(number):
    if number < 0:
        number *= -1
    LD = number - ((number // 10) * 10)
    print("{}".format(LD), end="")
    return LD
