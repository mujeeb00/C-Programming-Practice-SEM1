#include <stdio.h>

int main() {
    int num1, num2;
    int *ptr1, *ptr2;

    ptr1 = &num1;
    ptr2 = &num2;

    printf("Enter the value for variable 1: ");
    scanf("%d", ptr1);

    printf("Enter the value for variable 2: ");
    scanf("%d", ptr2);

    printf("Value 1: %d\n", num1);
    printf("Value 2: %d\n", num2);

    return 0;
}

