/* Program description: displaying numbers 1 to 10 in descending order, using a while loop, on the same line, and each number separated by a comma, except the last one.
Author: Lívia Ferreira Guimarães Neves */

#include <stdio.h>

int main()
{
    int number = 10;

    while (number > 0) // while loop
    {
        printf("%d", number);
        if (number > 1)
        {
            printf(", ");
        }
        number = number - 1; // counter to decrease the number
    }
    
    return 0;
}