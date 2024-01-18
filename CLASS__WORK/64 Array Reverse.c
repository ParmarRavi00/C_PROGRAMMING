// Array Reverse :- Array ne jyare koi function ma pass kariye tyare Pass by Reference thay chhe.

#include<stdio.h>

int reverse(int arr[], int n);

int printarr(int arr[], int n);

void main()
{
	printf("Array Reverse");
	
	int arr[] = {1, 3, 5, 7, 9};
	
	printf("\n\nArray After Reverse\n");
	
	for(int i=0;i<5;i++)
	{
		printf("%d\t", arr[i]);
	}
	
	printf("\n\nArray Before Reverse\n");
	
	reverse(arr, 5);
	
	printarr(arr, 5);
}

int reverse(int arr[], int n)
{
	for(int i=0; i<n/2;i++)
	{
		int firstValue, secondValue;
		
		firstValue = arr[i];
		secondValue = arr[n-i-1];
		
		arr[i] = secondValue;
		arr[n-i-1] = firstValue;
	}
}


int printarr(int arr[], int n)
{
	for(int i=0;i<5;i++)
	{
		printf("%d\t", arr[i]);
	}
}