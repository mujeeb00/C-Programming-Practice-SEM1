#include <stdio.h>
#include <stdbool.h>

int main() {
    int n;
    int even = 0, odd = 0, negative = 0;

    printf("Enter the total number of integers: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid input. The total number should be a positive integer.\n");
        return 1;
    }

    printf("Enter the list of numbers:\n");
    for (int i = 0; i < n; i++) {
        int num;
        printf("Enter integer %d: ", i + 1);

        if (scanf("%d", &num) != 1) {
            printf("Invalid input. Please enter an integer.\n");


            while (getchar() != '\n');

            i--;
        } else {
            if (num < 0) {
                negative++;
            }
            if (num % 2 == 0) {
                even++;
            } else {
                odd++;
            }
        }
    }

    printf("Even numbers: %d\n", even);
    printf("Odd numbers: %d\n", odd);
    printf("Negative numbers: %d\n", negative);

    return 0;
}
