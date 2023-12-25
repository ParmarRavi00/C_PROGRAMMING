// Sum of values from user

#include<stdio.h>

void main()
{
	int i, a, sum=0;
	
	for(i=0;i<5;i++)
	{
		printf("Plese Enter Value :-");
		scanf("%d",&a);
		
		sum = sum + a;
	}
	printf("Sum of All Values :- %d",sum);
}