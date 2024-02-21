// Structure
// take id and percentage of 2 student

#include<stdio.h>
#include<string.h>

struct student
{
	int id;
	float pr;
	char name[100];
};

int main()
{
	struct student s1, s2; // s1 will store details of 1st student
	printf("Enter id of 1st student:- ");
	scanf("%d", &s1.id);
	
	printf("Enter id of 2st student:- ");
	scanf("%d", &s2.id);
	
	s1.pr = 90.56;
	s2.pr = 50.40;
	
	strcpy(s1.name, "Ravirajsinh"); // String ne Normal rete Reinitialize na kari shakay
	strcpy(s2.name, "Harshit");
	
	printf("\n\n%.2f is pr and %d id of 1st student (%s)", s1.pr, s1.id, s1.name);
	printf("\n%.2f is pr and %d id of 1st student (%s)", s2.pr, s2.id, s2.name);
}