// Reverse Number

#include<stdio.h>

void main()
{
	printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 Reverse Number \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
	
	int num, mod, rev=0;
	
	printf("\n\n\t Please Enter Number :- ");
	scanf("%d", &num);
	
	while(num!=0)
	{
		mod = num%10;
		
		rev = rev * 10 + mod;
		
		num = num/10;
	}
	
	printf("\n\t Reverse of this Number is :- %d", rev);
}