#include<stdio.h>

void add();
void sub();
void mul();
void div();
void mod();

void main()
{
	int val1, val2, ope;
	
	printf("\xb2\xb2\xb2\xb2\xb2\xb2 Calculator Using Function \xb2\xb2\xb2\xb2\xb2\xb2");
	
	printf("\n\n Please Enter Value 1 :- ");
	scanf("%d",&val1);
	
	printf("\n Please Enter Value 2 :- ");
	scanf("%d",&val2);
	
	printf("\n Please Enter Operation :- ");
	scanf("%d",&ope);
	
	switch(ope)
	{
		case 1 : add(val1, val2);
		break;
		
		case 2 : sub(val1, val2);
		break;
		
		case 3 : mul(val1, val2);
		break;
		
		case 4 : div(val1, val2);
		break;
		
		case 5 : mod(val1, val2);
		break;
		
		default : printf("\n\n Please Enter Valid Operation");
	}
	
	
}

void add(int a,int b)
{
	printf("\n\n Addition of this Values :- %d", (a+b));
}

void sub(int a,int b)
{
	printf("\n\n Substraction of this Values :- %d", (a-b));
}

void mul(int a,int b)
{
	printf("\n\n Multiplication of this Values :- %d", (a*b));
}

void div(int a,int b)
{
	printf("\n\n Division of this Values :- %d", (a/b));
}

void mod(int a,int b)
{
	printf("\n\n Modulo of this Values :- %d", (a%b));
}