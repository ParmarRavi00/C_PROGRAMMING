// 36)   Input electricity unit charges and calculate total electricity bill

#include <stdio.h>

int main()
{
	printf("\n\t\t\xb2\xb2\xb2\xb2\xb2\xb2 Input electricity unit charges and calculate total electricity bill \xb2\xb2\xb2\xb2\xb2\xb2");
    
	int unit;
    float unitcharge, total_Bill, sur_charge;

    // Input unit consumed from user
    
    printf("\n\n\t\t Enter total units consumed:- ");
    scanf("%d", &unit);


    // Calculate electricity bill according to given conditions
    
    if (unit <= 50)
	{
        unitcharge = unit * 0.5;
    }
	else if
	  (unit <= 150) {
        unitcharge = 50 * 0.5 + (unit - 50) * 0.75;
    }
	else if (unit <= 250) {
        unitcharge = 50 * 0.5 + 100 * 0.75 + (unit - 150) * 1.2;
    }
	else
	{
        unitcharge = 50 * 0.5 + 100 * 0.75 + 100 * 1.2 + (unit - 250) * 1.5;
    }

    // Calculate total electricity bill after adding surcharge
     
    sur_charge = unitcharge * 0.20;
    
    total_Bill  = unitcharge + sur_charge;

    printf("\n\t\t Electricity Bill = Rs. %.2f", total_Bill);

    return 0;
}