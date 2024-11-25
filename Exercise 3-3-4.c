#include <stdio.h>
#include <stdlib.h>

//By Jaden Shaw - 801292597

int main() {
    float *stock_prices = (float *)malloc(500 * sizeof(float));
    
    // Checks if memory allocation was successful
    if (stock_prices == NULL) {
        fprintf(stderr, "Memory allocation failed.\n");
        exit (1);
    }

    // Assigns values using pointer arithmetic (These are current stock prices as of 9/27/2024)
    *(stock_prices) = 187.97; //Amazon
    *(stock_prices + 1) = 156.32; // Beoing
    *(stock_prices + 2) = 177.54; // Royal Carribean
    *(stock_prices + 3) = 68.64; // Crude oil
    *(stock_prices + 4) = 20.23; // Gold


    // Prints out stock prices line after line
    for (int i = 0; i < 5; i++) {
        printf("stock price %d = %.2f\n", i, *(stock_prices + i));
    }

    free(stock_prices);

    return 0;
}
