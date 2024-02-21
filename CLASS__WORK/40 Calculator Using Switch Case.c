// Calculator

#include<stdio.h>

void main()
{
	int a,b,choice;
	printf("\n\t\t Enter A :- ");
	scanf("%d",&a);
	printf("\n\t\t Enter B :- ");
	scanf("%d",&b);
	
       	printf("\n\t\t\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2  Menu \xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\n\n");
		printf("\t\t press 1 for addition\n");
		printf("\t\t press 2 for subtraction\n");
		printf("\t\t press 3 for multiplication\n");
		printf("\t\t press 4 for division\n");
		
		 printf("\n\t\t Enter Your Choice :- ");
		 scanf("%d",&choice);
		 
		 switch(choice)
		 {
		 	case 1:printf("\n\t\t\tAddition is :- %d",a+b);
		 	break;
		 	
		 	case 2:printf("\n\t\t\tSubtraction is :- %d",a-b);
		 	break;
		 	
		 	case 3:printf("\n\t\t\tMultiplication is :- %d",a*b);
		 	break;
		 	
		 	case 4:printf("\n\t\t\tDivision is :- %d",a/b);
		 	break;
		 	
		 	default :printf("\n\t\t\t! Invalid input...!");
		 	break;
		 }
		 
	
}