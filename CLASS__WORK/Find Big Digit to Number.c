// Find Big Digit to Number

#include<stdio.h>

void main()
{
	
	int num, large=0, mod;
	
	printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 Find Big Digit to Number \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
	
	printf("\n\n\t Please Enter Number :- ");
	scanf("%d", &num);
	
	while(num!=0)
	{
		mod = num%10;
		
		if(mod>large)
		{
			large = mod;
		}
		
		num = num/10;
	}
	
	printf("\n\n\t Big Digit in this Number is :- %d", large);
}