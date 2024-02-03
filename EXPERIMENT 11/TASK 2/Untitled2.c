#include <stdio.h>

int main() {

    int arr[5];
    printf("Enter 5 integers:\n");
    for (int i = 0; i < 5; ++i) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < 5 - 1; ++i) {
        for (int j = 0; j < 5 - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }


    printf("\nSorted array in ascending order:\n");
    for (int i = 0; i < 5; ++i) {
        printf("%d ", arr[i]);
    }

    return 0;
}

