#include <stdio.h>

int main() {
    int grade;

    printf("Please enter the numeric grade: ");
    scanf("%d", &grade);

    if (grade >= 90 && grade <= 100) {
        printf("The letter grade is an A.\n");
    } else if (grade >= 80 && grade <= 89) {
        printf("The letter grade is a B.\n");
    } else if (grade >= 70 && grade <= 79) {
        printf("The letter grade is a C.\n");
    } else if (grade >= 60 && grade <= 69) {
        printf("The letter grade is a D.\n");
    } else if (grade < 60) {
        printf("The letter grade is an F.\n");
    } else {
        printf("Invalid grade entered.\n");
    }

    return 0;
}
