#!/usr/bin/env python3

x = 10
print(x)

def func1(x):
	x *= 5
	return x

def func2(x):
	x += 5
	print(x)
	x = func1(x)
	return x

x = func2(x)
print(x)
