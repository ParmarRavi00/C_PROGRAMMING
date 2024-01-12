#include<stdio.h>
#include<conio.h>
void main()
{
	int x=12;
	int y=32;
	int *x_ptr;
	int *y_ptr;
	x_ptr=&x;
	y_ptr=&y;
	
	
	printf("\n\n\t\t x=%d",*x_ptr);
	printf("\n\t\t x=%d",*y_ptr);
	
	
	//	-------------------------------


	int a;
	int *ptr;
	
	ptr = &a;
	*ptr = 0;  // *ptr mins ptr ma store thayeli value
	
	printf("\n\n\t\t a=%d",a);
	printf("\n\t\t *ptr=%d",*ptr);
	
	
	//	-------------------------------
	
	
	*ptr += 5;
	
	printf("\n\n\t\t a=%d",a);
	printf("\n\t\t *ptr=%d",*ptr);


	//	-------------------------------
	
	
	(*ptr)++;
	
	printf("\n\n\t\t a=%d",a);
	printf("\n\t\t *ptr=%d",*ptr);	
	
}