#include <stdio.h>

int calculatePower(int base, int exponent);

int main() {
    int number, power;

    printf("Enter the base number: ");
    scanf("%d", &number);

    printf("Enter the exponent: ");
    scanf("%d", &power);

    int result = calculatePower(number, power);
    printf("%d raised to the power %d is %d\n", number, power, result);

    return 0;
}

int calculatePower(int base, int exponent) {
    if (exponent == 0) {
        return 1;
    } else if (exponent > 0) {
        int result = 1;
        for (int i = 0; i < exponent; ++i) {
            result *= base;
        }
        return result;
    } else {
        return 1 / calculatePower(base, -exponent);
    }
}

