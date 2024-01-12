// Sum of n Number Using Function Recursion

#include<stdio.h>

int sum(int n);

int main()
{
	printf("\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2 Sum of n Number Using Function Recursion \xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2");
	
	int n;
	
	printf("\n\nPlease Enter Number of Sum :- ");
	scanf("%d", &n);
	
	printf("\n\nSum of n Number is :- %d", sum(n));
	
	return 0;
}

// Recursive Function

int sum(int n)
{
	
	if(n == 1)
	{
		return 1;
	}
	
	int sumNm1 = sum(n-1);
	int sumN = sumNm1 + n;
	
	return sumN;
}

// Debug

/* 

n=5   sum(5-1)   sum(4) ==>  Recall  | -->   sum(4) + 5 = 15
n=4   sum(4-1)   sum(3) ==>  Recall  | -->   sum(3) + 4 = 10
n=3   sum(3-1)   sum(2) ==>  Recall  | -->   sum(2) + 3 = 6
n=2   sum(2-1)   sum(1) ==>  Recall  | -->   sum(1) + 2 = 3
n=1   ==> 1 Number no Sum 1 thay mate  (Je pahele thi khaber hoy chhe mate n==1 thay tyare return 1 karyu)
 (BASE CASE) ==> Function Recursion Stop Thase

 */
 
 
// -----------------------------
 
int add(int number);

int main()
{
	int number;
	
	printf("Please Enter Number :-");
	scanf("%d",&number);
	
	printf("%d",add(number));
}
 
 int add(int n)
{
	if(n!=0)
	{
		return n + add(n-1);
	}
	else
	{
		return 0;
	}
}