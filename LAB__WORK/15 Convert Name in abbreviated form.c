// Convert Name in abbreviated form (Raviraj Rajendrasinh Parmar --> R. R. Parmar)

#include<stdio.h>

void main()
{
	char f_name[20], l_name[20], sur_name[20];
	
	printf("Please Enter Your First Name :- ");
	scanf("%s", f_name);
	
	printf("Please Enter Your First Name :- ");
	scanf("%s", l_name);
	
	printf("Please Enter Your First Name :- ");
	scanf("%s", sur_name);
	
	printf("Your Short Name is :- %c. %c. %s", f_name[0], l_name[0], sur_name);
            
	
}