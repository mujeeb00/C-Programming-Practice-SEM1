#include <stdio.h>

int main() {
    int arr[10];


    printf("Enter 10 integers:\n");
    for (int i = 0; i < 10; ++i) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    int searchNumber;
    printf("\nEnter a number to search: ");
    scanf("%d", &searchNumber);


    int found = 0;
    for (int i = 0; i < 10; ++i) {
        if (arr[i] == searchNumber) {
            found = 1;
            break;
        }
    }

    if (found) {
        printf("%d is present in the array.\n", searchNumber);
    } else {
        printf("%d is not present in the array.\n", searchNumber);
    }

    return 0;
}



