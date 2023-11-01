#!/usr/bin/python3
digits = ""
for i in range(100):
    digits += format(i, "#02d")
    if i != 99:
        digits += ", "
print(digits)
