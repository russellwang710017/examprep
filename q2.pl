#!/usr/bin/perl

use strict;
use warnings;
my $guess;
my $range = 100;
my $random_number = int(rand($range));
my $trial = 1;

#print $random_number. "\n"; for debug use

OUTER: while($trial <= 6){
	do{
		if($trial >= 6){
			last;
		}
		$trial = $trial + 1;
		print "Please guess the number: \n";
		chomp($guess = <>);
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
	}while($random_number != $guess);
}

if($random_number == $guess){
	print "You guessed the number right.\n";
}else{
	print "You did not guess the number right. The number is $random_number. The game is over.\n";
}

#print "$guess\n"; for debug use
