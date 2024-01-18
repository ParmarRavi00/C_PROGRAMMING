//  Number Pattern - 3

#include<stdio.h>

void main()
{
	int i, j;
	
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d",i);
		}
		
		printf("\n");
	}
}

/* 
Debug :-

i=1 1<=5
j=1 1<=1  p(1)

i=2 2<=5
j=1 1<=2  p(2)  j=2 2<=2  p(2)

i=3 3<=5
j=1 1<=3  p(3)  j=2 2<=3  p(3)  j=3  3<=3  p(3)

i=4 4<=5
j=1 1<=3  p(4)  j=2 2<=3  p(4)  j=3  3<=3  p(4)  j=4 4<=4  p(4)

i=5 5<=5
j=1 1<=3  p(5)  j=2 2<=3  p(5)  j=3  3<=3  p(5)  j=4 4<=5  p(5)  j=5 5<=5  p(5)

 */