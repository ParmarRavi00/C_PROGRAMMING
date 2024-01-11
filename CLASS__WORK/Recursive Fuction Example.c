// Recursive Function

#include<stdio.h>

int add();

int main()
{
	int number;
	
	printf("Please Enter Number :-");
	scanf("%d",&number);
	
	printf("%d",add(number));
}

int add(int n)
{
	if(n!=0)
	{
		return n + add(n-1);
	}
	else
	{
		return 0;
	}
}