#include <stdio.h>

int main() {
    int choice;
    printf("Choose a shape:\n");
    printf("1. Circle\n");
    printf("2. Triangle\n");
    printf("3. Square\n");
    printf("Enter your choice (1/2/3): ");
    scanf("%d", &choice);

    if (choice == 1) {
        int radius;
        printf("Enter the radius of the circle: ");
        scanf("%d", &radius);

        int circleArea = 3.14 * radius * radius;
        int circlePerimeter = 2 * 3.14 * radius;

        printf("Area of the circle: %d\n", circleArea);
        printf("Perimeter of the circle: %d\n", circlePerimeter);
    } else if (choice == 2) {
        int base, height;
        printf("Enter the base of the triangle: ");
        scanf("%d", &base);
        printf("Enter the height of the triangle: ");
        scanf("%d", &height);

        int triangleArea = 0.5 * base * height;
        int trianglePerimeter = 3 * base;
        printf("Area of the triangle: %d\n", triangleArea);
        printf("Perimeter of the triangle: %d\n", trianglePerimeter);
    } else if (choice == 3) {
        int side;
        printf("Enter the side length of the square: ");
        scanf("%d", &side);

        int squareArea = side * side;
        int squarePerimeter = 4 * side;

        printf("Area of the square: %d\n", squareArea);
        printf("Perimeter of the square: %d\n", squarePerimeter);
    } else {
        printf("Invalid choice. Please choose 1, 2, or 3.\n");
    }

    return 0;
}

