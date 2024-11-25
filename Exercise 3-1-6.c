#include <stdio.h>

int main() {
    int number;
    int sum = 0;

    while (1) {
        printf("Current Sum: %d\n", sum);
        printf("Please enter the next number: ");
        scanf("%d", &number);

        if (number == -1) {
            break;
        }

        sum += number;
    }

    printf("Done!\n");

    return 0;
}
