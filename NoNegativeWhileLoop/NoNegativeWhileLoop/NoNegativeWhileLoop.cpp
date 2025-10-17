#include<stdio.h>
#include<stdlib.h>
int main()
{
	int Array[10];
	int count = 0;
	int input;
	while (count < 10)
	{
		printf("Please input a positive number:\n");
		scanf_s("%d", &input);
			
			if (input < 0)
				exit(0);
			else
			{
				Array[count] = input;
				printf("You entered: %d\n", Array[count]);
				count++;
			}
	}

}
