#include<stdio.h>
#include"list.h"

void print(){
	printf("Program Running!\n");
}

void add(int val){
	printf("function executing!\n");	
}

void prettyPrint(){
	printf("function executing!\n");
}

BOOLEAN delete(int val){
	return TRUE;
}

struct NODE *find(int val){
	struct NODE *ptr = NULL;
	return ptr;
}
