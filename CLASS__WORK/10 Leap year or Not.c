// Check a given Year is Leap Year or Not

#include<stdio.h>

void main()
{
	int year;
	
	printf("Please Enter Year :-");
	
	scanf("%d", &year);
	
	if(year%4 == 0)
	{
		printf("This Year is Leap Year");
	}
	else
	{
		printf("This Year is Not-Leap Year");
	}
}