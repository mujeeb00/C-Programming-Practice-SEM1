#include <stdio.h>

struct ElectricityBill {
    char username[50];
    char address[100];
    float unitConsumption;
    float perUnitRate;
    char month[20];
    float totalBill;
};

float calculateBill(float unitConsumption, float perUnitRate) {
    return unitConsumption * perUnitRate;
}

int main() {

    struct ElectricityBill userBill;

    printf("Enter username: ");
    fgets(userBill.username, sizeof(userBill.username), stdin);

    printf("Enter address: ");
    fgets(userBill.address, sizeof(userBill.address), stdin);

    printf("Enter unit consumption: ");
    scanf("%f", &userBill.unitConsumption);

    printf("Enter per unit rate: ");
    scanf("%f", &userBill.perUnitRate);

    printf("Enter month: ");
    scanf("%s", userBill.month);


    userBill.totalBill = calculateBill(userBill.unitConsumption, userBill.perUnitRate);


    printf("\nElectricity Bill\n");
    printf("Username: %s", userBill.username);
    printf("Address: %s", userBill.address);
    printf("Unit Consumption: %.2f\n", userBill.unitConsumption);
    printf("Per Unit Rate: %.2f\n", userBill.perUnitRate);
    printf("Month: %s\n", userBill.month);
    printf("Total Bill: %.2f\n", userBill.totalBill);

    return 0;
}

