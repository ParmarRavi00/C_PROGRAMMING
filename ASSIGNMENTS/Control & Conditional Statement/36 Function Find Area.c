// Find Area of Rectangle and Circle

#include<stdio.h>

void rec();
void cir();

void main()
{
	
	printf("\xb2\xb2\xb2\xb2\xb2\xb2 Find Area of Rectangle or Circle \xb2\xb2\xb2\xb2\xb2\xb2");
	
	char desition;
	
	printf("\n\n Please Enter Your Choice :- ");
	scanf("%c", &desition);
	
	if(desition == 'r')
	{
		rec();
	}
	else if (desition == 'c')
	{
		cir();
	}
	
}


void rec()
{
	printf("\n\n Find Area of Rectangle");
	
	int l,w;
	
	printf("\n\n Please Enter Length :- ");
	scanf("%d", &l);
	
	printf("\n Please Enter Width :- ");
	scanf("%d", &w);
	
	printf("\n\n Area of Rectangle : %d", (l*w));
}


void cir()
{
	printf("\n\n Find Area of Circle");
	
	int rad;
	float res;
	
	printf("\n\n Please Enter Radius :- ");
	scanf("%d", &rad);
	
	res = 3.14 * rad * rad;
	printf("\n\n Area of Circle : %.2f", res);
}