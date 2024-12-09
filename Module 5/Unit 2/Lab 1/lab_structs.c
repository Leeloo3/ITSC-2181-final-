#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student {
    char name[50];
    int id;
    float grade1, grade2, grade3;
};

void init_student(struct Student *s, const char *name, int id, float g1, float g2, float g3) {
    strcpy(s->name, name);
    s->id = id;
    s->grade1 = g1;
    s->grade2 = g2;
    s->grade3 = g3;
}

float calculate_average(const struct Student *s) {
    return (s->grade1 + s->grade2 + s->grade3) / 3.0;
}

void print_student(const struct Student *s) {
    printf("Name: %s\n", s->name);
    printf("ID: %d\n", s->id);
    printf("Average Grade: %.2f\n", calculate_average(s));
}

int main() {
    int num_students;
    printf("Enter the number of students: ");
    scanf("%d", &num_students);

    struct Student *students = malloc(num_students * sizeof(struct Student));
    if (students == NULL) {
        fprintf(stderr, "Memory allocation failed\n");
        return 1;
    }

    for (int i = 0; i < num_students; i++) {
        char name[50];
        int id;
        float g1, g2, g3;

        printf("Enter information for student %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", name);
        printf("ID: ");
        scanf("%d", &id);
        printf("Grade 1: ");
        scanf("%f", &g1);
        printf("Grade 2: ");
        scanf("%f", &g2);
        printf("Grade 3: ");
        scanf("%f", &g3);

        init_student(&students[i], name, id, g1, g2, g3);
    }

    printf("Student Information:\n");
    printf("---------------------\n");
    for (int i = 0; i < num_students; i++) {
        print_student(&students[i]);
    }

    free(students);
    return 0;
} 