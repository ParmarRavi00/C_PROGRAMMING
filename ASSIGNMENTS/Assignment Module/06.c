// 6)   Find the Character Is Vowel or Not

#include<stdio.h>

void main()
{
	printf("\n \t\xb2\xb2\xb2\xb2\xb2\xb2 Check Character is Vowel or Not. \xb2\xb2\xb2\xb2\xb2\xb2");
	
	char text;
	
	printf("\n \n \t Plese Enter Character : ");
	
	scanf("%c",&text);
	
	switch(text)
	{
		case 'A' : 
		case 'a' :
		case 'E' :
		case 'e' :
		case 'I' :
		case 'i' :
		case 'O' :
		case 'o' : printf("\n \t This Character is Vowel.");
		
		break;
		
		default : printf("\n \t This Character is Not-Vowel.");
	}
}