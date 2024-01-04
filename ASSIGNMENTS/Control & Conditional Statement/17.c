// 17)  Check whether a triangle can be formed with the given values for the angles.

#include<stdio.h>

void main()
{
	printf("\n\n\t\t\xb2\xb2\xb2\xb2\xb2\xb2 Check whether a triangle can be formed with the given values for the angles. \xb2\xb2\xb2\xb2\xb2\xb2");
	
	int a, b, c;
	
	printf("\n\n\t\t Please Enter Value of A :- ");
	scanf("%d",&a);
	
	printf("\n\t\t Please Enter Value of B :- ");
	scanf("%d",&b);
	
	printf("\n\t\t Please Enter Value of C :- ");
	scanf("%d",&c);
	
	if((a+b)>c && (a+c)>b && (b+c)>a)
	{
		printf("\n\n\t\t A Triangle of these values is formed.");
	}
	else
	{
		printf("\n\n\t\t These Values do not form a Triangle.");
	}
}