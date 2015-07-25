#include<stdio.h>

int len;
int cp;
char test1[] = "Billie";
char test2[] = "Bill";
char test3[7];

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
	int i;
	int len1;
	int len2;
	
	len1 = mystrlen(s1);
	len2 = mystrlen(s2);

	printf("len1 = %d, len2 = %d\n", len1, len2);

	//use the shorter length as the limit
	if(len1 >= len2){ //use len2 as the limit
		i = 0;
		while(s1[i] = s2[i] && i < len2){
			i++;
			printf("s1[%d] = %d, s2[%d] = %d, i = %d\n", i, s1[i], i, s2[i], i);
		}
		printf("s1[%d] = %d, s2[%d] = %d, i = %d\n", i, s1[i], i, s2[i], i);
		cmp = s1[i] - s2[i];
	}

	else{
		i = 0;
		while(s1[i] = s2[i] && i < len1){
			i++;
			printf("s1[%d] = %d, s2[%d] = %d, i = %d\n", i, s1[i], i, s2[i], i);
		}
		printf("s1[%d] = %d, s2[%d] = %d, i = %d\n", i, s1[i], i, s2[i], i);
		cmp = s1[i] - s2[i];	
	}
	return cmp;
}

void main(){
	len = mystrlen(test1);
	printf("The length of the string %s is %d.\n", test1, len);

	mystrcpy(test1, test3);

	printf("The copied string is %s.\n", test3);

	printf("The 2 strings being compared are %s and %s.\n", test1, test2);
	
	cp = mystrcmp(test1, test2);

	printf("%d\n", cp);

	if(cp>0){
		printf("The string %s is larger than the string %s.\n", test1, test2);
	}	
	else if(cp=0){
		printf("The 2 strings are equal.\n");
	}
	else{
		printf("The string %s is smaller than the string %s.\n", test1, test2);
	}
	
}
