#include<stdio.h>
#include<stdlib.h>
#include<iostream>


int main()
{
	int year;
	int arraynum;
	char name[20];
	int count=0;
	int average=0;
	int Pass=0;
	int Fail=0;
	
	printf("please enter the students name:\n");
	scanf_s("%s", name, 20);
	printf("please enter the students year:\n");
	scanf_s("%d", &year);
	if (year>0)
	{
		printf("How many subjects has this student taken:\n");
		scanf_s("%d", &arraynum);
		int *Array = new int[arraynum];
		int *Array2 = new int[arraynum];
		while(count<arraynum)
		{
			printf("Please enter the students mark:\n");
			scanf_s("%d", &Array[count]);
			if(Array[count]<50)
			{
				Array2[count] = 0;
				Fail++;
			}
			else
			{
				Array2[count] = 1;
				Pass++;
			}
			count++;
		}
		printf("This is the data stored\n");
		printf("Year:%d\nName:%s\n",year,name);
		for (int i = 0; i < count; i++)
		{
			printf("Mark %d: %d\n",i + 1, Array[i]);
			if (Array2[i] == 0)
			{
				printf("Fail\n");
				
			}
			else 
			{
				printf("Pass\n");
				
			}
			
			average = average + Array[i];
		}
		int PassPer = (Pass / arraynum) * 100;
		int FailPer = (Fail / arraynum) * 100;
		average = average / count;
		printf("The average for this year was :%d\n", average);
		printf("%s has a pass rate of %d and a fail rate of %d",name,PassPer,FailPer);
	}
	else
	{
		exit(0);
	}
	exit(0);
}