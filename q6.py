#!/usr/bin/python

number = raw_input("Please enter a number: ");
number = int(number)

print "Printing the n first numbers in Fibonacci series"
previous1 = 0
previous2 = 1
for i in range(1, number+1):
	fsum = previous1 + previous2
	print fsum
	previous2 = previous1
	previous1 = fsum
