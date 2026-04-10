/* Program description: basic standard keyboard inputs and outputs fundamentals
Author: Lívia Ferreira Guimarães Neves */

#include <stdio.h>

int main()
{
    // asking user to enter three whole numbers and display them on separate lines:
    int num1, num2, num3;
    printf("Please enter three whole numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3); // assigning input to the variable
    printf("First number: %d\n", num1);
    printf("Second number: %d\n", num2);
    printf("Third number: %d\n", num3);

    // asking user to enter two characters and display them on the screen:
    char char1, char2;
    printf("Please enter two characters: ");
    scanf(" %c %c", &char1, &char2); // space before %c so the program can ignore any newline character input by the user
    // if we use %1s instead of %c, program will skip whitespace and newlines, fixing the enter and space problem
    printf("First character: %c\n", char1);
    printf("Second character: %c\n", char2); // if we use %d instead of %c, program will display the ASCII value of the character

    // asking user to enter three floating-point numbers i.e. with decimal part, and display them with different decimal places
    float float1, float2, float3;
    printf("Please enter three floating-point numbers: ");
    scanf("%f %f %f", &float1, &float2, &float3);
    printf("First number: %.4f\n", float1); // corrected to four decimal places
    printf("Second number: %.3f\n", float2); // corrected to three decimal places
    printf("Third number: %.0f\n", float3); // corrected to zero or no decimal places

    return 0;
}
