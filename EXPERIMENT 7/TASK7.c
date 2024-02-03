#include <stdio.h>

int main() {
    int number, reversedNumber = 0;
    printf("Enter an integer: ");
    scanf("%d", &number);
    while (number != 0) {
        int remainder = number % 10;
        reversedNumber = reversedNumber * 10 + remainder;
        number = number / 10;
    }
    printf("Reversed number: %d\n", reversedNumber);

    return 0;
}
