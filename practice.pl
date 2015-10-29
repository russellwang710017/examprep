#!/usr/bin/perl
#Caesar cipher attempt
#$string = "FQIBCR";

#@cipher = split("",$string);
#print "@cipher\n";

#decipher
#foreach $char(@cipher){
#	$char = (ord($char)-2)%65;
#	if($char > 57){
#		$char = chr(123-(65-$char));
#	}else{
#		$char = chr(65+$char);
#	}
#	print "$char";
#}
#
#print "\n@cipher\n";
sub caesar {
        my ($message, $key, $decode) = @_;
        $key = 26 - $key if $decode;
        $message =~ s/([A-Z])/chr(((ord(uc $1) - 65 + $key) % 26) + 65)/geir;
}
 
my $msg = 'dog DOG THE FIVE BOXING WIZARDS JUMP QUICKLY';
my $enc = caesar($msg, 10);
my $dec = caesar($enc, 10, 'decode');
 
print "msg: $msg\nenc: $enc\ndec: $dec\n";
 
