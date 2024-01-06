// 33)   Input the week number and print week day using If_else Statement.

#include <stdio.h>

int main()
{
	
	printf("\n\n\t\t\xb2\xb2\xb2\xb2\xb2\xb2 Print day name of week \xb2\xb2\xb2\xb2\xb2\xb2");
	
    int week;

    printf("\n\n\t\t Enter week number (1-7):- ");
    scanf("%d", &week);


    if(week == 1)
    {
        printf("\n\t\t Monday");
    }
    else if(week == 2)
    {
        printf("\n\t\t Tuesday");
    }
    else if(week == 3)
    {
        printf("\n\t\t Wednesday");
    }
    else if(week == 4)
    {
        printf("\n\t\t Thursday");
    }
    else if(week == 5)
    {
        printf("\n\t\t Friday");
    }
    else if(week == 6)
    {
        printf("\n\t\t Saturday");
    }
    else if(week == 7)
    {
        printf("\n\t\t Sunday");
    }
    else
    {
        printf("Invalid Input! Please enter week number between 1-7.");
    }

    return 0;
}