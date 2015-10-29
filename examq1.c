#include<stdio.h>
#include<string.h>

int main(int argc, char *argv[]){
	if(argc == 4){
		if(! (strcmp(argv[2],"-S"))){
			printf("String Replacement\n");
			const char haystack[20] = "TutorialsPoint";
			const char needle[10] = "Point";
			char *ret;

			ret = strstr(haystack, needle);

			printf("The substring is: %s\n", ret);
		}
		else if(! (strcmp(argv[2],"-F"))){
			printf("FILE IO\n");
		}else{
			printf("The arguments provided are wrong.\n");	
		}
		//printf("\nProgram Running\n");
	}
	else if(argc == 2){
		if(! (strcmp(argv[0], "substitution") && strcmp(argv[1], "-H") ) ){
			printf("substitution expression switch argument\n");
		}else{
			printf("The arguments provided are wrong.\n");
		}
	}else{
		printf("The number of arguments provided is wrong.\n");
	}

	return 1;
}
