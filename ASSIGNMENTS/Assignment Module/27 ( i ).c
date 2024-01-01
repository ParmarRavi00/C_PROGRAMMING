// 37 (i) )  Input the week number and print week day using Switch Case.

#include <stdio.h>

int main()
{
	
	printf("\n\n\t\t\xb2\xb2\xb2\xb2\xb2\xb2 Print day name of week \xb2\xb2\xb2\xb2\xb2\xb2");
	
    int week;

    printf("\n\n\t\t Enter week number (1-7):- ");
    scanf("%d", &week);


    switch(week)
    {
        case 1 : printf("\n\t\t Monday");
        break;
        
        case 2 : printf("\n\t\t Tuesday");
        break;
        
        case 3 : printf("\n\t\t Wednesday");
        break;
        
        case 4 : printf("\n\t\t Thursday");
        break;
        
        case 5 : printf("\n\t\t Friday");
        break;
        
        case 6 : printf("\n\t\t Saturday");
        break;
        
        case 7 : printf("\n\t\t Sunday");
        break;
        
        default : printf("\n\t\t Invalid Input! Please enter week number between 1-7.");
        break;
    }

    return 0;
}