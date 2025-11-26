#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

int main() {
    struct Student s[5];   // array of 5 students
    int i;

    // input
    for(i = 0; i < 5; i++) {
        printf("\nEnter details of student %d:\n", i+1);

        printf("Name: ");
        scanf("%s", s[i].name);

        printf("Roll No: ");
        scanf("%d", &s[i].roll_no);

        printf("Marks: ");
        scanf("%f", &s[i].marks);
    }

    // output
    printf("\n--- Student Details ---\n");
    for(i = 0; i < 5; i++) {
        printf("\nStudent %d\n", i+1);
        printf("Name: %s\n", s[i].name);
        printf("Roll No: %d\n", s[i].roll_no);
        printf("Marks: %.2f\n", s[i].marks);
    }

    return 0;
}
