#include<stdio.h>

int c, first, last, middle, n, input, cool[100];

void binarysearch(int array[]){
	first = 0;
	last = 19;
	middle = (first + last)/2;
	
	while(first <= last){
		if(array[middle]<input){
			first = middle + 1;
		}
		else if(array[middle] == input){
			printf("Number %d found at position %d.\n", input, middle+1);
			break;
		}
		else{
			last = middle - 1;
		}
		middle = (first + last)/2;
	}
	
	if(first > last){
		printf("Number %d is not found in the file.\n", input);
	}
}

void main(){

	int i = 0;

	FILE *search = fopen("size20.txt", "rt");

	if(search==NULL) fclose(search);
	
	while(!feof(search)){
		fscanf(search, "%d\n", &cool[i]);
		i++;
	}

	fclose(search);

	for(i=0; i<5; i++){
		printf("Please enter an integer number: ");
		scanf("%d", &input);
		binarysearch(cool);
	}
}
