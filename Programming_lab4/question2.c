/* Program description: calculating if an integer, between 1 and 100, is even or odd, and displaying a message on the screen.
Author: Lívia Ferreira Guimarães Neves */

#include <stdio.h>

int main()
{
    int number;

    printf("Enter an integer between 1 and 100: ");
    scanf("%d", &number);

    if (number < 1 || number > 100) // || means "or"
    {
        printf("Invalid input. Please enter an integer between 1 and 100.\n");
        return 1; // exiting program
    }

    if (number % 2 == 0)
    {
        printf("Number %d is even.\n", number);
    }
    else
    {
        printf("Number %d is odd.\n", number);
    }

    return 0;
}
