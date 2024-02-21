// Pointer Arithmetic

#include<stdio.h>

void main()
{
	int age = 22;
	int *ptr = &age;
	
	printf("ptr = %u\n", ptr);  // Pointer ni under ++ and -- Operator te Pointer na location ni Size ma data type (int, float = 4 byte, char = 1 byte, double = 8 byte) pramane Vadharo ke Ghatado thay chhe.
	ptr++;
	
	printf("ptr = %u\n", ptr);
	ptr--;
	
	printf("ptr = %u\n\n", ptr);
	
//	--------------------

	float price = 20.0;
	float *fptr = &price;
	
	printf("fptr = %u\n",fptr);
	fptr++;
	
	printf("fptr = %u\n", fptr);
	fptr--;
	
	printf("fptr = %u\n\n", fptr);
	
	
	//	--------------------

	char star = '*';
	char *cptr = &star;
	
	printf("cptr = %u\n", cptr);
	cptr++;
	
	printf("cptr = %u\n", cptr);
	cptr--;
	
	printf("cptr = %u\n", cptr);
	
}