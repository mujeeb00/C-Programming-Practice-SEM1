#include <stdio.h>
struct Employee {
    int empId;
    char name[100];
    char department[50];
    float salary;
};

int main() {
    struct Employee employees[3];


    for (int i = 0; i < 3; i++) {
        printf("Enter details for Employee %d:\n", i + 1);

        printf("Employee ID: ");
        scanf("%d", &employees[i].empId);

        printf("Name: ");
        scanf("%s", employees[i].name);

        printf("Department: ");
        scanf("%s", employees[i].department);

        printf("Salary: ");
        scanf("%f", &employees[i].salary);

        printf("\n");
    }


    printf("Employee Information:\n");
    for (int i = 0; i < 3; i++) {
        printf("\nEmployee %d:\n", i + 1);
        printf("Employee ID: %d\n", employees[i].empId);
        printf("Name: %s\n", employees[i].name);
        printf("Department: %s\n", employees[i].department);
        printf("Salary: %.2f\n", employees[i].salary);
    }

    return 0;
}
