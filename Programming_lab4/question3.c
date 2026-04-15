/* Program description: calculating if three specific numbers form a valid triangle.
In a triangle, the sum of any two sides must be greater than the third side.
Author: Lívia Ferreira Guimarães Neves */

#include <stdio.h>

int main()
{
    int num1, num2, num3;

    printf("Please enter three integer numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    if ((num1 + num2 > num3) && (num1 + num3 > num2) && (num2 + num3 > num1))
    {
        printf("The numbers %d, %d, and %d form a valid triangle.\n", num1, num2, num3);
    }
    else
    {
        printf("The numbers %d, %d, and %d do not form a valid triangle.\n", num1, num2, num3);
    }

    return 0;
}
