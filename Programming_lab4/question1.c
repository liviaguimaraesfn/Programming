/* Program description: inputting characters from standard-input and displaying a message whether the character is a vowel or not.
Important to check both upper and lower case characters, and ensure to use a switch statement.
Author: Lívia Ferreira Guimarães Neves */

#include <stdio.h>

int main()
{
    char c; // initialising character

    printf("Enter a character: ");
    scanf("%c", &c);

    switch (c) // switch case statement
    {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            printf("%c is a vowel.\n", c);
            break; // break used to prevent program from executing the next case statements
        default:
            printf("%c is not a vowel.\n", c);
            break;
    }

    return 0;
}
