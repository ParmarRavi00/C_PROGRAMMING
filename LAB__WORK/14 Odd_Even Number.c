//  Check Number Odd or Even

#include<stdio.h>

void main()
{
	printf("\n \t \t\xb2\xb2\xb2\xb2\xb2\xb2 Check Number Odd or Even \xb2\xb2\xb2\xb2\xb2\xb2 \n");
	
	int num;
	
	printf("\n \n \t \t Please Enter Number :- ");
	scanf("%d",&num);
	
	if(num%2 != 0)
	{
		printf("\n \n \t \t This Number is Odd. ");
	}
	else
	{
		printf("\n \t \t This Number is Even. ");
	}	
}