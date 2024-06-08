// Multidimensional Array :- Array ne Matrix type print karava mate 

#include<stdio.h>

void main()
{
	int a[2][3] = {4, 7, 9, 10, 12, 15};
	int b[2][3] = {2, 4, 5, 7, 11, 13};
	int c[2][3];
	
	int row, col;
	
	printf("----- First Matrix -----\n\n");
	
	for(int row=0;row<2;row++)
	{
		for(int col=0;col<3;col++)
		{
			printf("%d \t", a[row][col]);
		}
		
		printf("\n");
	}
	
	printf("\n----- Second Matrix -----\n\n");
	
	for(int row=0;row<2;row++)
	{
		for(int col=0;col<3;col++)
		{
			printf("%d \t", b[row][col]);
		}
		
		printf("\n");
	}
	
	printf("\n----- Addition of Matrix-1 and Matrix-2 -----\n\n");
	
	for(int row=0;row<2;row++)
	{
		for(int col=0;col<3;col++)
		{
			c[row][col] = a[row][col] + b[row][col];
			printf("%d \t", c[row][col]);
		}
		
		printf("\n");
	}
}