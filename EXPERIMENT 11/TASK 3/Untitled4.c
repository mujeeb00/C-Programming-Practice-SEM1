#include <stdio.h>

void printArray(int arr[], int size) {
    for (int i = 0; i < size; ++i) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void bubbleSort(int arr[], int size) {
    for (int i = 0; i < size - 1; ++i) {
        for (int j = 0; j < size - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int One[10] = {0, 3, 4, 5, 8, 6, 9, 1, 7, 2};

    int e1 = 4;
    int e2 = 7;

    int temp = One[e1];
    One[e1] = One[e2];
    One[e2] = temp;

    int deleteIndex = e2 - e1;
    for (int i = deleteIndex; i < 9; ++i) {
        One[i] = One[i + 1];
    }
    int insertIndex = e1 + 3;
    for (int i = 9; i > insertIndex; --i) {
        One[i] = One[i - 1];
    }
    One[insertIndex] = 10;

    printf("Original Array: ");
    printArray(One, 10);

    bubbleSort(One, 10);

    printf("Sorted Array in Ascending Order: ");
    printArray(One, 10);

    return 0;
}

