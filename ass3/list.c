#define BOOLEAN int
#define TRUE 1
#define FALSE 0
#include<stdlib.h>

typedef struct NODES
{
	int value;
	struct NODE *next;
}NODE;

NODE *head = NULL;
NODE *curr = NULL;

/*void print(){
	printf("Program Running!\n");
}*/

void add(int val){ //implement this first
	if(NULL == head){
		printf("\nCreating list with head NODE as [%d].\n", val);
		NODE *ptr = (NODE*)malloc(sizeof(NODE));
		if(NULL == ptr){
			printf("\nNODE Creation Failed.\n");
		}
		ptr->value = val;
		ptr->next = NULL;
		head = curr = ptr;
	}else{
		printf("\nAdding NODE to end of list with value [%d].\n", val);
		NODE *ptr = (NODE*)malloc(sizeof(NODE));
		if(NULL == ptr){
			printf("\nNODE Creation Failed.\n");
		}else{
			ptr->value = val;
			ptr->next = NULL;
			curr->next = ptr;
			curr = ptr;
		}
	}
	//printf("function executing!\n");	
}

void prettyPrint(){ //implement this second
	NODE *ptr = head;
	
	printf("\n-----Printing List Starts-----\n");
	if(ptr != NULL){
		while(ptr != NULL){
			printf("\n [%d] \n", ptr->value);
			ptr = ptr->next;
		}

		printf("\n-----Printing List Ends-----\n");
	}else{
		printf("\nList is empty.\n");
		printf("\n-----Printing List Ends-----\n");
	}
}

NODE *find(int val, NODE **prev){ //implement this third
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
		if(prev){
			*prev = tmp;//tmp is the address of the pointer that the pointer to the pointer(**prev) points to. So here we're letting the pointer to a pointer, **prev, points to the pointer tmp.
		}
		return ptr;
	}
	else{
		return NULL;
	}
}

BOOLEAN delete(int val){ //implement this last
	NODE *prev = NULL;
	NODE *del = NULL;
	int i;

	printf("\nDeleting value [%d] from list\n", val);
	
	del = find(val, &prev);
	for(i=0; i<1; i++){
		if(del == NULL){
			return FALSE;
		}
		else{
			if(prev != NULL){
				prev->next = del->next;
			}
			
			if(del == curr){ //if there's only one node left, then the node is both curr and head
				if(head->next == NULL){
					free(head);
					head = NULL;
					return TRUE;
					break;
				}
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
}

