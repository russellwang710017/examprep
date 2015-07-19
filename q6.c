#include<stdio.h>
#include<stdlib.h>

int main(void){
	FILE *bar = fopen("bargraph.txt", "rt");
	int a=0, b=0, c=0, d=0, e=0, f=0;
	int buffer = 0;
	int i=0;
	if(bar==NULL) fclose(bar);

	while(!feof(bar)){
		fscanf(bar, "%d\n", &buffer);
		if(buffer>=500){
			f++;
		}
		else if(buffer>=400){
			e++;
		}
		else if(buffer>=300){
			d++;
		}
		else if(buffer>=200){
			c++;
		}
		else if(buffer>=100){
			b++;
		}
		else{
			a++;
		}
		printf("The number being read is %d.\n", buffer);
	}
	
	fclose(bar);
	
	printf("From 0~99: ");

	for(i=0; i<a; i++){
		printf("#");
	}
	
	printf("\n");
	
	printf("From 100~199: ");

	for(i=0; i<b; i++){
		printf("#");
	}

	printf("\n");

	printf("From 200~299: ");

	for(i=0; i<c; i++){
		printf("#");
	}

	printf("\n");

	printf("From 300~399: ");

	for(i=0; i<d; i++){
		printf("#");
	}

	printf("\n");

	printf("From 400~499: ");

	for(i=0; i<e; i++){
		printf("#");
	}

	printf("\n");

	printf("From 500 above: ");

	for(i=0; i<f; i++){
		printf("#");
	}

	printf("\n");
}
