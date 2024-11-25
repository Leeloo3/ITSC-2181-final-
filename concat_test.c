#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//By Jaden Shaw - 801292597

char * concatenate(const char * string1, const char * string2);

int main(int argc, const char *argv[]) {
    char str1[] = "The United States";
    char str2[] = "of America";
    printf("First string: %s\n", str1);
    printf("Second string: %s\n", str2);
    char *str3 = concatenate(str1, str2);
    if (str3 != NULL) {
        printf("The two strings concatenated: %s\n", str3); // removed the \n to clean up the output
        free(str3); // Free allocated memory
    } else {
        printf("\nError concatenating strings.\n");
    }

    char str4[] = "The University of North Carolina";
    char str5[] = "at Charlotte";
    printf("\nFirst string: %s\n", str4);
    printf("Second string: %s\n", str5);
    char * str6 = concatenate(str4, str5);
    if (str6 != NULL) {
        printf("The two strings concatenated: %s\n", str6); 
        free(str6); // Free allocated memory
    } else {
        printf("\nError concatenating strings.\n");
    }

    return 0;
}

// function that concatenates the two strings
char *concatenate(const char * string1, const char * string2) {
    int len1 = strlen(string1);
    int len2 = strlen(string2);

    // allocates memory for the concatenated string
    char * result = (char *)malloc(len1 + len2 + 2);
    if (result == NULL) {
        fprintf(stderr, "Memory allocation failed\n");
        exit(1);
    }

    // copies the first string into the concatenated string
    char * pntr = result;
    while (*string1 != '\0') {
        *pntr = *string1;
        pntr++;
        string1++;
    }

    // adds a space between the strings
    *pntr = ' ';
    pntr++;

    // copies the second string into the concatenated string
    while (*string2 != '\0') {
        *pntr = *string2;
        pntr++;
        string2++;
    }

    *pntr = '\0';

    return result;
}


