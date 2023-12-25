// Check Your Class

#include<stdio.h>

int main()
{
	
	int mark;
	
	printf("Please Enter Your mark :-");
	
	scanf("%d",&mark);
	
	if(mark<=100 && mark>=70)
	{
	printf("You Are Passed With Distriction Class");	
	}
	else if (mark<=69 && mark>=60)
	{
	printf("You Are Passed With First Class");	
	}
	else if (mark<=59 && mark>=50)
	{
	printf("You Are Passed With Second Class");	
	}
	else if (mark<=49 && mark>=40)
	{
	printf("You Are Pass");	
	}
	else if(mark<=39 && mark>=0)
	{
	printf("You Are Fail");		
	}
	else
	{
	printf("Plese Enter Valid Input");	
	}
	
	return 0;
}