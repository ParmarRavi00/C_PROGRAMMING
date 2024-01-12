//  Find Big Number from in Array

#include<stdio.h>

void main()
{
	int num[5];
	int i,big=0;
	
	printf("\n \t\xb2\xb2\xb2\xb2\xb2\xb2 Find Big Number from in Array \xb2\xb2\xb2\xb2\xb2\xb2");
	
	printf("\n\n \t Please Enter Five Numbers :- ");
	
	
	for(i=0; i<5; i++)
	{
		scanf("%d",&num[i]);
	}
	
	for(i=0; i<5; i++)
	{
		if(big<num[i])
		{
			big = num[i];
		}
	}
	
	printf("\n\n \t Big Number in this Array is :- %d",big);
}