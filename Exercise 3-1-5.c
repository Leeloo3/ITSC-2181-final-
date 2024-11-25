#include <stdio.h>

int main() {

    for (int i = 0; i < 20; i++) {
        printf("%d\n", 2 * i); 
    }

    printf("\n");

    for (int i = 49; i > 20; i -= 2) {
        printf("%d\n", i); 
    }

    return 0;
}

