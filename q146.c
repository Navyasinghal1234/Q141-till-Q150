#include <stdio.h>

struct Date {
    int day, month, year;
};

struct Employee {
    char name[50];
    int id;
    float salary;
    struct Date join;    // nested structure
};

int main() {
    struct Employee e;

    // Input employee details
    printf("Enter name: ");
    scanf("%s", e.name);

    printf("Enter ID: ");
    scanf("%d", &e.id);

    printf("Enter salary: ");
    scanf("%f", &e.salary);

    printf("Enter joining date (dd mm yyyy): ");
    scanf("%d %d %d", &e.join.day, &e.join.month, &e.join.year);

    // Output (print details)
    printf("\n--- Employee Details ---\n");
    printf("Name: %s\n", e.name);
    printf("ID: %d\n", e.id);
    printf("Salary: %.2f\n", e.salary);
    printf("Joining Date: %02d-%02d-%04d\n", e.join.day, e.join.month, e.join.year);

    return 0;
}
