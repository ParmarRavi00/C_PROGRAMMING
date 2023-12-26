// 3)   Check if the given year is a leap year or not.

#include<stdio.h>

void main()
{
	printf("\n\n\t\t\xb2\xb2\xb2\xb2\xb2\xb2 Check if the given year is a leap year or not \xb2\xb2\xb2\xb2\xb2\xb2");
	
	printf("\n\n\t\t\xf2\xf2\xf2\xf2\xf2\xf2 Please Enter Year : ");
	
	int year;
	
	scanf("%d",&year);
	
	if(year%4 == 0)
	{
		printf("\n\t\t This Year is Leap Year.");
	}
	else
	{
		printf("\n\t\t This Year is Not-Leap Year.");
	}
}