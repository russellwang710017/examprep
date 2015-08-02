#!/usr/bin/perl

use strict;
use warnings;
my $guess;
my $range = 100;
my $random_number = int(rand($range));
my $trial = 2;

print $random_number. "\n";
print "Please guess the number: \n";
chomp($guess = <>);

OUTER: while($trial <= 6){
	INNER: do{
		$trial = $trial + 1;
		if($trial > 6){
			last;
		}	
		if($guess > $random_number){
			print "The guess is too high.\n";
		}
		elsif($guess < $random_number){
			print "The guess is too low.\n";
		}
		else{
			#print "You guessed the number right.\n";
			last OUTER;
		}
		print "Please guess the number: \n";
		chomp($guess = <>);
	}while($random_number != $guess);
}

if($random_number == $guess){
	print "You guessed the number right.\n";
}else{
	print "You did not guess the number right. The game is over.\n";
}

print "$guess\n";
