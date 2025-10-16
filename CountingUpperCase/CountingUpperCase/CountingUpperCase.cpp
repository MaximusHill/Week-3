#include <stdio.h>
#include<stdlib.h>
#include <iostream>

int main()
{
	char string1[20];
	int upper = 0;
	printf("Please type your string and i will tell you how many uppercase letters there are (Maximum of 20 characters):\n");
	scanf_s("%s", string1, 20);
	for (int i = 0; i <strlen(string1); i++)
	{
		if (string1[i] >= 65 and string1[i] <= 90)
			upper++;
		else
		{

		}
	}
	printf("You have %d capital letters in your string.",upper);
}
