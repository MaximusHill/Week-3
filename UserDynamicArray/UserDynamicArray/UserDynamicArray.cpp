#include<stdio.h>
#include<stdlib.h>


int main()
{
    int arraynum;
    printf("Please input how many numbers you want to store:\n");
    scanf_s("%d", &arraynum);
    int *Array = new int[arraynum];
    for (int i = 0; i < arraynum; i++)
    {
        printf("please enter number %d:\n", i+1);
        scanf_s("%d", &Array[i]);
    }
    for (int i = 0; i < arraynum; i++)
    {
        printf("Your number was: %d\n", Array[i]);
       
    }
    delete[] Array;
    exit(0);
}
