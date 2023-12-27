// 11)  Find number is even or odd using ternary operator

#include<stdio.h>

void main()
{
	int Number;
	
	printf("\n \t \t \xb2\xb2\xb2\xb2\xb2\xb2 Number is Even or Odd Using Ternary Operator \xb2\xb2\xb2\xb2\xb2\xb2");
	
	printf("\n \n \t \t Please Enter Number :- ");
	scanf("%d",&Number);
	
	(Number%2==0) ? printf("\n \n \t \t This Number is Odd.") : printf("\n \n \t \t This Number is Even.");
	
}