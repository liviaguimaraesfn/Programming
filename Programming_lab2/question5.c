/* Program description: to perform some operations based on variable types, and display the result using a variable to store the operation result.
Author: Lívia Ferreira Guimarães Neves */

#include <stdio.h>

int main()
{
    int var1, var2, var3, var5;
    float var4; // float instead of integer since it is a division operation with potentially float result

    var1 = 15 + 10;
    var2 = 15 - 10;
    var3 = 15 * 10;
    var4 = 15 / 10.0;
    var5 = 15 % 3;

    printf("The result of the operation 15 + 10 is %d.", var1);
    printf("\nThe result of the operation 15 - 10 is %d.", var2);
    printf("\nThe result of the operation 15 * 10 is %d.", var3);
    printf("\nThe result of the operation 15 / 10 is %f.", var4);
    printf("\nThe result of the operation 15 %% 3 is %d.", var5);

    return 0;
}