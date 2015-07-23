#include<stdio.h>
#include<ctype.h>

int value, count=0, alpha=0, zmu;
void main(){
	FILE *scan = fopen("textfile.txt", "rt");
	
	if(scan==NULL) fclose(scan);
	
	while(!feof(scan)){
		zmu = fgetc(scan);
		value = isalpha(zmu);
		if(value){
			alpha++;
			count++;
			printf("zmu is %c, alpha = %d, count = %d.\n", zmu, alpha, count);
		} 
		else{
			count++;
			printf("zmu is %c, alpha = %d, count = %d.\n", zmu, alpha, count);
		}
	}
	
	fclose(scan);

	printf("The total number of characters is %d.\n", count);
	printf("The total number of alphabetical characters is %d.\n", alpha);
}
