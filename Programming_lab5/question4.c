/* Program description: counting numbers using if statements and loops, and printing values on specific conditions.
Author: Lívia Ferreira Guimarães Neves */

#include <stdio.h>

int main()
{
    int count;

    // counting and printing on separate lines numbers from 1 to 10 and printing specific messages when count is 3 and 6
    for (count = 1; count <= 10; count++)
    {
        printf("%d\n", count);

        if (count == 3)
        {
            printf("This number is three.\n");
        }
        else if (count == 6)
        {
            printf("This number is six.\n");
        }
    }

    // displaying all event numbers from 1 to 100, separated by commas, using a loop and the modulus operator
    printf("Even numbers from 1 to 100: ");

    for (count = 1; count <= 100; count++)
    {
        if (count % 2 == 0)
        {
            printf("%d", count);
            if (count < 100)
            {
                printf(", ");
            }
        }
    }

    return 0;
}
