// Find Maximum Between three number

#include<stdio.h>

void main(){
	
	int a,b,c;
	
	printf("Enter First Value :-");
	scanf("%d",&a);
	
	printf("Enter Second Value :-");
	scanf("%d",&b);
	
	printf("Enter Thard Value :-");
	scanf("%d",&c);
	
	if(a>b){
		if(a>c){
			printf("Max Value is :-%d",a);
		}
		else{
			printf("Max Value is :-%d",c);
		};
	}
	else{
		if(b>c){
			printf("Max Value is :-%d",b);
		}
		else{
			printf("Max Value is :-%d",c);
		}
	}
}
