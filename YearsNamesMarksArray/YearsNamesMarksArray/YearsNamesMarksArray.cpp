#include<stdio.h>
#include<stdlib.h>


int main()
{
	int year;
	int arraynum;
	char name[20];
	int count=0;
	printf("please enter the students year:\n");
	scanf_s("%d", &year);
	if (year>0)
	{
		printf("please enter the students name:\n");
		scanf_s("%s", name,20);
		printf("How many subjects has this student taken:\n");
		scanf_s("%d", &arraynum);
		int *Array = new int[arraynum];
		while(count<arraynum)
		{
			printf("Please enter the students mark:\n");
			scanf_s("%d", &Array[count]);
			count++;
		}
		printf("This is the data stored\n");
		printf("Year:%d\nName:%s\n",year,name);
		for (int i = 0; i < count; i++)
		{
			printf("Mark %d: %d\n",i + 1, Array[i]);
		}
	}
	else
	{
		exit(0);
	}
	exit(0);
}