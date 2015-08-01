#!/usr/bin/python
import pickle

class Movie:
	movCount = 0;

	def __init__(self, title, director, length):
		self.title = title
		self.director = director
		self.length = length
		Movie.movCount += 1

	def displayCount(self):
		print "Total Movie %d" % Movie.movCount

	def displayMovie(self):
		print "Title: ", self.title, ", Director: ", self.director, ", Length: ", self.length
	
movie1 = Movie("Catch Me if You Can", "Martin Scorsesse", "128min")
movie2 = Movie("ET", "Steven Spielberg", "120min")

movie1.displayMovie()
movie2.displayMovie()

file_Name = "testfile.txt"
#Open the file for writing
fileObject = open(file_Name, 'wb')
pickle.dump(movie1, fileObject)

#Closing the file object
fileObject.close()

#We open the file for reading
fileObject = open(file_Name, 'r')

#Load the object from the file into var b
b = pickle.load(fileObject)

b.displayMovie()
print "Total Movie: %d" % Movie.movCount
