//  Character Pattern - 2

#include<stdio.h>

void main()
{
	int i, j;
	
	// Je Same hoy te Print thay (Row ma same hoy to row print thay ane column same hoy to column print thay)
	
	for(i=5;i>=1;i--)
	{
		for(j=5;j>=1;j--)
		{
			printf("%c",j+64);
		}
		
		printf("\n");
	}
}