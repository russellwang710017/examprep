#include<stdio.h>

int main(int argc, char *argv[]){
	char c;     
	
	FILE *in, *out;                  
	in = fopen(argv[1], "rt");	
	out = fopen(argv[2], "wt");

	c = fgetc(in);
	      
	while(!feof(in)){
		fputc(c, out);
		c = fgetc(in);
	}
	
	fclose(in);
	fclose(out);
}

