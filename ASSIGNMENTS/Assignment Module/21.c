// 31)  Input month number and print number of days in that month using Switch Case.

#include<stdio.h>

void main()
{
	printf("\n\t\t\xb2\xb2\xb2\xb2\xb2\xb2 Month Number in integer and display the number of days for this month \xb2\xb2\xb2\xb2\xb2\xb2");
	
	int month;
	
	printf("\n\n\t\t Please Enter Month :- ");
	scanf("%d",&month);
	
	switch(month)
	{
		case 1 :
		case 3 :
		case 5 :
		case 7 :
		case 8 :
		case 10 :
		case 12 : printf("\n\n\t\t Total Days in %d month is : 31", month);
		break;
		
		case 2 : printf("\n\n\t\t Total Days in %d month is : 28 or 29", month);
		break;
		
		case 4 :
		case 6 :
		case 9 :
		case 11 : printf("\n\n\t\t Total Days in %d month is : 30", month);
		break;
		
		default : printf("\n\n\t\t Invalid input! Please enter month number between (1-12).");
        break;
		
	}

}
