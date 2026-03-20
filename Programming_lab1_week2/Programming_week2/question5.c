/* Program description: to declare variables and its values, using a printf statement and testing the use of delimiters.
Author: Lívia Ferreira Guimarães Neves */

#include <stdio.h>

int main()
{
    int var1; // declaring variables
    float var2;
    char var3;
    
    var1 = 1000;
    var2 = 9876.5;
    var3 = 'a';
    
    // printf("var1 contains %f \nvar2 contains %c \nvar3 contains %d\n\n", var1, var2, var3);
    // printf("var1 contains %d \nvar2 contains %f \nvar3 contains %d\n\n", var1, var2, var3); e.g. char D changes to 97 ASCII value
    printf("var1 contains %d \nvar2 contains %f \nvar3 contains %c", var1, var2, var3);
    // the output for using %d for float will be undefined behavior, and for a char will be the ASCII value of the character.
    // the output for using %f for int will be undefined behavior, and for char will be undefined behavior.
    // the output for using %c for int will be the ASCII char value of the integer, and for float will be undefined behavior.

    return 0;
}