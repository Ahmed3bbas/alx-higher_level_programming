#!/usr/bin/python3

alpha = ""
for i in range(97, 123):
    # print(i, chr(i))
    if i != 113 and i != 101:  # DOn'r print e and q
        alpha += chr(i)
print(f"{alpha}")
