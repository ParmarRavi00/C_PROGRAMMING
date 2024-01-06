/* 08)  Accept the height of a person in centimeters and categorize the
person according to their height. */

#include<stdio.h>

void main()
{
	int height;
	
	printf("\n \t \t \xb2\xb2\xb2\xb2\xb2\xb2  Categorize the person according to their height \xb2\xb2\xb2\xb2\xb2\xb2");
	
	printf("\n\n \t \t Please Enter Your Height :- ");
	scanf("%d",&height);
	
	if(height>170)
	{
		printf("\n \t \t You Are Tall");
	}
	else if(height<=170 && height>150)
	{
		printf("\n \t \t You Are Medium");
	}
	else
	{
		printf("\n \t \t You Are Small");
	}
}