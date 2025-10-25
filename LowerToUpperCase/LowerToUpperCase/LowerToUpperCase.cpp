#include<stdlib.h>
#include<stdio.h>
#include<string.h>

int main()
{
	const int MAX = 20;
	char string[MAX];	
	printf("please input your string max characters 20:\n");
	fgets(string, MAX, stdin);
	string[MAX - 1] = '\0';
	for (int i = 0; i < strlen(string); i++)
	{
		if (string[i]>='A'&& string[i]<='Z')
		{
			string[i] = string[i] +32;
		}
	}
	printf("%s",string);
}

