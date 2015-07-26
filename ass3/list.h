#define BOOLEAN int
#define TRUE 1
#define FALSE 0

typedef struct NODES
{
	int value;
	struct NODE *next;
}NODE;

void print();

void add(int);

void prettyPrint();

BOOLEAN delete(int);
