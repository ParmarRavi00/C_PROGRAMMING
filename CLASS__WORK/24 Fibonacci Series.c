// Fibonacci Series

#include<stdio.h>

void main()
{
	printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 Fibonacci Series \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");

	int i, last_digit, n1=0, n2=1, n3;
		
	printf("\n\n Plese Enter Last Degeit of Fibonacci Series :- ");
	scanf("%d", &last_digit);
	
	printf("\n\t %d \t %d", n1, n2);
	
	for(i=0; i<=last_digit; i++)
	{
		n3 = n1 + n2;
		
		printf("\t %d", n3);
		
		n1 = n2;
		n2 = n3;
	}


}