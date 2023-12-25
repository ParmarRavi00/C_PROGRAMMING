// Conditional Statement :-

/*

1) if Statement:-

		if(Condition)
		{
			True Statement;
		}


2) if else Statement:-

		if(Condition)
		{
			True Statement;
		}
		else
		{
			False Statement;
		}


3) else if Statement:-

		if(Condition)
		{
			Statement;
		}
		else if(Condition)
		{
			Statement;
		}
		else
		{
			Statement;
		}


*/	
	

// Check if person can Vote or not

#include<stdio.h>

int main()
{
	
	int age;
	
	printf("Please Enter Your Age :-");
	
	scanf("%d",&age);
	
	if(age>18)
	{
	printf("You Are Elagible for Licence");	
	}
	else
	{
	printf("You Are Not Elagible for Licence");	
	}
	
	
	return 0;
}