#!/usr/bin/env python3

for x in range(1,10):
	if (x % 3 == 0) & (x % 2 == 0):
		print(x, "is a multiple of 2 and 3.")
	elif (x % 3 == 0):
		print(x, "is divisible by 3.")
	elif (x % 2 == 0):
		print(x, "is even.")
	else:
		print(x, "is not a multiple of 2 or 3")
