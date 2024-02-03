#include <stdio.h>

int main() {
    float num1, num2, num3, addition, substract, multiplication, division;

    // Get user inputs
    printf("Enter the first number: ");
    scanf("%f", &num1);

    printf("Enter the second number: ");
    scanf("%f", &num2);

    printf("Enter the third number: ");
    scanf("%f", &num3);

    addition = num1 + num2 + num3;
    substract = num1 - num2 - num3;
    multiplication = num1 * num2 * num3;
    division = num1 / num2 / num3;

    printf("division: %.2f\n", division);
    printf("Addition: %.2f\n", addition);
    printf("Substraction: %.2f\n",substract);
    printf("Multiplication: %.2f\n", multiplication);

    return 0;
}

