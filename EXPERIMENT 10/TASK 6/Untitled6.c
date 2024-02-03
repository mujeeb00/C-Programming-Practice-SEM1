#include <stdio.h>

int main() {
    float operand1, operand2;
    float *ptrOperand1, *ptrOperand2;

    printf("Enter the value of operand 1: ");
    scanf("%f", &operand1);

    printf("Enter the value of operand 2: ");
    scanf("%f", &operand2);


    ptrOperand1 = &operand1;
    ptrOperand2 = &operand2;

    if (*ptrOperand2 != 0) {
        float result = *ptrOperand1 / *ptrOperand2;

        printf("The result of division is: %.2f\n", result);
    } else {
        printf("Error: Division by zero is not allowed.\n");
    }

    return 0;
}

