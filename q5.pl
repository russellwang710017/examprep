#!/usr/bin/perl

$numArgs = $#ARGV + 1;
$numvowel = 0;

print "$numArgs command line arguments passed in.\n";

print "\nThe command line arguments passed in: @ARGV\n";

#Getting Current Working Directory
use Cwd;

$dir = getcwd;

print "\nThe current working directory using getcwd is: $dir\n";

$dir = getcwd();

print "\nThe current working directory using getcwd() is: $dir\n";

$dir = cwd();

print "\nThe current working directory using cwd() is: $dir\n";

#Adjusting the form of the current working directory
$dir = $dir . "/*";
#$dir = "/home/2014/rwang219/examprep/*";
print "\nThe adjusted form of current working directory is: $dir\n";

#Searching through all the files in the current working directory

@files = glob($dir);

print "\nDisplaying file names that match $ARGV[0]\n";

foreach(@files){
	#for debugging
	#print "\n$_\n";
	#print "\n$ARGV[0]\n";

	#Matching command line argument with file name
	if(/$ARGV[0]/){
		print "\n$_\n";
	}
}
