
#include <stdio.h>

int main() {
    int myArray[10];
    int *ptr = myArray;


    for (int i = 0; i < 10; i++) {
        printf("Enter value for index [%d]: ", i);
        scanf("%d", ptr + i);
    }


    for (int i = 0; i < 10; i++) {
        printf("Value at index [%d]: %d\n", i, *(ptr + i));
    }

    return 0;
}
