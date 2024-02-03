#include <stdio.h>
void convertDecimalToBinary(int decimal) {
    if (decimal == 0) {
        printf("0");
        return;
    } else if (decimal == 1) {
        printf("1");
        return;
    }

    convertDecimalToBinary(decimal / 2);
    printf("%d", decimal % 2);
}
int main() {
    int decimal;

    printf("Enter a decimal number: ");
    scanf("%d", &decimal);

    convertDecimalToBinary(decimal);

}



