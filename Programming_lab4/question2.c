/* Program description: calculating if specific integers are even or odd, if the first one is divisible by the second one, finding the smallest using conditional operator "?", and displaying a message on the screen.
Author: Lívia Ferreira Guimarães Neves */

#include <stdio.h>

int main()
{
    int num1, num2, smallest;

    printf("Enter an integer between 1 and 100: ");
    scanf("%d", &num1);

    if (num1 < 1 || num1 > 100) // || means "or"
    {
        printf("Invalid input. Please enter an integer between 1 and 100.\n");
        return 1; // exiting program
    }

    if (num1 % 2 == 0)
    {
        printf("Number %d is even.\n", num1);
    }
    else
    {
        printf("Number %d is odd.\n", num1);
    }

    // calculating if num1 is divisible by num2
    printf("Enter another integer between 1 and 100: ");
    scanf("%d", &num2);

    if (num2 < 1 || num2 > 100)
    {
        printf("Invalid input. Please enter an integer between 1 and 100.\n");
        return 1;
    }

    if (num1 % num2 == 0)
    {
        printf("Number %d is divisible by %d.\n", num1, num2);
    }
    else
    {
        printf("Number %d is not divisible by %d.\n", num1, num2);
    }

    // finding the smallest using conditional operator ?, "e.g. variable = (condition) ? value_if_true : value_if_false;"
    smallest = (num1 < num2) ? num1 : num2; // means "if num1 is less than num2, smallest is num1, otherwise smallest is num2"
    printf("The smallest number is: %d\n", smallest);

    return 0;
}
