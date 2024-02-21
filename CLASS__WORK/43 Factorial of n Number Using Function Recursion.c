// Factorial of n Number Using Function Recursion

#include<stdio.h>

int fact(int n);

int main()
{
	printf("\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2 Factorial of n Number Using Function Recursion \xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2");

	int n;
		
	printf("\n\nPlease Enter Number of Sum :- ");
	scanf("%d", &n);
	
	printf("\n\nFactorial of n Number is :- %d", fact(n));
	
	return 0;
}

int fact(int n)
{
	if(n == 1)
	{
		return 1;
	}
	
	int factNm1 = fact(n-1);
	
	int factN = factNm1 * n;
	
	return factN;
}

// Debug

/* 

n=5   sum(5-1)   sum(4) ==>  Recall  | -->   sum(4) * 5 = 120
n=4   sum(4-1)   sum(3) ==>  Recall  | -->   sum(3) * 4 = 24
n=3   sum(3-1)   sum(2) ==>  Recall  | -->   sum(2) * 3 = 6
n=2   sum(2-1)   sum(1) ==>  Recall  | -->   sum(1) * 2 = 2
n=1   ==> 1 Number no Factotial 1 thay mate  (Je pahele thi khaber hoy chhe mate n==1 thay tyare return 1 karyu)
 (BASE CASE) ==> Function Recursion Stop Thase

 */