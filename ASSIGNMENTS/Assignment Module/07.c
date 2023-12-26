// 7)  Accept marks from user and check pass or fail

#include<stdio.h>

void main()
{
	int mark;
	
	printf("\n \t\xb2\xb2\xb2\xb2\xb2\xb2 Check Student is pass or fail \xb2\xb2\xb2\xb2\xb2\xb2");
	
	printf("\n\n \t Please Enter Your Marks : ");
	scanf("%d",&mark);
	
	if(mark >= 33)
	{
		printf("\n \t You Are Pass.");
	}
	else
	{
		printf("\n \t You Are Fail.");
	}
}