// 13)  Find minimum number among 3 numbers using ternary operator

#include<stdio.h>

void main()
{
	int Number1, Number2, Number3;
	
	printf("\n \t \t \xb2\xb2\xb2\xb2\xb2\xb2 Find minimum number among 3 numbers using ternary operator \xb2\xb2\xb2\xb2\xb2\xb2");
	
	printf("\n \n \t \t Please Enter Number-1 :- ");
	scanf("%d",&Number1);
	
	printf("\n \n \t \t Please Enter Number-2 :- ");
	scanf("%d",&Number2);
	
	printf("\n \n \t \t Please Enter Number-3 :- ");
	scanf("%d",&Number3);
	
	(Number1 < Number2) ? (Number1 < Number3) ? printf("\n \n \t \t %d is Minimum Number",Number1) : printf("\n \n \t \t %d is Minimum Number",Number3) : (Number2 < Number3) ? printf("\n \n \t \t %d is Minimum Number",Number2) : printf("\n \n \t \t %d is Minimum Number",Number3);
	
}