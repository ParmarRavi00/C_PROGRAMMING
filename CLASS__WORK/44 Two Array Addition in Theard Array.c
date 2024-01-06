// Two Array Addition in Theard Array

#include<stdio.h>

void main()
{
	
	printf("\n\t\t\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2 Two Array Addition in Theard Array \xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\n\n");
	
	int i, arr1[5], arr2[5], sum[5];
	
	printf("\n\t\t Please Enter 5 Values of Array-1 :- ");
	
	for(i=0; i<5; i++)
	{
		scanf("%d", &arr1[i]);
	}
	
	
	printf("\n\t\t Please Enter 5 Values of Array-2 :- ");
	
	for(i=0; i<5; i++)
	{
		scanf("%d", &arr2[i]);
	}
	
	for(i=0; i<5; i++)
	{
		sum[i] = arr1[i] + arr2[i];
	}
	
	
	printf("\n\t\t Addition of Array-1 And Array-2 :- ");
	
	for(i=0; i<5; i++)
	{
		printf("\t : %d", sum[i]);
	}
}