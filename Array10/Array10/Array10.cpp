
#include<stdlib.h>
#include<stdio.h>
#include <iostream>

int main()
{
	const int ARRAY_MAX = 10;
	int arr[ARRAY_MAX];

	for (int i = 0; i < 10; i++)
	{

		printf("Please enter number %d:\n",i+1);
		scanf_s("%d", &arr[i]);
	}
	for (int i = 0; i < 10; i++)
	{

		printf("%d\n", arr[i]);
		
	}
	for (int i = 9; i >=0; i--)
	{

		printf("%d\n", arr[i]);

	}
	exit(0);
}

