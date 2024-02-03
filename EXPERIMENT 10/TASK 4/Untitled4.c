#include <stdio.h>

int main() {
    int num1, num2, num3;
    int *ptr1, *ptr2, *ptr3;

    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    printf("Enter the third number: ");
    scanf("%d", &num3);

    ptr1 = &num1;
    ptr2 = &num2;
    ptr3 = &num3;

    int max = *ptr1;

    if (*ptr2 > max) {
        max = *ptr2;
    }

    if (*ptr3 > max) {
        max = *ptr3;
    }

    printf("The largest number among %d, %d, and %d is: %d\n", num1, num2, num3, max);

    return 0;
}

