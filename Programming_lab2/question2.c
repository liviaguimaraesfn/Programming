/* Program description: to calculate and display, on separate lines, the volume and surface area of a box with specific dimensions, and the area of a circle with a specific radius, assuming pi is 3.14.
Author: Lívia Ferreira Guimarães Neves */

#include <stdio.h>

int main()
{
    float height, length, width, volume, surface_area, circle_area, circle_radius;

    height = 10.0;
    length = 11.5;
    width = 2.5;

    volume = height * length * width;

    printf("The volume of a box with 10cm height, 11.5cm length and 2.5cm width is %.2f.", volume);

    surface_area = 2 * (length * width) + 2 * (height * width) + 2 * (height * length);

    printf("\nThe surface area of a box with 10cm height, 11.5cm length and 2.5cm width is %.2f.", surface_area);

    circle_radius = 4.8;
    circle_area = 3.14 * circle_radius * circle_radius;

    printf("\nThe area of a circle with a radius of 4.8cm is %.2f.", circle_area);

    return 0;
}