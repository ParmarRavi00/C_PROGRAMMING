#include<stdio.h>

void slice(char arr[], int m, int n);

void main()
{
	char str[100];
	int m, n;
	
	printf("Enter Your Word :- ");
	scanf("%s", str);
	
	printf("\nEnter Your First Point :- ");
	scanf("%d", &m);
	
	printf("Enter Your First Point :- ");
	scanf("%d", &n);
	
	slice(str, m, n);
}

void slice(char arr[], int m, int n)
{
	char newStr[100];
	int j=0;
	
	for(int i=m; i<=n; i++)
	{
		newStr[j] = arr[i];
		j++;
	}
	newStr[j] = '\0';
	
	printf("\n %s", newStr);
}