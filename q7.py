#!/usr/bin/python

def fibR(n):
 if n==1 or n==2:
  return 1
 return fibR(n-1)+fibR(n-2)

number = raw_input("Please enter a number: ");
number = int(number)

print "Printing the n first numbers in Fibonacci series"
for i in range(1, number+1):
	print fibR(i)
