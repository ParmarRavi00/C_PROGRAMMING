// Swap Value Using Theard Variable in C++

#include<iostream>
using namespace std;

int main()
{
	int a, b, c;
	
	cout<<"Please Enter First Value :- ";
	cin>>a;
	
	cout<<"Please Enter Second Value :- ";
	cin>>b;
	
	c = a;
	a = b;
	b = c;
	
	cout<<"\n\nValue of A and B After Swapping :-\n\nA = " << a << "\nB = " << b; 
	
	return 0;
}