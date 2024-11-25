#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Parsing the info from a string
float parse_data(char string[], char item[], int *quantity, float *cost) {
    sscanf(string, "%s %d %f", item, quantity, cost);
    return (*quantity) * (*cost); 
}

void pretty_print(char item[], int quantity, float cost) {
    float subtotal = quantity * cost;
    printf("Item: %-11s Quantity: %-4d Item Cost: $ %5.2f Subtotal: $ %6.2f\n", item, quantity, cost, subtotal);
}

int main(int argc, char *argv[]) {
    
    // Try to open the file
    FILE *file = fopen(argv[1], "r");

    //if file doesn't open
    if (file == NULL) {
        printf("Unable to open the input file.\n");
        return 1;
    }

    char line[100];
    char item[50];
    int quantity, total_items = 0;
    float cost, subtotal, total_cost = 0.0;

    // Read and parse the data line by line
    while (fgets(line, sizeof(line), file)) {
        subtotal = parse_data(line, item, &quantity, &cost);
        pretty_print(item, quantity, cost);
        
        total_items += 1;
        total_cost += subtotal;
    }

    // Print  items and cost
    printf("-----------------------------------------------------\n");
    printf("Total Items: %d   Total Cost: $%.2f\n", total_items, total_cost);

    fclose(file);

    return 0;
}
