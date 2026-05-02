/* Program description: counting from 1-10, printing values on a separate line for each. It also prints a message when count is 3 and 6.    
Author: Lívia Ferreira Guimarães Neves */

#include <stdio.h>

int main()
{
    int count;

    for (count = 1; count <= 10; count++)
    {
        printf("%d\n", count);

        if (count == 3)
        {
            printf("This number is three.\n");
        }
        else if (count == 7)
        {
            printf("This number is six.\n");
        }
    }

    return 0;
}
