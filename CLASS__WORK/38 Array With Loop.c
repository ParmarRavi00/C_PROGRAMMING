// Array With loop

#include<stdio.h>

void main()
{
	
	printf("\n\t\t\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2 Array With Loop \xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\n\n");
	
	int i, arr[5];
	
	printf("\n\t\t Please Enter 5 Values :- ");
	
	for(i=0; i<5; i++)
	{
		scanf("%d", &arr[i]);
	}
	
	printf("\n\t\t Five Value of Array is : ");
	
	for(i=0; i<5; i++)
	{
		printf("\t %d", arr[i]);
	}

}