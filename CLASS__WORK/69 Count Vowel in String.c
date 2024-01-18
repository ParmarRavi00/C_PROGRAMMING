#include<stdio.h>

int countVowel(char arr[]);

void main()
{
	char str[100];
	
	printf("Enter Your Word :- ");
	scanf("%s", str);
	
	printf("Total Vowel in this World :- %d", countVowel(str));
}

int countVowel(char arr[])
{
	int count=0;
	
	for(int i=0; arr[i] != '\0'; i++)
	{
		if(arr[i] == 'a' || arr[i] == 'A' || arr[i] == 'e' || arr[i] == 'E' || arr[i] == 'i' || arr[i] == 'I' || arr[i] == 'o' || arr[i] == 'O' || arr[i] == 'u' || arr[i] == 'U')
		{
			count++;
		}
	}
	
	return count;
}