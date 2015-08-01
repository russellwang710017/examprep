#!/usr/bin/python

dict = {};
bool = True;

while(bool):
	name = raw_input("Please enter a name: ");
	pnumber = raw_input("Please enter a phone number: ");

	dict[name]=pnumber;

	response = raw_input("Would you like to continue the process: ");
	if(response == "Yes" or response == "yes" or response == "Y" or response == "y"):
		bool = True;
	else:
		bool = False;

print "The dictionary you created is: ", dict
