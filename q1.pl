#!/usr/bin/perl

@array;
for($i = 1; $i <= 5; $i = $i + 1){
	print "Please enter element $i of an array: \n";
	chomp($array[$i] = <>);
	#push(@array, $element);
}
@reversedarray = reverse(@array);
print "\@array = @reversedarray\n";
