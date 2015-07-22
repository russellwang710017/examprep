#include<stdio.h>

int main(int argc, char *argv[]){
	char str[50];
	
	printf("Enter a string: ");
	gets(str);
	
	printf("You entered: %s\n", str);
	
	return(0);      
}

