#include <stdio.h>

struct Employee {
    char name[50];
    int id;
    float salary;
};

int main() {
    struct Employee e1, e2;

    // Input Employee Details
    printf("Enter name: ");
    scanf("%s", e1.name);

    printf("Enter ID: ");
    scanf("%d", &e1.id);

    printf("Enter salary: ");
    scanf("%f", &e1.salary);

    // Write to binary file
    FILE *fp = fopen("employee.bin", "wb");
    fwrite(&e1, sizeof(e1), 1, fp);
    fclose(fp);

    // Read from binary file
    fp = fopen("employee.bin", "rb");
    fread(&e2, sizeof(e2), 1, fp);
    fclose(fp);

    // Print data read from file
    printf("\n--- Data Read From File ---\n");
    printf("Name: %s\n", e2.name);
    printf("ID: %d\n", e2.id);
    printf("Salary: %.2f\n", e2.salary);

    return 0;
}
