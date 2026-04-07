/* Program description: calculation of human heart rate in a lifetime, and temperature conversions between Fahrenheit and Celsius.
Author: Lívia Ferreira Guimarães Neves */

#include <stdio.h>

int main()
{
    // assuming human heart rate is 75 beats/minute
    int heart_rate = 75;
    int user_age;
    long life_beats_number; // using long to increase maximum value possible to be stored

    printf("What is your age? ");
    scanf("%d", &user_age);

    // calculating the number of beats so far in their life
    life_beats_number = (long)user_age * 365 * 24 * 60 * heart_rate; // using long to avoid multiplication overflow
    printf("\nThe number of heart beats so far in your life is: %ld", life_beats_number);

    // temperature conversions between Fahrenheit and Celsius
    float fahrenheit_degrees, celsius_degrees, fahrenheit_conversion, celsius_conversion;
    printf("\nEnter a temperature in degrees Fahrenheit: ");
    scanf("%f", &fahrenheit_degrees);
    printf("\nEnter a temperature in degrees Celsius: ");
    scanf("%f", &celsius_degrees);

    fahrenheit_conversion = (celsius_degrees * 9.0 / 5.0) + 32.0;
    celsius_conversion = (fahrenheit_degrees - 32.0) * 5.0 / 9.0;

    printf("\nThe temperature in degrees Fahrenheit is: %.2f\n", fahrenheit_conversion);
    printf("\nThe temperature in degrees Celsius is: %.2f\n", celsius_conversion);

    return 0;
}