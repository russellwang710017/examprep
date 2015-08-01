#!/usr/bin/python

#open a file for reading
#fo = open("pproblem8.txt", "r+")

#open another file for writing
#cp = open("pproblem8cp.txt", "w+")

#for line in fo:
	#Reverse a String
	#line = line[::-1]
	#cp.write(line);
	#print line,
	
#Close opened file
#fo.close()

#cp.close()

#STEP 1
f = open("pproblem8.txt","r")
#STEP 2
lineList = f.readlines()
count = len(lineList)
#STEP 3
print count
for i in range(0, count):
	print lineList[i],
f.close()

#open another file for writing
cp = open("pproblem8cp.txt", "w+")

for i in range(0, count):
	#Reverse a String
	lineList[i] = lineList[i][::-1]
	line = lineList[i]
	cp.write(line)

cp.close()
