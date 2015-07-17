#include<stdio.h>

int main(int argc, char *argv[]){
	int a;
	int b;
	int c;
	char x ='x';

	printf("Please enter a number.");
	scanf("%d", &a);
	
	for(b=0; b<a; b++){
		for(c=0; c<a; c++){
			printf("x");
		}
		printf("\n");
	}
	return 0;
}

