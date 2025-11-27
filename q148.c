#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

int main() {
    struct Student s1, s2;

    // Input for first student
    printf("Enter first student name: ");
    scanf("%s", s1.name);

    printf("Enter first student roll no: ");
    scanf("%d", &s1.roll_no);

    printf("Enter first student marks: ");
    scanf("%f", &s1.marks);

    // Input for second student
    printf("\nEnter second student name: ");
    scanf("%s", s2.name);

    printf("Enter second student roll no: ");
    scanf("%d", &s2.roll_no);

    printf("Enter second student marks: ");
    scanf("%f", &s2.marks);

    // Check if both structures are identical
    if (strcmp(s1.name, s2.name) == 0 &&
        s1.roll_no == s2.roll_no &&
        s1.marks == s2.marks) 
    {
        printf("\nBoth structures are IDENTICAL.\n");
    } 
    else 
    {
        printf("\nStructures are NOT identical.\n");
    }

    return 0;
}
