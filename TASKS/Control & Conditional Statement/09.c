// 9)  Check Uppercase or Lowercase or Digit or Special Character

#include <stdio.h>

int main()
{
	printf("\n\t\t\xb2\xb2\xb2\xb2\xb2\xb2 Check Uppercase or Lowercase or Digit or Special Character \xb2\xb2\xb2\xb2\xb2\xb2");
    
	char text;
	
	printf("\n\n\t\t Please Enter Anything :- ");
	scanf("%c", &text);
	  
	if(text == 33 || text == 35 || text == 36 || text == 38 || text == 42 || text == 64)
	{
        printf("\n\t\t This is a Special Character");
    }
	else if (text >= 65 && text <= 90)
	{
        printf("\n\t\t This is a Capital Character");
    }
	else if(text >= 97 && text <= 122)
	{
        printf("\n\t\t This is a Small Character");
    }
	else if(text >= 48 && text <= 57)
	{
        printf("\n\t\t This is a Number");
    }
	else
	{
        printf("\n\t\t Please Enter Valid Input...!");
    }

    return 0;
}