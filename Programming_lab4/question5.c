/* Program description: reading and displaying a number from 1 to 7 as a weekday, for example, 1 will represent Sunday.
If the user types a number outside the range 1 to 7, display an error message.
Author: Lívia Ferreira Guimarães Neves */

#include <stdio.h>

int main()
{
    int week_day;

    printf("Please enter a number from 1 to 7: ");
    scanf("%d", &week_day);

    switch (week_day)
    {
        case 1:
            printf("The day of the week is Sunday.\n");
            break;
        case 2:
            printf("The day of the week is Monday.\n");
            break;
        case 3:
            printf("The day of the week is Tuesday.\n");
            break;
        case 4:
            printf("The day of the week is Wednesday.\n");
            break;
        case 5:
            printf("The day of the week is Thursday.\n");
            break;
        case 6:
            printf("The day of the week is Friday.\n");
            break;
        case 7:
            printf("The day of the week is Saturday.\n");
            break;
        default:
            printf("Error! Please enter a number between 1 and 7.\n");
    }
    return 0;
}
