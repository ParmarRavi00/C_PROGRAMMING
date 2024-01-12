#include <stdio.h>

/*
Recursive Function : A function which calls itself 
					 is called recursive function.

*/

/* Recursive Function ma Ek BASE CASE hoy 6e je ek Condition jem work kare 6e jo BASE CASE na
 hoy to Function Infinite Loop ma jatu raheshe mate BASE CASE Recursive Function ne STOP karva mate MOST Jaruri 6e */
 
void f1()
{
	
	printf("\nF1 Called");
}

void f2()
{
	f1();
	printf("\nF2 Called");
	f2();
}



void main()
{
	f1();
	f2();
}
