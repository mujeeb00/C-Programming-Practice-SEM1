#include <stdio.h>

int main() {
    float length, width, height;

    printf("Enter the length of the box: ");
    scanf("%f", &length);
    printf("Enter the width of the box: ");
    scanf("%f", &width);
    printf("Enter the height of the box: ");
    scanf("%f", &height);

    float volume = length * width * height;
    float surfaceArea = 2 * (height * width + height * length + width * length);

    printf("Volume of the box: %.2lf\n", volume);
    printf("Surface Area of the box: %.2lf\n", surfaceArea);

    return 0;
}

