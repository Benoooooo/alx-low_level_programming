#!/usr/bin/python3
# file: 0-positive_or_negative_py
# Auth: kelechi nnadi <alx swe>

import random
number = random.randint(-10, 10)

if number > 0:
    print(number, "is positive")
elif number == 0:
    print(number, "is zero")
else:
    print(number, "is negative")
