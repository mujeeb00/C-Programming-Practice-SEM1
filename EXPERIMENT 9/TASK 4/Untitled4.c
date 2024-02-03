#include <stdio.h>

int main() {
    int size;
    int found = 0;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];

    for (int i = 0; i < size; i++) {
        printf("Enter Number at %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    int target;

    printf("Enter the element to search: ");
    scanf("%d", &target);


    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            printf("Element %d found at index %d.\n", target, i);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Element %d not found in the array.\n", target);
    }

    return 0;
}

