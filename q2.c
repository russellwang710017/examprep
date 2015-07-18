#include<stdio.h>

int main(int argc, char* argv[]){
	float g;
	
	printf("Please enter your grade: ");
	scanf("%f", &g);

	if (g>=85){
		printf("A\n");
	}
	else if (g>=75){
		printf("B\n");
	}
	else if (g>=65){
		printf("C\n");
	}
	else if (g>=55){
		printf("D\n");
	}
	else{
		printf("F\n");
	}
	
	return 0;
}
