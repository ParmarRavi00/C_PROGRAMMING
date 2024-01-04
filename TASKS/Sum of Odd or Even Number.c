#include<stdio.h>

void main()
{
	int i, num, sum1=0, sum2=0;
	
	printf(" Please Enter Number :- ");
	
	scanf("%d",&num);
	
	for(i=1; i<=num; i++)
	{
		if(i%2==0)
		{
			sum1 = sum1 + i;
		}
		
		if(i%2!=0)
		{
			sum2 = sum2 + i;
		}
	}
	
	printf("\n\n Sum of Even number : %d", sum1);
	printf("\n Sum of Odd number : %d", sum2);
}