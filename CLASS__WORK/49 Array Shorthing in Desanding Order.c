//  Array Shorthing in Desanding Order

#include<stdio.h>

void main()
{
	
	printf("\n \t\xb2\xb2\xb2\xb2\xb2\xb2 Find Big Number from in Array \xb2\xb2\xb2\xb2\xb2\xb2");
	
	printf("\n\n \t Please Enter Five Numbers :- ");
	
	int num[5];
	int i,j,swap;
	
	for(i=0; i<5; i++)
	{
		scanf("%d",&num[i]);
	}
	
	printf("\n\n\t Before Array Shorting :-");
	
		for(i=0; i<5; i++)
	{
		printf("\t%d",num[i]);
	}
	
	for(i=0; i<5; i++)
	{
		for(j=i+1; j<5; j++)
		{
			if(num[i] < num[j])
			{
				swap = num[i];
				num[i] = num[j];
				num[j] = swap; 
			}
		}
	}
	
	printf("\n\n\t After Array Shorting :-");
	
		for(i=0; i<5; i++)
	{
		printf("\t%d",num[i]);
	}
}