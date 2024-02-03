#include <stdio.h>

int main() {
    int values[] = {1, 2, 3, 4, 5};

    int *vPtr1 = values;

    int *vPtr2 = &values[0];

    printf("Address using array name: %p\n", (void *)vPtr1);
    printf("Address using address-of operator: %p\n", (void *)vPtr2);

    return 0;
}

