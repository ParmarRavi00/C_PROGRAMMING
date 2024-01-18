// Pointer :- A Variable that stores the memory address of another variable.

#include<stdio.h>

void main()
{
	
	int i=10;
	float f=3.14;
	char c='A';
	int *i_ptr=&i;
	float *f_ptr=&f;
	char *c_ptr=&c;
	
	printf("\n\n\t\t\xb2\xb2\xb2\xb2\xb2 POINTER DEMO \xb2\xb2\xb2\xb2\xb2");
	
	printf("\n\n\t\t value of i=%d",*i_ptr);
	printf("\n\n\t\t value of f=%f",*f_ptr);
	printf("\n\n\t\t value of c=%c",*c_ptr);
	
	printf("\n\n\t\t value of i=%p",*i_ptr);  // Hexa-Desimal ma Address aapse
	printf("\n\n\t\t value of f=%p",*f_ptr);
	printf("\n\n\t\t value of c=%p",*c_ptr);
	
	printf("\n\n\t\t value of i=%u",*i_ptr);  // Je Address ne unsigned int ma convert kari ne aapse
	printf("\n\n\t\t value of f=%u",*f_ptr);
	printf("\n\n\t\t value of c=%u",*c_ptr);
	
}