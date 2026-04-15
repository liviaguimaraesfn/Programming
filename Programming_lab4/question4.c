/* Program description: reading and displaying a single numeral as a word, for example, 5 will display "five".
Author: Lívia Ferreira Guimarães Neves */

#include <stdio.h>

int main()
{
    int numeral1;

    printf("Enter a numeral from 0 to 10: ");
    scanf("%d", &numeral1);

    switch (numeral1)
    {
        case 0:
            printf("zero\n");
            break;
        case 1:
            printf("one\n");
            break;
        case 2:
            printf("two\n");
            break;
        case 3:
            printf("three\n");
            break;
        case 4:
            printf("four\n");
            break;
        case 5:
            printf("five\n");
            break;
        case 6:
            printf("six\n");
            break;
        case 7:
            printf("seven\n");
            break;
        case 8:
            printf("eight\n");
            break;
        case 9:
            printf("nine\n");
            break;
        case 10:
            printf("ten\n");
            break;
        default:
            printf("Invalid input. Please enter a numeral between 0 and 10.\n");
    }
    return 0;
}
