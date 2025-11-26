#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

// Function to find and return the top student
struct Student findTopStudent(struct Student s[], int n) {
    int i, pos = 0;

    for(i = 1; i < n; i++) {
        if(s[i].marks > s[pos].marks) {
            pos = i;
        }
    }
    return s[pos];    // returning structure
}

int main() {
    struct Student s[5], top;
    int i;

    // Input for 5 students
    for(i = 0; i < 5; i++) {
        printf("\nEnter details of student %d:\n", i + 1);

        printf("Name: ");
        scanf("%s", s[i].name);

        printf("Roll No: ");
        scanf("%d", &s[i].roll_no);

        printf("Marks: ");
        scanf("%f", &s[i].marks);
    }

    // Function call
    top = findTopStudent(s, 5);

    // Printing top student's details
    printf("\n--- Top Student ---\n");
    printf("Name: %s\n", top.name);
    printf("Roll No: %d\n", top.roll_no);
    printf("Marks: %.2f\n", top.marks);

    return 0;
}
