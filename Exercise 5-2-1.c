#include <stdio.h>
#include <string.h>

//By Jaden Shaw - 801292597

//Part 1
int length(char str[]){
    return strlen(str);
}

//Part 2
char concatenate(char str[], char str2[]) {
    strcat(str, str2);
    return str;
}


int main() {
    char str[] = "Jaden Shaw";
    char cat1[] = "Hello";
    char cat2[] = "World";

    printf("%d", length(str));

    printf("%s", concatenate(cat1, cat2));

    return 0;
}

