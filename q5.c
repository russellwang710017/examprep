#include<stdio.h>
#include<stdlib.h>

int main(void){
	FILE *in = fopen("grades.txt", "rt");
	int input[100];
	int i = 0;
	float d = 0.0;
	int sum = 0;
	float average = 0.0;

	if(in==NULL) fclose(in);
	
	fscanf(in, "%d\n", &input[i]); //scan a single line
	printf("The number scanned for input[%d] is %d.\n", i, input[i]);
	
	while(input[i]>0){
		i++;
		fscanf(in, "%d\n", &input[i]);	
		printf("The number scanned for input[%d] is %d.\n", i, input[i]);
	
	}
	
	fclose(in);

	d = i; //d is the total number of positive numbers.

	for(i=0; i<d; i++){
		sum+=input[i];
		printf("The %dth input is %d.\n", i, input[i]);	
	}
	
	average=sum/d;

	printf("The average of the positive numbers from the file is %f.\n", average);
}
