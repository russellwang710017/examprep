#include<stdio.h>

int main(void){
	int input[100];
	int i = -1;
	int sum=0;
	float d=0.0;
	float average;
	
	do {
		i++;
		printf("Please enter a positive integer: ");
		scanf("%d", &input[i]);
		printf("The number you entered is %d.\n", input[i]);
	} while(input[i]>0);
		
	d=i;

	for (i=0; i<d; i++){
		sum+=input[i];
		printf("sum = %d\n", sum);
	}
	
	average = sum/d;

	printf("The average of these positive integers is %f.\n", average);
}
