#!/usr/bin/perl

#Display all the files in /home/2014/rwang219/examprep/ directory

$dir = "/home/2014/rwang219/examprep/*";
my @files = glob($dir);

foreach(@files){
	#Open file and display contents
	print "\n$_\n";
	print "\nDisplaying Content of File $_: \n";
	open(DATA, "<$_");
	
	while(<DATA>){
		print "$_\n";
	}
	
	close(DATA);
	print "\nEnd of Displaying Content of File $_\n";
}
