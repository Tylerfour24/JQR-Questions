#!/usr/bin/env python3

for x in range(0,11):
	try:
		print("10 divided by", x, "equals", 10/x)
	except Exception as error:
		print("Error:", error)
