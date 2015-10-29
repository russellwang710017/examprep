#define BOOLEAN int
#define TRUE 1
#define FALSE 0
#include<stdio.h>
#include<stdlib.h>

typedef struct NODES
{
	int value;
	struct NODE *next;
}NODE;

NODE *head = NULL;
NODE *curr = NULL;

int add(int val){
	if(head == NULL){
		printf("\nCreating Linked List with value [%d]\n", val);
		NODE *ptr = (NODE*)malloc(sizeof(NODE));
		if(ptr == NULL){
			printf("\nNODE Creation Failed\n");
		}else{
			ptr->value = val;
			ptr->next = NULL;
			curr = head = ptr;
		}
	}else{
		printf("\nAdding NODE to linked list with value [%d]\n", val);
		NODE *ptr = (NODE*)malloc(sizeof(NODE));
		if(ptr == NULL){
			printf("\nNODE Creation Failed\n");
		}else{
			ptr->value = val;
			ptr->next = NULL;
			curr->next = ptr;
			curr = ptr;
		}
	}
}

void prettyPrint(){
	NODE *ptr = head;
	printf("\n-----Printing List Starts-----\n");
	if(ptr != NULL){
		while(ptr != NULL){
			printf("\n[%d]\n", ptr->value);
			ptr = ptr->next;
		}
	}else{
		printf("\nThe List is empty\n");
	}
	printf("\n-----Printing List Ends-----\n");
}

void recursivePrint(NODE *head){
	//Base Case
	if(head == NULL){
		return;
	}
	
	printf("\n[%d]\n", head->value);

	recursivePrint(head->next);
}
