// 16)  Read temperature in centigrade and display a suitable message according to the temperature

#include <stdio.h>

int main()
{
	printf("\n\t\t\xb2\xb2\xb2\xb2\xb2\xb2 Display a suitable message according to the temperature \xb2\xb2\xb2\xb2\xb2\xb2");
	
    int temp;
    
    printf("\n\n\t\t Please Enter Temperature :- ");
	scanf("%d",&temp);


    if(temp < 0)
    {
        printf("\n\n\t\t Freezing weather");
    }
    else if(temp >= 0 && temp <= 10)
    {
        printf("\n\n\t\t Very Cold weather");
    }
    else if(temp > 10 && temp <= 20)
    {
        printf("\n\n\t\t Cold weather");
    }
    else if(temp > 20 && temp <= 30)
    {
       	printf("\n\n\t\t  Normal in Temp");
    }
    else if(temp > 30 && temp <= 40)
    {
        printf("\n\n\t\t  Its Hot");
    }
    else if(temp >= 40)
    {
        printf("\n\n\t\t Its Very Hot");
    }
    else
    {
        printf("Invalid input! Please Enter Valid Input");
    }

    return 0;
}