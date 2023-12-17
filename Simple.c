#include<stdio.h>

int main()
{
	float a, b;
	
	printf("Please Enter Value of A :");
	scanf("%f",&a);
	
	printf("Please Enter Value of B :");
	scanf("%f",&b);
	
	a=a+b; // 10 + 20 = 30
	
	b=a-b; // 30 - 20 = 10
	
	a=a-b; // 30 - 10 = 20
	
	printf("Please Enter Value of A : %f",a);
	printf("Please Enter Value of B : %f",b);
	
	return 0;
}