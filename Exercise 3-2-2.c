//Part A

#include <stdio.h>

float cube_volume(float side) {
    return side * side * side; 
}


//---------------------------------------------
//Part B

float cube_volume(float side);

int main(void) {
    float side;
    float volume;

    printf("Enter the side length of the cube: ");
    scanf("%f", &side);

    volume = cube_volume(side);

    printf("The volume of the cube is: %.2f\n", volume);

    return 0;
}
