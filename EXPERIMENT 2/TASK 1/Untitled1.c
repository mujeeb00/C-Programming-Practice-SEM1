#include <stdio.h>

int main() {
    int num;

    printf("Enter an integer: ");
    scanf("%d", &num);

    int numSquared = num * num;
    int numCubed = num * num * num;

    printf("You entered: %d\n", num);
    printf("%d squared is: %d\n", num, numSquared);
    printf("%d cubed is: %d\n", num, numCubed);

    return 0;
}

