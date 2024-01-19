// Return Multiple Values in Function je Only Pointer na use thi j possible chhe.

#include<stdio.h>

int dowork(int a, int b, int *sum, int *multi, int *average);

void main()
{
	int a = 5, b = 3;
	int sum, multi, average;
	
	dowork(a, b, &sum, &multi, &average);
	
	printf("Sum of A and B = %d", sum);
	printf("\nMultiplication of A and B = %d", multi);
	printf("\nAverage of A and B = %d", average);
}

int dowork(int a, int b, int *sum, int *multi, int *average)
{
	*sum = a + b;
	*multi = a * b;
	*average = (a+b)/2;
}