// Pointer in Function 

#include<stdio.h>

//  ---------- Call by Value ----------
int square(int n);
int _square(int *n);

void main()
{
	int number = 4;
	
	square(number);
	
	printf("\nNumber :- %d", number);
	
	
	_square(&number);
	
	printf("\nNumber :- %d", number);
}

int square(int n)
{
	n = n * n;
	
	printf("Square :- %d", n);
}


//  ---------- Call by Reference ----------

int _square(int *n)
{
	*n = (*n) * (*n);
	
	printf("\n\nSquare :- %d", *n);
}