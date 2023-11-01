#!/usr/bin/python3
import random
number = random.randint(-10000, 10000)

if number < 0:
    LD = ((number) - (number // 10) * 10)
    LD = LD -  10
else:
    LD = ((number) - (number // 10) * 10) 

if (LD > 5):
    print(f"Last digit of {number} is {LD} and is greater than 5")
elif (LD == 0):
    print(f"Last digit of {number} is {LD} is 0")
else:
    print(f"Last digit of {number} is {LD} and is less than 6 and not 0")
