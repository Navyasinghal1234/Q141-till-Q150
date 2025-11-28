// Use pointer to struct to modify and display data using -> operator.
#include <stdio.h>
struct Student {
    char name[50];
    int roll;
    float marks;
};

int main() {

    struct Student s;       // normal structure variable
    struct Student *ptr;    // pointer to structure

    ptr = &s;   // pointer pointing to structure s

    // Taking input using -> operator
    printf("Enter name: ");
    scanf("%s", ptr->name);

    printf("Enter roll number: ");
    scanf("%d", &ptr->roll);

    printf("Enter marks: ");
    scanf("%f", &ptr->marks);

    // Displaying modified data
    printf("\nModified Data: Name: %s | Roll: %d | Marks: %.0f\n",
           ptr->name, ptr->roll, ptr->marks);

    return 0;
}
