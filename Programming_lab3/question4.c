/* Program description: calculation of sum, average, and percentage of float numbers, displaying results to specific decimal places.
Author: Lívia Ferreira Guimarães Neves */

#include <stdio.h>

int main()
{
    float number_1, number_2, number_3, sum, average, percentage = 0; // ensure all variables are float numbers

    // variables being declared
    number_1 = printf("Enter first floating-point number: ");
    scanf("%f", &number_1); // assigning inputs to the variables
    number_2 = printf("Enter second floating-point number: ");
    scanf("%f", &number_2);
    number_3 = printf("Enter third floating-point number: ");
    scanf("%f", &number_3);

    sum = number_1 + number_2 + number_3; // sum calculation
    average = sum / 3; // average 
    percentage = (number_1 / number_2) * 100; // percentage calculation

    // print of the results:
    printf("The sum of the three floating-point numbers is %.3f.", sum);
    printf("\nThe average of the three floating-point numbers is %.3f.", average);
    printf("\nThe first number is %.1f%% of the second number.", percentage);

    return 0;
}
