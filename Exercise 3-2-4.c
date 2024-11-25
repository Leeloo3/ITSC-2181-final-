#include <stdio.h>

int main(void) {
    int array[12] = {0};

    array[0] = 1;
    array[2] = 3;
    array[6] = 7;

    printf("Array contents:\n");
    for (int i = 0; i < 12; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    int sum = 0;
    for (int i = 0; i < 12; i++) {
        sum += array[i];
    }
    
    printf("Sum of the array elements: %d\n", sum);

    return 0;
}