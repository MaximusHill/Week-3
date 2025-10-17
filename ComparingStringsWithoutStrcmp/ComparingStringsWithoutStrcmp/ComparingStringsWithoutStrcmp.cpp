#include<stdlib.h>
#include<stdio.h>
#include <iostream>

int main()
{
	char string1[20];
	char string2[20];
	char FinalString[20];
	printf("please input your first string max characters 20:\n");
	scanf_s("%s", string1, 20);
	printf("please input your second string max characters 20:\n");
	scanf_s("%s", string2, 20);
	int length = strlen(string1);

	if (length != strlen(string2)) {
		printf("Strings are not the same length. Cannot compare.\n");
		exit(0);
	}
	for (int i = 0; i < length; i++)
	{
		if (string1[i] == string2[i])
		{
			FinalString[i] = string1[i];
		}
		else 
		{
			printf("The strings do not match");
			exit(0); 
		}
	}
	FinalString[length] = '\0';
	printf("The strings match");
	exit(0);

}

