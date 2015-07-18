#include<stdio.h>

int main(int argc, char* argv[]){
	int a;
	int b;
	int c;
	int d;
	int e;
	int f;
	int g;
	int h;
	int i;
	int j;
	int sum;
	float average;
	printf("Please enter 10 numbers.");
	scanf("%d, %d, %d, %d, %d, %d, %d, %d, %d, %d", &a, &b, &c, &d, &e, &f, &g, &h, &i, &j);
	sum = a + b + c + d + e + f + g + h + i + j;
	printf("The sum is %d.\n", sum);
	average = sum/10.0;
	printf("The average is %f.\n", average);

	return 0;
}
