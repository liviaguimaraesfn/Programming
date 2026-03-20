/* Program description: to demonstrate variables being declared and correct previous errors.
Author: Lívia Ferreira Guimarães Neves */

#include <stdio.h> // stdio instead of studio, and no need of ;

int main()
{
    // program to illustrate errors in a C program, and // used for one line comment, not /* */

    int num1, num2; // declaring variables
    float num3;

    num1 = 400;
    num2 = 600; // num2 = 600 instead of 600 = num2;
    num3 = num2; // missing semicolon, and num3 instead of num 3

    printf("num1 contains %d\n", num1); // \n added for a new line, " instead of ', and used %d for integer instead of %f for float
    printf("num2 contains %d \nnum3 contains %f", num2, num3); // printf instead of Printf since it is case sensitive

    return 0;
} // } instead of ]