#!/usr/bin/perl

open(DATA, "<FILENAME.txt") or die "Couldn't open file FILENAME.txt, $!";
open(DADA, ">CONVERTED.txt") or die "Couldn't open file CONVERTED.TXT, $!";

$count = 0;
while(<DATA>){
	$count = $count + 1;
	#$line = $_;

	#matching long date
	if(/.*(\w*) (\d+), (\d+)/){
		($month, $day, $year) = (/(\w*) (\d+), (\d+)/);
		#print "$_\n";

		print "\nPrinting Matched String:\n";
		print "$&\n";

		#print "\nPrinting line number and date in the format of \$count \$month \$day, \$year:\n";
		#print "$count $month $day, $year\n";

		#print "$month\n";
		#print "$day\n";
		#print "$year\n";

		@year = split('',$year);
		print "\nPrinting elements of array \@year\n";
		print "@year\n";
		
		@month = split('',$month);
		print "\nPrinting elements of array \@month\n";
		print "@month\n";

		#print "$month[0]$month[1]$month[2]\n";
		@month = @month[0..2];
		$month = join('', @month);
		print "\n$month\n";

		print "\nPrinting Converted String:\n";
		#$_ =~ s/$&/$day $month $year/;
		$_ =~ s/$&/$day $month[0]$month[1]$month[2] $year[2]$year[3]/;
		print "$_\n";

		#print "\nPrinting finalized converted date format\n";
		#$_ =~ s/$_/Akon/;
		#print "$_\n";
	}

	if($count < 10){
		print DADA "000$count $_";
	}
	else{
		print DADA "00$count $_";
	}
}

close(DATA);
close(DADA);
