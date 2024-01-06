// 4)  Make Simple calculator

#include<stdio.h>

int main()
{
	int val1, val2, operation;
	
	printf("\n \t \t \xb2\xb2\xb2\xb2\xb2 Simple Calculator \xb2\xb2\xb2\xb2\xb2");
	
	printf("\n\n \t \t Please Enter Value-1 : ");
	scanf("%d",&val1);
	
	printf("\n \t \t Please Enter Value-2 : ");
	scanf("%d",&val2);
	
	printf("\n \t \t Select Operation :\n\n \t \t 1 - is Addition \n \t \t 2 - is Subtraction \n \t \t 3 - is Multiplication \n \t \t 4 - is Division \n \t \t 5 - is Modulo \n\n \t \t Operator : ");
	scanf("%d",&operation);
	
	switch(operation)
	{
		case 1 : printf("\n\t \t Addition is : %d",val1+val2);
		break;
		
		case 2 : printf("\n\t \t Subtraction is : %d",val1-val2);
		break;
		
		case 3 : printf("\n\t \t Multiplication is : %d",val1*val2);
		break;
		
		case 4 : printf("\n\t \t Division is : %d",val1/val2);
		break;
		
		case 5 : printf("\n\t \t Modulo is : %d",val1%val2);
		break;
		
		default : printf("\n\t \t Please Select Valid Operator :");
	}
	
}