/* Program description: reading and calculating specific processes on a positive integer based on if it is even or odd, until it reaches 1, and counting the number of times. Sequence based:
1. if the number is even, halve it.
2. if the number is odd, multiply by 3 and add 1.
Author: Lívia Ferreira Guimarães Neves */

#include <stdio.h>

int main()
{
    int positive_integer, counter = 0;

    printf("Please enter a positive integer number: ");
    scanf("%d", &positive_integer);
    printf("Value entered is %d\n", positive_integer);

    while (positive_integer != 1)
    {
        if (positive_integer % 2 == 0)
        {
            positive_integer = positive_integer / 2;
            printf("Next value is %d\n", positive_integer);
            counter = counter + 1;
        }
        else
        {
            positive_integer = (positive_integer * 3) + 1;
            printf("Next value is %d\n", positive_integer);
            counter = counter + 1;
        }
    }

    printf("Final value is %d, and number of steps is %d.\n", positive_integer, counter);

    return 0;
}
