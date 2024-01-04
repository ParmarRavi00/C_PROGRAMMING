// 19)   Input electricity unit charges and calculate total electricity bill

#include <stdio.h>

int main()
{
	printf("\n\t\t\xb2\xb2\xb2\xb2\xb2\xb2 Input electricity unit charges and calculate total electricity bill \xb2\xb2\xb2\xb2\xb2\xb2");
    
	int unit;
    float unitcharge;

    // Input unit consumed from user
    
    printf("\n\n\t\t Enter total units consumed:- ");
    scanf("%d", &unit);


    // Calculate electricity bill according to given conditions
    
    if (unit <= 350)
	{
        unitcharge = unit * 1.20;
    }
	else if(unit <= 600)
	{
        unitcharge = 350 * 1.20 + (unit - 350) * 1.50;
    }
	else if(unit <= 800)
	{
        unitcharge = 350 * 1.20 + 250 * 1.50 + (unit - 600) * 1.80;
    }
	else
	{
        unitcharge = 350 * 1.20 + 250 * 1.50 + 200 * 1.80 + (unit - 800) * 2.00;
    }

    printf("\n\t\t Electricity Bill = Rs. %.2f", unitcharge);

    return 0;
}