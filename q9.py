#!/usr/bin/python
import string
from collections import Counter
filename = raw_input("Please enter a file name: ");

#Opens the file
#f = open(filename, "r")

text = open(filename).read()
#Filter all characters that are not letters.
text = filter(lambda x: x in string.letters, text.lower())
c = Counter(text)
print c

