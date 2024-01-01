// 32)  Input basic salary of an employee and calculateits Gross salary

#include <stdio.h>

int main()
{
	printf("\n\t\t\xb2\xb2\xb2\xb2\xb2\xb2 Input basic salary of an employee and calculateits Gross salary \xb2\xb2\xb2\xb2\xb2\xb2");
	
    int Salary, HRA, DA;
    
    printf("\n\n\t\t Please Enter Salary :- ");
	scanf("%d",&Salary);


    if (Salary <= 10000)
	{
        HRA = (Salary * 20) / 100;
        DA = (Salary * 80) / 100;
    }
	 else if (Salary <= 20000)
	{
        HRA = (Salary * 25) / 100;
        DA = (Salary * 90) / 100;
    } else
	{
        HRA = (Salary * 30) / 100;
        DA = (Salary * 95) / 100;
    }
    
    printf("\n\t\t Total Salary : %d", Salary);
    printf("\n\t\t HRA : %d", HRA);
    printf("\n\t\t DA : %d", DA);
    
    return 0;
}