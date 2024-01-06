// 15)  Determine eligibility for admission to a professional course

#include <stdio.h>

int main()
{
	printf("\n\t\t\xb2\xb2\xb2\xb2\xb2\xb2 Determine eligibility for admission to a professional course \xb2\xb2\xb2\xb2\xb2\xb2");
    
	int maths, phy, chem, total, math_phy_total;
	
	printf("\n\n\t\t Enter Your Maths Marks :- ");
	scanf("%d", &maths);
	
	printf("\n\t\t Enter Your Physics Marks :- ");
	scanf("%d", &phy);
	
	printf("\n\t\t Enter Your Chamistry Marks :- ");
	scanf("%d", &chem);
	
	total = maths + phy + chem;
	
	math_phy_total = maths + phy;
	  
	if(maths >= 65 && phy >= 55 && chem >= 50 && total >= 190 && math_phy_total >=140)
	{
        printf("\n\n\t\t You are Eligibal for Professional Course");
    }
	else
	{
		printf("\n\n\t\t You are Not-Eligibal for Professional Course");
	}

    return 0;
}