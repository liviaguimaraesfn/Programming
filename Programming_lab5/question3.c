/* Program description: displaying all numbers between 1-20 that are evenly divisible by a number between 1-5 entered by the user, using a loop.
Author: Lívia Ferreira Guimarães Neves */

#include <stdio.h>

int main()
{
    int num;

    printf("Enter a number between 1 and 5: ");
    scanf("%d", &num);

    if (num < 1 || num > 5)
    {
        printf("Invalid input. Please enter a number between 1 and 5.\n");
        return 1;
    }

    printf("Numbers between 1 and 20 that are evenly divisible by %d:\n", num);
    for (int i = 1; i <= 20; i++)
    {
        if (i % num == 0)
        {
            printf("%d\n", i);
        }
    }

    return 0;
}
