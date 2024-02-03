#include <stdio.h>

int main() {
    int time;

    printf("Enter the time : ");
    scanf("%d", &time);

    if (time < 12) {
        printf("Good morning\n");
    } else {
        printf("Good afternoon\n");
    }

    return 0;
}

