#include <stdio.h>

struct Parcel {
    char sender[100];
    char senderAddress[100];
    char receiver[100];
    char receiverAddress[100];
    float ratePerKg;
    float weight;
};

int main() {
    struct Parcel delivery;

    printf("details of delivery!\n");

    printf("Your Name (Sender): ");
    scanf("%s", delivery.sender);

    printf("Your Address: ");
    scanf("%s", delivery.senderAddress);

    printf("Receiver's Name: ");
    scanf("%s", delivery.receiver);

    printf("Receiver's Address: ");
    scanf("%s", delivery.receiverAddress);

    printf("Delivery Cost (per kg): $");
    scanf("%f", &delivery.ratePerKg);

    printf("Package Weight (in kg): ");
    scanf("%f", &delivery.weight);

    float totalCost = delivery.ratePerKg * delivery.weight;

    printf("\n Printing details:\n");
    printf("Sender: %s\n", delivery.sender);
    printf("Sender's Address: %s\n", delivery.senderAddress);
    printf("Receiver: %s\n", delivery.receiver);
    printf("Receiver's Address: %s\n", delivery.receiverAddress);
    printf("Cost per kg: $%.2f\n", delivery.ratePerKg);
    printf("Package Weight: %.2f kg\n", delivery.weight);
    printf("Total Cost: $%.2f\n", totalCost);

    return 0;
}
