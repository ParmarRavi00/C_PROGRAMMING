#include<stdio.h>

void main()
{
	int i, Number;
	
	printf("\n \t \t \xb2\xb2\xb2\xb2\xb2\xb2 Find a Number is Prime or Not \xb2\xb2\xb2\xb2\xb2\xb2");
	
	printf("\n \n \t \t Please Enter Number :- ");
	scanf("%d",&Number);
	
	int count=0;
	
	for(i=1;i<=Number;i++)
	{
		if(Number%i==0)
		{
			count++;
		}
	}
	
	if(count<=2)
	{
		printf("\n \t \t This Number is Prime Number.");
	}
	else
	{
		printf("\n \t \t This Number is Not-Prime Number.");
	}

}