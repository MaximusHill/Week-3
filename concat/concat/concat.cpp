#include<stdlib.h>
#include<stdio.h>
#include<iostream>

int main()
{
	const int STR1_MAX = 20;
	const int STR2_MAX = 10;
	char string1[STR1_MAX];
	char string2[STR2_MAX];
	printf("Please enter the first string max 10 char:\n");
	scanf_s("%s", string1, STR1_MAX);
	printf("Please enter the second string max 10 char:\n");
	scanf_s("%s", string2, STR2_MAX);
	printf("Your first string was: %s\n", string1);
	printf("Your second string was: %s\n", string2);
	strcat_s(string1, string2);
	printf("The final string is: %s\n", string1);
	int dih = strlen(string1);
	printf("Your final count is :%d",dih);
	exit(0);
}
