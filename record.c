#include <stdio.h>
struct student {
    char firstName[50];
    int roll;
    float marks;
} s[2];

int main() {
    int i;
    printf("Enter information of students:\n");

    // storing information
    for (i = 0; i <=2; ++i) {
        s[i].roll = i + 1;
        printf("\nFor roll number%d,\n", s[i].roll);
        printf("Enter name: ");
        scanf("%s", s[i].firstName);
        printf("\n Enter totmarks: ");
        scanf("%f", &s[i].marks);
    }
    printf("\n\nDisplaying Information:\n");

    // displaying information
    for (i = 0; i <=2; ++i) {
        printf("\nRoll number: %d\n", i + 1);
        printf("First name: ");
        puts(s[i].firstName);
        printf("\n Marks: %.1f", s[i].marks);
        printf("\n");
    }
    return 0;
}