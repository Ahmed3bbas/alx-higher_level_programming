#!/usr/bin/python3
import sys
if __name__ == "__main__":
    argv = sys.argv
    len = len(argv) - 1

    if len == 0:
        print("0 arguments.")
    elif len == 1:
        print("1 argument")
    else:
        print("{} arguments:".format(len))

    for i in range(1, len + 1):
        print("{}: {}".format(i, argv[i]))
