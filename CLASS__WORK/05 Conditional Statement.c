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


3) Ladder if else Statement:-

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

4)switch statement.

	syntax: 
		switch(condition)
		{
			case type:statement
				  break;
			case type:statement
				  break;
			case type:statement
				  break;
			.
			.
			.
			default :statement
				 break;
		}	

		


Jumping keywords;

1)break.
2)continue.
3)goto.

Comments : 

1) Single-line :   //

2) Multi-Line  : /*  code  */
	

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