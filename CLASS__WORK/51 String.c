/* String Array / Character Array ma Scanf() Multiple World Accept kari shaktu nathi. Etale 
	ke Space pa6i na Character Accept thase nahi. Jeni mate Aapane Nichena Function no use Kariye 6iye.
*/

#include<stdio.h>

void main()
{
	char name[50];
	
	printf("Please Enter Your Name :- ");
//	scanf("%s", name);
//	printf("Your Good Name is :- %s", name);

//	gets(name);  // gets() Function je Depricat tahy Gayel Chhe Jeni jagya ye fgets() Function no use Kariye 6iye.
//	puts(name);

	fgets(name, 50, stdin);  // Jema 3- Arrguments Jaruri chhe.
	puts(name);
	
	
	// String Using Pointers
	
	char str[] = "Hello World";  // Normal String (cannot be Reinitialized)
	
	puts(str);
	
	//str = "Hello"; // Not Possible
	//puts(str);
	
	
	char *pstr = "Hello Men";  // String Using Pointers (can be Reintialized)
	
	puts(pstr);
	
	pstr = "Hello"; // This is Possible  
	
	puts(pstr);
	
	
	// Take a string input from the user using %c. (je gets() / fgets() Function jem work karse)
	
	printf("\n\n");
	
	char fName[100];
	
	char ch;
	int i=0;
	
	while(ch != '\n') // '\n' Mins Ke jya sudhi Enter Press nay(New Line nay aapiye tya sudhi) kariye tya sudhi loop chalu rahese.
	{
		scanf("%c", &ch);
		
		fName[i] = ch;
		
		i++;
	}
	fName[i] = '\0'; // Je aapne manually kahevu padse karan ke %c je last ma automatic add karse nay.
	
	puts(fName);
	
}