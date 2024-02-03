#include <stdio.h>

struct Address {
    char street[100];
    char city[50];
    char state[50];
    int pinCode;
};

struct Student {
    int id;
    char name[100];
    char department[50];
    float marks[5];
    struct Address studentAddress;
};

int main() {
    struct Student student;

    printf("Enter student details:\n");

    printf("ID: ");
    scanf("%d", &student.id);

    printf("Name: ");
    scanf("%s", student.name);

    printf("Department: ");
    scanf("%s", student.department);

    printf("Enter marks for 5 subjects:\n");
    for (int i = 0; i < 5; i++) {
        printf("Subject %d: ", i + 1);
        scanf("%f", &student.marks[i]);
    }

    printf("Address details:\n");
    printf("Street: ");
    scanf("%s", student.studentAddress.street);

    printf("City: ");
    scanf("%s", student.studentAddress.city);

    printf("State: ");
    scanf("%s", student.studentAddress.state);

    printf("Pin Code: ");
    scanf("%d", &student.studentAddress.pinCode);


    printf("\nStudent Information:\n");
    printf("ID: %d\n", student.id);
    printf("Name: %s\n", student.name);
    printf("Department: %s\n", student.department);

    printf("Marks for 5 subjects:\n");
    for (int i = 0; i < 5; i++) {
        printf("Subject %d: %.2f\n", i + 1, student.marks[i]);
    }

    printf("Address:\n");
    printf("Street: %s\n", student.studentAddress.street);
    printf("City: %s\n", student.studentAddress.city);
    printf("State: %s\n", student.studentAddress.state);
    printf("Pin Code: %d\n", student.studentAddress.pinCode);

    return 0;
}

