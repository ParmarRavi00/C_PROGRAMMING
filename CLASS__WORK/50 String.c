#include<stdio.h>

/*
	String : Collection of characters.
			it terminate's with \0.				  
*/

void stringPrint(char arr[]);


int main()
{
	
	char firstName[] = "Ravirajsinh";
	char lastName[] = "Parmar";
	
	stringPrint(firstName);
	stringPrint(lastName);
	
	char name[50];
	
	printf("\n\nPlease Enter Your Name :- ");
	scanf("%s", name);
	
	printf("Your Good Name is :- %s", name);
	
	return 0;
}

void stringPrint(char arr[])
{
	for(int i=0; arr[i] != '\0'; i++)
	{
		printf("%c", arr[i]);
	}
	printf("\n");
}


/* String Format Specifier

==> %s 

-- Jeni Madad thi string Array / Character Array ne Simpally Print / Scan Karavi Sakay chhe. 

*/
