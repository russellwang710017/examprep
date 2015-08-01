#!/usr/bin/python

def recursivePrint(number):
	if(number>=1):
		print number
		number = number-1
		recursivePrint(number);

recursivePrint(5);
