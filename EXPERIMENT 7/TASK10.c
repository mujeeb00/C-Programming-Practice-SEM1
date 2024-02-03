#include <stdio.h>
int main()
{
    char choice;
    do
    {
        int num1, num2, result;
        printf("Enter the first number: ");
        scanf("%d", &num1);
        printf("Enter the second number: ");
        scanf("%d", &num2);
        if (num2 == 0)
        {
            printf("Error: Division by zero is not allowed.\n");
        }
        else
        {
            result = num1 / num2;
            printf("Result of division: %d / %d = %d\n", num1, num2, result);
        }
        printf("Do you want to perform another division (y/n)? ");
        scanf(" %c", &choice);
    }
    while (choice == 'y' || choice == 'Y');
    return 0;
}
