#include<stdio.h>
#include<string.h>

void main()
{
	char name[] = "RAVIRAJ";
	char name1[] = "parmar";
	char name2[10];
//	char name[] = {'r','a','v','i','r','a','j'};
//	printf("%s",name);
	
	
	// SizeOf Function
	
	printf("size of 1st String :- %d\n", sizeof(name));
	printf("size of 2nd String :- %d\n\n", sizeof(name1));
	
	
	// String Length Function
	
	printf("String Length :- %d\n\n", strlen(name));
	
	
	// Uppercase Function
	
	printf("String Uppercase :- %s\n\n", strupr(name1));
	
	
	// Lowercase Function
	
	printf("String Lowercase :- %s\n\n", strlwr(name));
	
	
	// String Copy Function
	
	strcpy(name2,name);
	printf("Copy String is name2 :- %s\n\n", name2);
	
	
	// String Comparision Function
	
	printf("Comparision between String-1 and String-2 is :- %d\n\n", strcmp(name,name1));
	
	
//	1st String > 2nd String Operation : Positive
//  1st String < 2nd String Operation : Negitive
//  1st String == 2nd String Operation : 0

	
	// String Concatinat Function
	
	strcat(name, name1);
	printf("Marged string is :- %s\n\n", name);

	
	// String Reverse Function
	
	printf("String Reverse is :- %s\n\n", strrev(name));
}