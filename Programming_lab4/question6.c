/* Program description: inputing and displaying the time of day in different time zones, for example, from Ireland and its equivalent in Brazil, Ukraine, Nigeria, and India. The time has to be in the 24 hour format, for example, 22:35 means 10:35 PM.
Author: Lívia Ferreira Guimarães Neves */

#include <stdio.h>

int main()
{
    int ireland_hours, ireland_minutes;
    printf("Please enter the time in Ireland, based on the 24 hour format, e.g. 22:35): ");
    scanf("%d:%d", &ireland_hours, &ireland_minutes);

    // different time zones in hours
    int brazil_timeZone = -3; // Brazil is 3 hours behind Ireland
    int ukraine_timeZone = +2; // Ukraine is 2 hours ahead of Ireland
    int nigeria_timeZone = +1; // Nigeria is 1 hour ahead of Ireland
    int india_timeZone = +4; // India is 4 hours ahead of Ireland

    // calculating and displaying the different time zones
    printf("\nThe time in Ireland is %02d:%02d.\n", ireland_hours, ireland_minutes);
    printf("The time in Brazil is %02d:%02d.\n", (ireland_hours + brazil_timeZone + 24) % 24, ireland_minutes); // added +24 since it is negative
    printf("The time in Ukraine is %02d:%02d.\n", (ireland_hours + ukraine_timeZone) % 24, ireland_minutes);
    printf("The time in Nigeria is %02d:%02d.\n", (ireland_hours + nigeria_timeZone) % 24, ireland_minutes);
    printf("The time in India is %02d:%02d.\n", (ireland_hours + india_timeZone) % 24, ireland_minutes);

    return 0;
}
