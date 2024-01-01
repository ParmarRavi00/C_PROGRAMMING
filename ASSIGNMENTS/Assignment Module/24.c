// 34)  Accept month number and display month name using Switch Case

#include <stdio.h>

int main()
{
	
	printf("\n\n\t\t\xb2\xb2\xb2\xb2\xb2\xb2 Month number and display month name \xb2\xb2\xb2\xb2\xb2\xb2");
	
    int month;

    printf("\n\n\t\t Enter Month number (1-12):- ");
    scanf("%d", &month);


    switch(month)
    {
        case 1 : printf("\n\t\t January");
        break;
        
        case 2 : printf("\n\t\t February");
        break;
        
        case 3 : printf("\n\t\t March");
        break;
        
        case 4 : printf("\n\t\t April");
        break;
        
        case 5 : printf("\n\t\t May");
        break;
        
        case 6 : printf("\n\t\t June");
        break;
        
        case 7 : printf("\n\t\t July");
        break;
        
        case 8 : printf("\n\t\t August");
        break;
        
        case 9 : printf("\n\t\t September");
        break;
        
        case 10 : printf("\n\t\t October");
        break;
        
        case 11 : printf("\n\t\t November");
        break;
        
        case 12 : printf("\n\t\t December");
        break;
        
        default : printf("\n\t\t Please Enter Valid Input");
        break;
    }

    return 0;
}