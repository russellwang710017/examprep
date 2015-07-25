#include<stdio.h>

int len1;
int len2;
int cp;
char Bob[] = "Bob";
char Billie[] = "Billie";
char Shannon[] = "Shannon";
char copyArray[8];

int mystrlen(char *pointer){
	int c = 0;
	while(*(pointer+c)!='\0'){
		c++;	
	}	
	return c;
}

void mystrcpy(char src[], char dst[]){
	int length = mystrlen(src);
	int i;

	for(i = 0; i < length; i++){
		dst[i] = src[i];
	}
	
	dst[i] = '\0';
}

int mystrcmp(char s1[], char s2[]){
	int cmp;
	int c = 0;
	
	while(s1[c] == s2[c]){
		if(s1[c] == '\0' || s2[c] == '\0'){
			break;
		}
		c++;
	}

	if(s1[c] == '\0' && s2[c] == '\0'){
		return 0;
	}else{
		return s1[c] - s2[c];
	}
}

void display(char s1[], char s2[]){
	printf("The 2 strings being compared are %s and %s.\n", s1, s2);
	
	cp = mystrcmp(s1, s2);

	len1 = mystrlen(s1);
	len2 = mystrlen(s2);
	printf("The result of the comparison is %d\n", cp);
	printf("The length of %s is %d and the length of %s is %d.\n", s1, len1, s2, len2);

	if(cp>0){
		printf("The string %s is larger than the string %s.\n", s1, s2);
	}	
	else if(cp<0){
		printf("The string %s is smaller than the string %s.\n", s1, s2);
	}
	else{
		printf("The 2 strings are equal.\n");
	}

	printf("\n");
}

void main(){

	mystrcpy(Bob, copyArray);
	printf("The initial string is %s and the copied string is %s.\n", Bob, copyArray);

	printf("The copied string is %s.\n", copyArray);

	printf("\n");

	display(Bob, copyArray);

	display(Billie, copyArray);

	display(Shannon, copyArray);
	
	printf("What's going on here?\n");
}
