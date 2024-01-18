// Fibonacci Series with Array

#include<stdio.h>

void main()
{
	int n;
	
	printf("PLease Last Digit of Fibonacci Series :- ");
	scanf("%d", &n);
	
	int arr[n];
	
	arr[0] = 0;
	arr[1] = 1;
	
	printf("\n%d\t", arr[0]);
	printf("%d\t", arr[1]);
	for(int i=2;i<n;i++)
	{
		arr[i] = arr[i-2] + arr[i-1];
		printf("%d\t", arr[i]);
	}
}