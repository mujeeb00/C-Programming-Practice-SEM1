
#include <stdio.h>

int main() {
    int rows, cols;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    if (rows <= 0 || cols <= 0) {
        printf("Invalid dimensions.\n");
        return 1;
    }

    int array[rows][cols];


    printf("Enter elements for the %d x %d array:\n", rows, cols);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Enter element at position (%d, %d): ", i + 1, j + 1);
            scanf("%d", &array[i][j]);
        }
    }

    int row, col;
    printf("Enter the position to access (row and column): ");
    scanf("%d %d", &row, &col);

    if (row >= 1 && row <= rows && col >= 1 && col <= cols) {
        int element = array[row - 1][col - 1];
        printf("Element at position (%d, %d): %d\n", row, col, element);
    } else {
        printf("Invalid position.\n");
    }

    return 0;
}
