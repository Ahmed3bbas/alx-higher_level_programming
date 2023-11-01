#!/usr/bin/python3
def fizzbuzz():
    pattern = ""
    for i in range(1, 101):
        if i % 3 == 0 and i % 5 == 0:
            pattern += "FizzBuzz"
        elif i % 3 == 0:
            pattern += "Fizz"
        elif i % 5 == 0:
            pattern += "Buzz"
        else:
            pattern += str(i)
        pattern += " "
    # pattern = pattern[:-1]  # remove last comma and space
    print("{}".format(pattern))
