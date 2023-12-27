/* 02)  Write a C program to read the value of an integer m and display the value of
n is 1 when m is larger than 0, 0 when m is 0 and -1 when m is less than 0 */

#include<stdio.h>

void main()
{
	printf("\n\n \t \t \xb2\xb2\xb2\xb2\xb2 Check a number is negative, positive or zero \xb2\xb2\xb2\xb2\xb2");
	
	int Number;
	
	printf("\n\n \t \t Enter Number : ");
	
	scanf("%d", &Number);
	
	if(Number>0)
	{
		printf("\n\n \t \t 1");
	}
	else if(Number==0)
	{
		printf("\n\n \t \t 0");
	}
	else
	{
		printf("\n\n \t \t -1");
	}
	
}
	