#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv)
{
    /* Declare array size*/
    const int MAX_ARRAY_SIZE = 5;

    /* An array of integers */
    int myNumbers[MAX_ARRAY_SIZE];

    /* Declare a single integer
       and read something in */
    int aNumber;
    scanf_s("%d", &aNumber);

    /* Assign an element of the
       array using its index */
    myNumbers[3] = aNumber;

    /*read directly into array */
    scanf_s("%d", &myNumbers[1]);

    /*getting things out of the array */
    aNumber = myNumbers[1];

    printf("Number at index 1 = %d\n", aNumber);

    /*print out directly */
    printf("Number at index 0 = %d \n", myNumbers[0]);
}