// 

#include<stdio.h>
#include<string.h>

void main()
{
	char name[] = "raviraj";
//	char name[] = {'r','a','v','i','r','a','j'};
//	printf("%s",name);
	
	char name1[100];
	char name2[100];
	printf("Enter Another Name:-");
	scanf("%s", &name1);
	
	printf("%s is Another Name", name1);
	
	
	// SizeOf Function
	
	//printf("%d size of 1st String", sizeof(name));
	//printf("%d size of 2nd String", sizeof(name1));
	
	
	// String Concatinat Function
	
	strcat(name, name1);
	//printf("Marged string is %s", name);
	
	
	// String Comparision Function
	
	//printf("Comparision between String-1 and String-2 is %d", strcmp(name,name1));
	
	
//	1st String > 2nd String Operation : Positive
//  1st String < 2nd String Operation : Negitive
//  1st String == 2nd String Operation : 0


	// String Copy Function
	
	strcpy(name,name1);
	printf("%s is name2", name2);
	
	
	// String Reverse Function
	
	printf("%s", strrev(name));
}