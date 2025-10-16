#include<stdlib.h>
#include <stdio.h>
#include <iostream>

int main()
{
	char string[20];
	printf("please input your string max characters 20:\n");
	scanf_s("%s", string,20);
	for (int i = 0; i < strlen(string); i++)
	{
		if (string[i]>='A'&& string[i]<='Z')
		{
			string[i] = string[i] +32;
		}
	}
	printf("%s",string);
}

