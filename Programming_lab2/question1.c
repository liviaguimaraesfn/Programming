/* Program description: to calculate and display the sum of some the integers and the average of some float numbers.
Author: Lívia Ferreira Guimarães Neves */

#include <stdio.h>

int main()
{
    int var1, var2, var3, var4, var5, var6;

    var1 = 1;
    var2 = 2;
    var3 = 3;
    var4 = 4;
    var5 = 5;

    var6 = var1 + var2 + var3 + var4 + var5;

    printf("The sum of the integers 1 to 5 is %d.", var6);

    float var7, var8, var9, var10, var11, var12, var13, var14, var15, var16, var17, varfinal;

    var7 = 1.0;
    var8 = 1.1;
    var9 = 1.2;
    var10 = 1.3;
    var11 = 1.4;
    var12 = 1.5;
    var13 = 1.6;
    var14 = 1.7;
    var15 = 1.8;
    var16 = 1.9;
    var17 = 2.0;

    varfinal = (var7 + var8 + var9 + var10 + var11 + var12 + var13 + var14 + var15 + var16 + var17) / 11;

    printf("\nThe average of the floating-point numbers from 1.0 to 2.0 is %f.", varfinal);

    return 0;
}