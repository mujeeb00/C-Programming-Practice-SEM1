#include <stdio.h>

int main() {
    int var1, var2;
    int *ptrVar1, *ptrVar2;

    printf("Enter the value of variable 1: ");
    scanf("%d", &var1);

    printf("Enter the value of variable 2: ");
    scanf("%d", &var2);

    ptrVar1 = &var1;
    ptrVar2 = &var2;

    int temp = *ptrVar1;
    *ptrVar1 = *ptrVar2;
    *ptrVar2 = temp;

    printf("After swapping, the value of variable 1 is: %d\n", var1);
    printf("After swapping, the value of variable 2 is: %d\n", var2);

    return 0;
}
