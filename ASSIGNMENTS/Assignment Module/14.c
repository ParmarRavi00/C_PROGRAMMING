// 14)   find the largest of three numbers Without ternary operator.

#include<stdio.h>

void main()
{
	printf("\n\t\t\xb2\xb2\xb2\xb2\xb2\xb2 find the largest of three numbers \xb2\xb2\xb2\xb2\xb2\xb2");
	
	int value1, value2, value3;
	
	printf("\n\n\t\t Enter First Value:- ");
	scanf("%d",&value1);
	
	printf("\n\t\t Enter Second Value:- ");
	scanf("%d",&value2);
	
	printf("\n\t\t Enter Thared Value:- ");
	scanf("%d",&value3);
	
	if(value1 > value2)
	{
		if(value1 > value3)
		{
			printf("\n\n\t\t Largest Number Of : %d",value1);
		}
		else
		{
			printf("\n\n\t\t Largest Number Of : %d",value3);
		}
	}
	else
	{
		if(value2 > value3)
		{
			printf("\n\n\t\t Largest Number Of : %d",value2);
		}
		else
		{
			printf("\n\n\t\t Largest Number Of : %d",value3);
		}
	}
}
