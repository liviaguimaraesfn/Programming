/* Program description: to demonstrate variables being declared and some arithmetic operations.
Author: Lívia Ferreira Guimarães Neves */

#include <stdio.h>

int main()
{
    int var1; // declaring variables
    float var2;
    char var3;
    float var4;
    
    var1 = 10;
    var2 = 8.21;
    var3 = 'q';

    var4 = var1 + var2;
    
    printf("var1 contains %d \nvar2 contains %f \nvar3 contains %c \nvar4 contains %f", var1, var2, var3, var4);

    printf("\nvar1 + var2 = %f\n", var4);

    var3 = 'h';
    
    printf("var1 contains %d \nvar2 contains %f \nvar3 contains %c \nvar4 contains %f", var1, var2, var3, var4);

    return 0;
}