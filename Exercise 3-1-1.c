#include <stdio.h>

int main() {
    char char1, char2;
    float floatNum;
    int wholeNum;

    printf("Enter two characters, a space, a float, a space, and a whole number:\n");

    scanf(" %c %c %f %d", &char1, &char2, &floatNum, &wholeNum);

    printf("%c%c\n", char1, char2);
    printf("%f\n", floatNum);
    printf("%d\n", wholeNum);

    return 0;
}
