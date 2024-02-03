
#include <stdio.h>

int main() {
     int number[6];
     int sum = 0,product = 1;

    for (int i = 0; i < 5; i++) {
        printf("Enter %d Number : ", i + 1);
        scanf("%d", &number[i]);

        sum += number[i];
        product *= number[i];
    }

    printf("Sum: %d\n", sum);
    printf("Product: %d\n", product);

    return 0;
}
