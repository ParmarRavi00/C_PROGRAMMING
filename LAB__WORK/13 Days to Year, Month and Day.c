//  Convert Days to Year, Months and Day

#include<stdio.h>

void main()
{
	printf("\n \t \t\xb2\xb2\xb2\xb2\xb2\xb2 Convert Days to Year, Months and Day \xb2\xb2\xb2\xb2\xb2\xb2 \n");
	
	int days, year, month, day;
	
	printf("\n \n \t \t Please Enter Days :- ");
	scanf("%d",&days);
	
	year = (days/365);
	month = (days%365)/30;
	day = (days%365)%30;
	
	printf("\n \t \t %d year %d Month %d Day", year, month, day);	
}