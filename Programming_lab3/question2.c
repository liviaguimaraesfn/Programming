/* Program description: inputing, reading, and displaying four numbers in reverse order and with different decimal places.
Author: Lívia Ferreira Guimarães Neves */

#include <stdio.h>

int main()
{
    // asking user to enter four numbers and displaying them in reverse order
    int num1, num2, num3, num4;
    printf("Please enter four numbers: ");
    scanf("%d %d %d %d", &num1, &num2, &num3, &num4);
    printf("Numbers in reverse order: %d %d %d %d\n\n", num4, num3, num2, num1);

    // displaying a message to display the following floating-point numbers: 5.0, -4.5, 11.25, -0.001
    printf("v1 = %.1f\n", 5.0); // displaying 5.0 with one decimal place
    printf("v2 = %.1f\n", -4.5); // displaying -4.5 with one decimal place
    printf("v3 = %.2f\n", 11.25); // displaying 11.25 with two decimal places
    printf("v4 = %.3f\n", -0.001); // displaying -0.001 with three decimal places

    return 0;
}
