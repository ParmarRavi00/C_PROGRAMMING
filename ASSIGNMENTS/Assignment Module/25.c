// 35)  Input month number and print number of days in that month using If_else Statement.

#include <stdio.h>

int main()
{
	printf("\n\t\t\xb2\xb2\xb2\xb2\xb2\xb2 Month Number in integer and display the number of days for this month \xb2\xb2\xb2\xb2\xb2\xb2");
	
    int month;
    
    printf("\n\n\t\t Please Enter Month :- ");
	scanf("%d",&month);


    if(month == 1)
    {
        printf("\n\n\t\t Total Days in %d month is : 31", month);
    }
    else if(month == 2)
    {
        printf("\n\n\t\t Total Days in %d month is : 28 or 29", month);
    }
    else if(month == 3)
    {
        printf("\n\n\t\t Total Days in %d month is : 31", month);
    }
    else if(month == 4)
    {
       	printf("\n\n\t\t Total Days in %d month is : 30", month);
    }
    else if(month == 5)
    {
        printf("\n\n\t\t Total Days in %d month is : 31", month);
    }
    else if(month == 6)
    {
        printf("\n\n\t\t Total Days in %d month is : 30", month);
    }
    else if(month == 7)
    {
        printf("\n\n\t\t Total Days in %d month is : 31", month);
    }
    else if(month == 8)
    {
        printf("\n\n\t\t Total Days in %d month is : 31", month);
    }
    else if(month == 9)
    {
        printf("\n\n\t\t Total Days in %d month is : 30", month);
    }
    else if(month == 10)
    {
        printf("\n\n\t\t Total Days in %d month is : 31", month);
    }
    else if(month == 11)
    {
        printf("\n\n\t\t Total Days in %d month is : 30", month);
    }
    else if(month == 12)
    {
        printf("\n\n\t\t Total Days in %d month is : 31", month);
    }
    else
    {
        printf("Invalid input! Please enter month number between (1-12).");
    }

    return 0;
}