#!/usr/bin/perl

use warnings;
my $input;
my $times = 0;

#getting user input
print "Please input a file extension(without .) you'd like to match files with: \n";
chomp($input = <>);
print "\nYou entered: $input\n";

#Getting Current Working Directory
use Cwd;

$dir = getcwd();

print "\nThe current working directory is: $dir\n";

#Adjusting the form of current working directory

$dir = $dir . "/*";

#Searching through all the files in the current working directory
#Matching

#$dir = "/home/2014/rwang219/examprep/*";
@files = glob($dir);

print "\nDisplaying file names with extension $input\n";

foreach(@files){
	if(/\.$input/){
		$times = $times + 1;
		print "\n$_\n";
	}
}

print "\nThe number of files with the extensions you entered is $times.\n";
