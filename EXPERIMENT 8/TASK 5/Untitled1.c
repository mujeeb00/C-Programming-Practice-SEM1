#include <stdio.h>
int factorial(int n) {
    if (n == 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}


int main() {
    int number;

    printf("Enter a number to get factorial: ");
    scanf("%d", &number);

    printf("The factorial is %d\n", factorial(number));

    return 0;
}




