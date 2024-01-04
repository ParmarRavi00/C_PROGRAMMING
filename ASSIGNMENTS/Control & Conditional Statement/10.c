// 10)  Check whether a number is negative, positive or zero.

#include<stdio.h>

void main()
{
	printf("\n\n \t \t \xb2\xb2\xb2\xb2\xb2 Check whether a number is negative, positive or zero \xb2\xb2\xb2\xb2\xb2");
	
	int Number;
	
	printf("\n\n \t \t Enter Whether : ");
	
	scanf("%d", &Number);
	
	if(Number>0)
	{
		printf("\n\n \t \t Whether is Positive.");
	}
	else if(Number==0)
	{
		printf("\n\n \t \t Whether is Zero.");
	}
	else
	{
		printf("\n\n \t \t Whether is Nagative.");
	}
	
}
	