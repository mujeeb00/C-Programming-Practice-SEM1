#include <stdio.h>

struct Company {
    char name[100];
    char address[100];
    char phone[15];
    int noOfEmployee;
};

int main() {
    struct Company myCompany;

    printf("Enter company details:\n");

    printf("Name: ");
    scanf("%s", myCompany.name);

    printf("Address: ");
    scanf("%s", myCompany.address);

    printf("Phone: ");
    scanf("%s", myCompany.phone);

    printf("Number of Employees: ");
    scanf("%d", &myCompany.noOfEmployee);

    printf("\nCompany Information:\n");
    printf("Name: %s\n", myCompany.name);
    printf("Address: %s\n", myCompany.address);
    printf("Phone: %s\n", myCompany.phone);
    printf("Number of Employees: %d\n", myCompany.noOfEmployee);

    return 0;
}

