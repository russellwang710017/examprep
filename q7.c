#include<stdio.h>

int array[20];
int input;
int i = 0;
int j = 0;
int found = 0;

int match(int input);
int main(void){
	FILE *search = fopen("size20.txt", "rt");

	if(search==NULL) fclose(search);

	while(!feof(search)){ //loading array
		fscanf(search, "%d\n", &array[i]);
		i++;
	}
	
	fclose(search);

	printf("%d\n", i);
	
	for(i=0; i<5; i++){
		printf("Please enter an integer number: ");
		scanf("%d", &input);
		found = match(input);
		printf("match(input) = %d\n", found);
		if(found==1){
			printf("FOUND\n");
		}else{
			printf("NOT FOUND\n");
		}
	}
}

int match(int input){
	for(j=0; j<20; j++){
		printf("array[%d] is %d\n", j, array[j]);
		if(input==array[j]){
			return 1; //FOUND
		}
	}
	return 0;
}
