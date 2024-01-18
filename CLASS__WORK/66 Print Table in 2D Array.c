// Print Table in 2D Array

#include<stdio.h>

void storeTable(int arr[][10], int index, int number); // 2D Array ne jyare Function ma Pass Kariye tyare Always Second Dimention Kevo Jaruri chhe.

void main()
{
	int table[2][10];
	
	storeTable(table, 0, 5);
	storeTable(table, 1, 10);
	
	for(int i=0; i<2;i++)
	{
		for(int j=0; j<10; j++)
		{
			printf("%d\t", table[i][j]);
		}
		printf("\n\n");
	}
}

void storeTable(int arr[][10], int index, int number)
{
	for(int j=0; j<10; j++)
	{
		arr[index][j] = number * (j+1);
	}
}
