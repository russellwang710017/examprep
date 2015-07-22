#include<stdio.h>

char source[80], destination[80];
int string_length(char *pointer);
void reverse(char*);

void main(){
	int key, i, length;
	char buffer;
	
	printf("Please enter a string you wish to be encrypted: ");
	gets(source);

	printf("Please enter a integer value you wish the string to be encrypted by: ");
	scanf("%d", &key);
	
	length = string_length(source);

	printf("The length of the string is %d\n", length);
	
	//encryption	
	for(i=0; i<length; i++){
		printf("source[%d] is %d.\n", i, source[i]);
		destination[i] = source[i]+key;
	}
	
	printf("The input string is %s.\n", source);
	printf("The input integer value is %d.\n", key);
	printf("The encrypted message before reversion is %s.\n", destination);

	reverse(destination);

	printf("The encrypted message after reversion is %s.\n", destination);
}

//string length
int string_length(char *pointer){
	
	int c = 0;

	while(*(pointer+c)!='\0'){
		c++;	
	}	
	
	return c;	
}

//string reversion
void reverse(char *string){
	int length, c;
	char *begin, *end, temp;

	length = string_length(source);
	begin = string;
	end = string;
	
	for(c=0; c<length-1; c++){
		end++;
	}
	
	for(c=0; c<length/2; c++){
		temp=*end;
		*end=*begin;
		*begin=temp;

		begin++;
		end--;
	}
}
