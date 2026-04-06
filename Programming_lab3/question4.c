/* Program description: calculation of sum, average, percentage, and division with remainder of float numbers, displaying results to specific decimal places.
Author: Lívia Ferreira Guimarães Neves */

#include <stdio.h>

int main()
{
    float number_1, number_2, number_3, sum, average, percentage = 0; // initialising float numbers
    int number_4, number_5, division, remainder; // initialising integer numbers

    // variables being declared
    printf("Enter first floating-point number: ");
    scanf("%f", &number_1); // assigning inputs to the variables
    printf("Enter second floating-point number: ");
    scanf("%f", &number_2);
    printf("Enter third floating-point number: ");
    scanf("%f", &number_3);
    printf("Enter first integer number: ");
    scanf("%d", &number_4);
    printf("Enter second integer number: ");
    scanf("%d", &number_5);

    sum = number_1 + number_2 + number_3; // sum calculation
    average = sum / 3; // average calculation
    percentage = (number_1 / number_2) * 100; // percentage calculation
    division = number_4 / number_5; // division calculation
    remainder = number_4 % number_5; // remainder calculation

    // print of the results:
    printf("The sum of the three floating-point numbers is %.3f.", sum);
    printf("\nThe average of the three floating-point numbers is %.3f.", average);
    printf("\nThe first number is %.1f%% of the second number.", percentage);
    printf("\nThe division of the first number by the second number is %d, and the remainder is %d.", division, remainder);

    return 0;
}
