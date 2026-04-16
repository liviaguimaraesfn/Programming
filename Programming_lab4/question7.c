/* Program description: calculating and displaying the effects of an earthquake based on a Richter scale value input as below:
Less than 4 → Little.
4.0 to 4.9 → Windows shake.
5.0 to 5.9 → Walls crack; poorly built buildings are damaged.
6.0 to 6.9 → Chimneys tumble; ordinary buildings are damaged.
7.0 to 7.9 → Underground pipes break; well-built buildings are damaged.
More than 7.9 → Ground rises and falls in waves; most buildings are destroyed.
Author: Lívia Ferreira Guimarães Neves */

#include <stdio.h>

int main()
{
    float richter_scale_value;

    printf("Please enter a Richter scale value: ");
    scanf("%f", &richter_scale_value);

    if (richter_scale_value < 4.0) { // used if else statement
        printf("Little.\n");
    } else if (richter_scale_value >= 4.0 && richter_scale_value <= 4.9) { // && representes "and"
        printf("Windows shake.\n");
    } else if (richter_scale_value >= 5.0 && richter_scale_value <= 5.9) {
        printf("Walls crack; poorly built buildings are damaged.\n");
    } else if (richter_scale_value >= 6.0 && richter_scale_value <= 6.9) {
        printf("Chimneys tumble; ordinary buildings are damaged.\n");
    } else if (richter_scale_value >= 7.0 && richter_scale_value <= 7.9) {
        printf("Underground pipes break; well-built buildings are damaged.\n");
    } else {
        printf("Ground rises and falls in waves; most buildings are destroyed.\n");
    }

    return 0;
}
