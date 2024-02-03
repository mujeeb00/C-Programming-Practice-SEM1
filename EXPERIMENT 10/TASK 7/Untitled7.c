#include <stdio.h>

int main() {
    int myArray[10];


    for (int i = 0; i < 10; i++) {
        myArray[i] = i+1;
    }

    printf("Index\tValue\tAddress\n");
    for (int i = 0; i < 10; i++) {
        printf("%d\t%d\t%p\n", i, myArray[i], (void*)&myArray[i]);
    }

    return 0;
}

