//WAP Use malloc() to allocate structure memory dynamically and print details.
#include <stdio.h>
#include <stdlib.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

int main() {

    // Allocate memory dynamically for one structure
    struct Student *s;

    s = (struct Student*) malloc(sizeof(struct Student));

    if (s == NULL) {
        printf("Memory not allocated!\n");
        return 0;
    }

    // Taking input
    printf("Enter name: ");
    scanf("%s", s->name);

    printf("Enter roll number: ");
    scanf("%d", &s->roll_no);

    printf("Enter marks: ");
    scanf("%f", &s->marks);

    // Printing details
    printf("\n--- Student Details ---\n");
    printf("Name: %s\n", s->name);
    printf("Roll Number: %d\n", s->roll_no);
    printf("Marks: %.2f\n", s->marks);

    // Free allocated memory
    free(s);

    return 0;
}
