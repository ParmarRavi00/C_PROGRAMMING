//  Palindrome Number

#include<stdio.h>

void main()
{
	int num,rem,rev=0;
	
	printf("\n \t\xb2\xb2\xb2\xb2\xb2\xb2 Palindrome Number \xb2\xb2\xb2\xb2\xb2\xb2");
	
	printf("\n\n \t Please Enter Number :- ");
	
	scanf("%d",&num);
	
	int tem = num;
	
	while(num!=0)
	{
		rem=num%10;
		rev=rev*10+rem;
		num=num/10;
	}
	
	if(tem==rev)
	{
		printf("\n\n \t This Number is Palindrome Number.");
	}
	else
	{
		printf("\n\n \t This Number is Not-Palindrome Number.");
	}
	
}