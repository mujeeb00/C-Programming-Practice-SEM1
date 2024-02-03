#include <stdio.h>

int main() {
    // Declare and initialize two variables
    int a, b;

    // Get user inputs for variables a and b
    printf("Enter the value of a: ");
    scanf("%d", &a);
    printf("Enter the value of b: ");
    scanf("%d", &b);

    a = a + b;
    b = a - b;
    a = a - b;

    printf("a = %d\n", a);
    printf("b = %d\n", b);

    return 0;
}
