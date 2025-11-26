#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

int main() {
    struct Student s[5];
    int i, pos = 0;

    // input for 5 students
    for(i = 0; i < 5; i++) {
        printf("\nEnter details of student %d:\n", i + 1);

        printf("Name: ");
        scanf("%s", s[i].name);

        printf("Roll No: ");
        scanf("%d", &s[i].roll_no);

        printf("Marks: ");
        scanf("%f", &s[i].marks);
    }

    // finding highest marks
    for(i = 1; i < 5; i++) {
        if(s[i].marks > s[pos].marks) {
            pos = i;  // store index of highest marks
        }
    }

    // output highest scorer
    printf("\n--- Student with Highest Marks ---\n");
    printf("Name: %s\n", s[pos].name);
    printf("Roll No: %d\n", s[pos].roll_no);
    printf("Marks: %.2f\n", s[pos].marks);

    return 0;
}
