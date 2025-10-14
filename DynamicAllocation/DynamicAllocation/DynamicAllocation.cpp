#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char** argv)
{
    /* Declare a pointer to an integer (for the
      start of the array */

    int* numbers;
    int size;

    printf("How many numbers to be stored?\n");

    scanf_s("%d", &size);
   
        /* Allocate memory (C style)*/
        numbers = (int*)malloc(size * sizeof(int)); 

 
        //numbers = new int[size];

    for (int i = 0; i < size; i++)
    {
        printf("Please enter a number: ");
        scanf_s("%d", &numbers[i]);
    }

    printf("You entered: ");

    for (int i = 0; i < size; i++)
    {
        printf("%d,", numbers[i]);
    }

    printf("\n");

    /* Deallocate memory (C style) */
    free(numbers); 

    /* Allocate memory (C++ style) */
    //delete[] numbers;

    exit(0);
}