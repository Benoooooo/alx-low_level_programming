#!/usr/bin/python3
# file: 0-positive_or_negative_py
# Auth: kelechi nnadi <alx swe>

import random
number = random.randint(-10, 10)

if number > 0:
    print("{:d} is positive".format(number))
elif number == 0:
    print("{:d} is zero".format(number))
else:
    print("{:d} is negative".format(number))
