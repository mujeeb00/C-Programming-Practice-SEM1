#include <stdio.h>

int main() {
    int a = 10;
    int b = 20;


    int *p = &a;
    int *pb = &b;
    printf("Address of a : %p\n",p);
    printf("Address of b : %p\n",pb);

    return 0;
}

