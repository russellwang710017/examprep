#define BOOLEAN int
#define TRUE 1
#define FALSE 0

typedef struct NODES
{
	int value;
	struct NODE *next;
}NODE;

NODE *head = NULL;
NODE *curr = NULL;

void print();

NODE* add(int);

void prettyPrint();

BOOLEAN delete(int);
