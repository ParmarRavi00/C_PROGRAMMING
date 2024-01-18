// Structure

#include<stdio.h>

struct student
{
	int id;
	float pr;
	char name[100];
	int mark[3];
};

int main()
{
	struct student s[5];
	int i, j;
	
	
//	for(i=0; i<5; i++)
//	{
//		printf("Enter id for %d student:- ", i+1);
//		scanf("%d", &s[i].id);
//	}
//	
//	printf("Enter Name :-");
//	scanf("%s", &s[0].name)
//	printf("%s is name", s[0].name);
	
	
	
	for(i=0; i<2; i++)
	{
		for(j=0; j<3; j++)
		{
			printf("Enter %d st Subjects marks for %d student  :-", i+1, j+1);
			scanf("%d", &s[i].mark[j]);
//			print : student 1 : subject 1 = 99 subject 2 = 90 subject 3 = 85

			printf("");
		}
	}
}