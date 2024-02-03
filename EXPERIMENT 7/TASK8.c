#include <stdio.h>

int main() {
    int number, sum = 0,i,digit;

    printf("Enter a 5-digit number: ");
    scanf("%d", &number);

    if (number >= 10000 && number <= 99999) {
        for (i = 0; i < 5; i++) {
            digit = number % 10;
            sum += digit;
            number /= 10;
        }

        printf("Sum of individual digits: %d\n", sum);
    } else {
        printf("Please enter a valid 5-digit number.\n");
    }

    return 0;
}
