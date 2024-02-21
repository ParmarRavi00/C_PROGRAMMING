// Swapping two Values

#include<stdio.h>

void swap();

void main()
{
	swap();
}

void swap()
{
	
	printf("Swapping Values");
	int a = 15, b = 20;
	
	printf("\n\nValue of A is:- %d",a);
	printf("\nValue of B is:- %d",b);
	
	int c = a+b;
	
	a=c-a;	
	b=c-b;
	
	// Second Method
//	c=a;
//	a=b;
//	b=c;
	
	printf("\n\nAfter Swapping Value of A is :- %d",a);
	printf("\nAfter Swapping Value of B is :- %d",b);
}