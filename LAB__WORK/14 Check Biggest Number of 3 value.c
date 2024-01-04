//  Check Biggest Number of 3 Values

#include<stdio.h>

void main()
{
	printf("\n \t \t\xb2\xb2\xb2\xb2\xb2\xb2 Check Biggest Number of 3 Values \xb2\xb2\xb2\xb2\xb2\xb2 \n");
	
	int n1, n2, n3;
	
	printf("\n \t \t Please Enter First Number :- ");
	scanf("%d",&n1);
	
	printf("\n \t \t Please Enter Second Number :- ");
	scanf("%d",&n2);
	
	printf("\n \t \t Please Enter Thared Number :- ");
	scanf("%d",&n3);
	
//	if(n1 > n2)
//	{
//		if(n1 > n3)
//		{
//			printf("\n \t \t %d is Big.",n1);
//		}
//		else
//		{
//			printf("\n \t \t %d is Big.",n3);
//		}
//	}
//	else
//	{
//		if(n2 > n3)
//		{
//			printf("\n \t \t %d is Big.",n2);
//		}
//		else
//		{
//			printf("\n \t \t %d is Big.",n3);
//		}

		
		if(n1 > n2 && n1 > n3)
		{
			printf("\n \t \t %d is Big.",n1);
		}
		else if(n2 > n1 && n2 > n3)
		{
			printf("\n \t \t %d is Big.",n2);
		}
		else
		{
			printf("\n \t \t %d is Big.",n3);
		}
}
