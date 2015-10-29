#!/usr/bin/perl

$numArgs = $#ARGV + 1;
$numvowel = 0;
$n, $data;

print "$numArgs command line arguments passed in.\n";

print "@ARGV\n";

open(DATA, "<$ARGV[0]");

#chomp(@lines = <DATA>);
#print "@lines\n";

while(($n = read DATA, $_, 1) != 0){
	print "$_\n";

	if(/[aeiou]/){
		print "vowel detected\n";
		$numvowel = $numvowel + 1;
		print "\$numvowel = $numvowel\n";
	}

}
close(DATA);
print "Program Running.\n";
