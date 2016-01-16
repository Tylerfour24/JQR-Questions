#!/usr/bin/env python3

stop = 0
while stop != 1:
	user = input("Would you like to continue? Enter 'yes' or 'no':")
	user = user.lower()
	while user not in ['yes', 'no']:
		print("Invalid input. Try again.")
		user = input("Would you like to continue? Enter 'yes' or 'no':")
		user = user.lower()

	if user == 'yes':
		stop = 0
	if user == 'no':
		stop = 1
