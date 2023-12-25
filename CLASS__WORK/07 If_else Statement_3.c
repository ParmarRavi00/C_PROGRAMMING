// Check a Given Number is Divisible by 5 and 11 or Not

#include<stdio.h>

int main()
{
	
	int num;
	
	printf("Please Enter Your Number :-");
	
	scanf("%d",&num);
	
	if(num%5==0 && num%11==0)
	{
	printf("This Number Is Divided by 5 and 11 both");	
	}
	else
	{
	printf("This Number Is Not Divided by 5 and 11 both");	
	}
	
	
	return 0;
}