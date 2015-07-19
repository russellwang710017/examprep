#include<stdio.h>

int main(void){
	int input[10];
	int i, sum=0;
	float average;

	for(i=0; i<10; i++){
		printf("Please enter the %dth number.\n", i);
		scanf("%d", &input[i]);	
	}
	
	for(i=0; i<10; i++){
		sum += input[i];
	}
	
	average = sum/10.0;
	printf("The average is %f.\n", average);
}
