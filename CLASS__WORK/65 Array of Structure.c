#include<stdio.h>

struct Address{
	int houseNo;
	int Block;
	char city[100];
	char state[100];
};

void PrintAdd(struct Address adds);

void main()
{
	struct Address adds[5];  // Array of Structure
	
	// Inputs
	
	printf("Enter Address of Member-1 :- ");
	scanf("%d", &adds[0].houseNo);
	scanf("%d", &adds[0].Block);
	scanf("%s", adds[0].city);
	scanf("%s", adds[0].state);
	
	printf("Enter Address of Member-2 :- ");
	scanf("%d", &adds[1].houseNo);
	scanf("%d", &adds[1].Block);
	scanf("%s", adds[1].city);
	scanf("%s", adds[1].state);
	
	printf("Enter Address of Member-3 :- ");
	scanf("%d", &adds[2].houseNo);
	scanf("%d", &adds[2].Block);
	scanf("%s", adds[2].city);
	scanf("%s", adds[2].state);
	
	printf("Enter Address of Member-4 :- ");
	scanf("%d", &adds[3].houseNo);
	scanf("%d", &adds[3].Block);
	scanf("%s", adds[3].city);
	scanf("%s", adds[3].state);
	
	printf("Enter Address of Member-5 :- ");
	scanf("%d", &adds[4].houseNo);
	scanf("%d", &adds[4].Block);
	scanf("%s", adds[4].city);
	scanf("%s", adds[4].state);
	
	PrintAdd(adds[0]);
	PrintAdd(adds[1]);
	PrintAdd(adds[2]);
	PrintAdd(adds[3]);
	PrintAdd(adds[4]);
}

void PrintAdd(struct Address adds){
	
	printf("\n\nAddress is :- %d, %d, %s, %s", adds.houseNo, adds.Block, adds.city, adds.state);
}