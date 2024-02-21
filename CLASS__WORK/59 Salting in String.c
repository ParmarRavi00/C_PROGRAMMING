#include<stdio.h>
#include<string.h>

void salting(char arr[]);

void main()
{
	char pass[100];
	
	printf("Enter Your Password :- ");
	scanf("%s", pass);
	
	salting(pass);
}

void salting(char arr[])
{
	char salt[] = "123";
	
	char newPass[200];
	
	strcpy(newPass, arr);
	strcat(newPass, salt);
	
	printf("Your New Password is :- %s", newPass);
}