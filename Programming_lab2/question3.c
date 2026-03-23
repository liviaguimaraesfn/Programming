/* Program description: to calculate and display the remainder of some arithmetic operations, using the modulus operator.
Author: Lívia Ferreira Guimarães Neves */

#include <stdio.h>

int main()
{
    int var1, var2, var3, var4, var5, var6;

    var1 = 2 % 2;
    var2 = 3 % 2;
    var3 = 5 % 2;
    var4 = 7 % 3;
    var5 = 100 % 33;
    var6 = 100 % 7;

    // used double percentage signs to print the modulus operator in the output
    printf("The remainder of the arithmetic operation 2 %% 2 is\n= %d.", var1);
    printf("\nThe remainder of the arithmetic operation 3 %% 2 is\n= %d.", var2);
    printf("\nThe remainder of the arithmetic operation 5 %% 2 is\n= %d.", var3);
    printf("\nThe remainder of the arithmetic operation 7 %% 3 is\n= %d.", var4);
    printf("\nThe remainder of the arithmetic operation 100 %% 33 is\n= %d.", var5);
    printf("\nThe remainder of the arithmetic operation 100 %% 7 is\n= %d.", var6);

    return 0;
}