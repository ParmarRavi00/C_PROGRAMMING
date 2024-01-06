//  Find Big Digit from in Number

#include<stdio.h>

void main()
{
	int num,rem,big=0;
	
	printf("\n \t\xb2\xb2\xb2\xb2\xb2\xb2 Find Big Digit from in Number \xb2\xb2\xb2\xb2\xb2\xb2");
	
	printf("\n\n \t Please Enter Number :- ");
	
	scanf("%d",&num);
	
	while(num!=0)
	{
		rem=num%10;
		
		if(rem > big)
		{
			big = rem;
		}
		
		num=num/10;
	}
	
	printf("\n\n \t Big Digit in this Number is :- %d",big);
}