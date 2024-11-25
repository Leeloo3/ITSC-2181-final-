#include <stdio.h>

int main() {
    char char1, char2;
    float float1;
    int whole1;

    printf("Enter two characters, a space, a float, a space, and a whole number:\n");
    scanf(" %c %c %f %d", &char1, &char2, &float1, &whole1);

    printf("%c%c\n", char1, char2);
    printf("%f\n", float1);
    printf("%d\n", whole1);

    return 0;
}
