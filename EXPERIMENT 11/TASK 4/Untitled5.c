#include <stdio.h>

void printArray(int arr[], int size) {
    for (int i = 0; i < size; ++i) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void performOperations(int O1[], int O2[], int size) {

    for (int i = 0, j = 0; i < size; i += 2, j++) {
        O2[i] = O1[j];
    }


    for (int i = 0; i < size; ++i) {
        if (O2[i] > 5) {
            O2[i] = 0;
        }
    }

    for (int i = 0; i < size - 1; ++i) {
        int minIndex = i;
        for (int j = i + 1; j < size; ++j) {
            if (O2[j] < O2[minIndex]) {
                minIndex = j;
            }
        }
        if (minIndex != i) {
            int temp = O2[i];
            O2[i] = O2[minIndex];
            O2[minIndex] = temp;
        }
    }
}

int main() {
    int O1[8] = {0, 1, 2, 3, 4, 5, 6, 7};
    int O2[8] = {1, 3, 5, 7, 9, 2, 4, 6};

    performOperations(O1, O2, 8);

    printf("Array O2 after operations and sorting in ascending order:\n");
    printArray(O2, 8);

    return 0;
}

