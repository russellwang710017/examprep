#!/usr/bin/python
import pickle
from q4 import Movie #No file extension needed

file_Name = "testfile.txt"

#We open the file for reading
fileObject = open(file_Name, 'r')

#Load the object from the file into var b
b = pickle.load(fileObject)

print "The imported object is ", b.displayMovie()
