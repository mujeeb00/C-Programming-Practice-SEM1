#include <stdio.h>

int main()
{
    int n, fact = 1;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    int i =1;
    while (i <= n){
        fact *= i;
        i++;
    }
    printf("Factorial of %d is %d\n", n, fact);
    return 0;
}
