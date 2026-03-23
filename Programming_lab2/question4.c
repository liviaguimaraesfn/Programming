/* Program description: to calculate the volume of a cube, which length of all sides is 2.8 m, and display volume to standard output.
Author: Lívia Ferreira Guimarães Neves */

#include <stdio.h>

int main()
{
    float side_length = 2.8;
    float volume;

    volume = side_length * side_length * side_length;

    printf("The volume of a cube with sides of 2.8 meters is %.3f cubic meters.", volume);

    return 0;
}