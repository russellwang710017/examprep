#include <stdio.h>

int main(int argc, char *argv[])
{
	int d;
	int i;
	int j;
	printf("Enter an integer: ");
	scanf("%d", &d);

	for (i = 0; i < d; i++)
	{
		for (j = 0; j < d; j++)
		{
			printf("x");
		}
		printf("\n");
	}
	return 0;
}
