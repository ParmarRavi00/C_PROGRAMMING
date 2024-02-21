// Swapping in Pointer

#include<stdio.h>

int swap(int a, int b);
int _swap(int *a, int *b);

void main()
{
	int x = 3, y = 5;
	
	swap(x, y);	
	
	printf("\nx = %d, y = %d", x, y);
	
	_swap(&x, &y);
	
	printf("\nx = %d, y = %d", x, y);
}

// Call by Value

int swap(int a, int b)
{
	int t;
	t = a;
	a = b;
	b = t;
	
	printf("a = %d, b = %d", a,b);
}



// Call by Reference

int _swap(int *a, int *b)
{
	int t;
	t = *a;
	*a = *b;
	*b = t;
	
	printf("\n\na = %d, b = %d", *a, *b);
}