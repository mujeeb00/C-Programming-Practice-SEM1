#include <stdio.h>

int main(void) {
    int n=15, first = 0, second = 1, next, i = 2;
    printf("Fibonacci series of %d\n%d %d ", n,first, second);
    while (i < n) {
        next = first + second;
        printf("%d ", next);
        first = second;
        second = next;
        i++;
    }

    return 0;
}
