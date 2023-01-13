// C Program to Find Grade of a Student Using If else Ladder
#include <stdio.h>

void main() {
    float subject_1, subject_2, subject_3, subject_4, subject_5;
    float average;
    char grade;

    printf("Enter the marks of five subjects::\n");
    scanf("%f%f%f%f%f", &subject_1, &subject_2, &subject_3, &subject_4, &subject_5);

    // It will calculate the Total, Average and Percentage
    average = (subject_1 + subject_2 + subject_3 + subject_4 + subject_5) / 5.0;

    // It will calculate the Grade
    if (average >= 90)
        grade = 'A';
    else if (average >= 80 && average < 90)
        grade = 'B';
    else if (average >= 70 && average < 80)
        grade = 'C';
    else if (average >= 60 && average < 70)
        grade = 'D';
    else
        grade = 'E';

    // It will produce the final output
    printf("\nThe Average marks is: %f\n", average);
    printf("\nThe Grade is:        %c\n", grade);

}