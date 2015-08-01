#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"list.h"

void print(){
	printf("Program Running!\n");
}

NODE* add(int val){ //implement this first
	if(NULL == head){
		printf("\nCreating list with head NODE as [%d].\n", val);
		NODE *ptr = (NODE*)malloc(sizeof(NODE));
		if(NULL == ptr){
			printf("\nNODE Creation Failed.\n");
			return NULL;
		}
		ptr->value = val;
		ptr->next = NULL;
		head = curr = ptr;
		return ptr;
	}else{
		printf("\nAdding NODE to end of list with value [%d].\n", val);
		NODE *ptr = (NODE*)malloc(sizeof(NODE));
		if(NULL == ptr){
			printf("\nNODE Creation Failed.\n");
			return NULL;
		}else{
			ptr->value = val;
			ptr->next = NULL;
			curr->next = ptr;
			curr = ptr;
			return ptr;
		}
	}
	printf("function executing!\n");	
}

void prettyPrint(){ //implement this second
	NODE *ptr = head;
	
	printf("\n-----Printing List Starts-----\n");
	while(ptr != NULL){
		printf("\n [%d] \n", ptr->value);
		ptr = ptr->next;
	}

	printf("\n-----Printing List Ends-----\n");
}

NODE *find(int val){ //implement this third
	NODE *ptr = head; //Need to first define head in the main method
	NODE *tmp = NULL;
	BOOLEAN found = FALSE;
	printf("\nSearching the List for Value [%d]\n", val);
	
	while(ptr != NULL){
		if(ptr->value == val){
			found = TRUE;
			break;
		}
		else{
			tmp = ptr;
			ptr = ptr->next;
		}
	}

	if(found){
		return ptr;	
	}
	else{
		return NULL;
	}
}

BOOLEAN delete(int val){ //implement this last
	NODE *prev = NULL;
	NODE *del = NULL;
	
	printf("\nDeleting value [%d] from list\n", val);
	
	del = find(val);
	
	if(del == NULL){
		return FALSE;
	}
	else{
		if(prev != NULL){
			prev->next = del->next;
		}
		
		if(del == curr){
			curr = prev;
		}

		else if(del == head){
			head = del->next;
		}
	}

	free(del);
	del = NULL;
	
	return TRUE;
}

