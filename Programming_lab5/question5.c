/* Program description: calculating the average percentage mark for a class of students, allowing a teacher to enter a percentage mark for each student in a class. The teacher enters a negative mark to indicate that there are no more marks to be entered. Once all the marks have been entered, the program displays the average percentage mark for the class.
Author: Lívia Ferreira Guimarães Neves */

#include <stdio.h>

int main()
{
    float mark, sum = 0.0; // float since grades with percentages are being stored
    int count = 0;

    printf("Enter the percentage marks for the students (enter a negative mark to finish):\n");
    scanf("%f", &mark);

    while (mark >= 0)
    {
        sum = sum + mark; // adding mark to the sum
        count++; // incrementing count of marks

        if (scanf("%f", &mark) != 1) {
            printf("Invalid input. Please enter a valid percentage mark.\n");
            return 1; // exiting with an error
        }
    }

    if (count > 0) {
        float average = sum / count; // calculating the average percentage mark for a class of students
        printf("The average percentage mark for the class is: %.2f%%.\n", average);
    } else {
        printf("Error. No percentage marks entered.\n");
    }

    return 0; // exiting successfully
}
