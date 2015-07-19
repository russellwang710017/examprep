#include<stdio.h>

int main(void){
	int input[100];
	int i = 0;
	int sum=0;
	float d=0.0;
	float average;
	
	printf("Please enter a positive interger: ");
	scanf("%d", &input[i]);
	printf("The number you entered is %d.\n", input[i]);
	
	while(input[i] > 0){
		i++;
		printf("Please enter a positive interger again: ");
		scanf("%d", &input[i]);
		printf("The number you entered is %d.\n", input[i]);
	}
	
	d = i; //d is the total number of input positive numbers.

	for (i=0; i<d; i++){
		sum+=input[i];
		printf("sum = %d\n", sum);
	}
	
	average = sum/d;

	printf("The average of these positive integers is %f.\n", average);
}
