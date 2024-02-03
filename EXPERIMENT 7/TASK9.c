#include <stdio.h>
int main() {
    int number,i,digits, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &number);
    for (i = number; i > 0; i /= 10) {
       digits = i % 10;
        sum += digits;}
    printf("Sum of individual digits: %d\n", sum);
    return 0;}
