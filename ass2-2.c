#include<stdio.h>
#include<string.h>

char cont[4];

void main(){
	do{
		int input;
		int len;
		int comp1;
		int ratio;
		do{ //entering number
	
			printf("Please enter an integer number: ");
			scanf("%d", &input);

			printf("The number entered is %d.\n", input);
		} while(input<=0);
		
		//drawing triangle
		int space, i, j, k, height, ast;
		height = input/2 + 1;
		space = input/2;
		ast = input/2 + 1 - space;
		
		for(i = 0; i < height; i++){
			for(j = 1; j <= space; j++){
				printf(" ");
			}
			
			for(k = ast; k >= 1; k--){
				printf("*");
			}
			
			printf("\n");
			space--;
			ast+=2;
		}
		
		printf("Would you like to continue the process? (YES or yes or Y or y)");
		scanf("%s", cont);
		
	}while(  ! ( strcmp("YES", cont) ) || ! ( strcmp("yes", cont) ) || ! ( strcmp("Y", cont) ) || ! ( strcmp("y", cont) )  );
}
