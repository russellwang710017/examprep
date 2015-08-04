#include"list.c"

void main(){
	FILE *search;
	char input[80];
	char repeat[4];
	int intadd;
	BOOLEAN exist;
	do{
		printf("Please input a valid file name: ");
		scanf("%s", input);
		search = fopen(input, "rt");
	}while(search==NULL);
	
	prettyPrint();
	
	while(!feof(search)){
		fscanf(search, "%d\n", &intadd);
		add(intadd);
		//prettyPrint();
	}

	//prettyPrint();	

	fclose(search);

	prettyPrint();

	do{
	printf("Please input additional integers: ");
	scanf("%d", &intadd);
	exist = delete(intadd);
	if(exist == FALSE){
		printf("Number Was Not Found!\n");
	}
	else{
		printf("Number Was Deleted!\n");
	}
	
	prettyPrint();
	
	printf("Would you like to repeat the deleting process?(YES or yes or Y or y)\n");
	scanf("%s", repeat);
	}while(  ! ( strcmp("YES", repeat) ) || ! ( strcmp("yes", repeat) ) || ! ( strcmp("Y", repeat) ) || ! ( strcmp("y", repeat) )	);
	
	//print();
}
