#include<stdio.h>

void main() {
    int custId, unit;
    float charge=0, surcharge=0, totalAmount = 0;
    char customerName;

    printf("Enter custiomer ID: ");
    scanf("%d", &custId);
    printf("Enter customer Name: ");
    scanf(" %c", &customerName);
    printf("Enter Units Consumed: ");
    scanf("%d", &unit);

    if(unit <= 199) charge = unit*1.20;
    else if(unit >= 200 && unit < 400) charge = unit*1.50;
    else if(unit >= 400 && unit < 600) charge = unit*1.80;
    else if(unit >= 600) charge = unit*2.00;

    if(charge > 400) {
        surcharge = (charge * 15)/100;
    }

    totalAmount = charge + surcharge;
    if(totalAmount < 100) {
        totalAmount = 100;
    }

    printf("\nCustomer ID: %d", custId);
    printf("\nCustomer Name: %c", customerName);
    printf("\nUnits Consumed: %d", unit);
    printf("\nAmount Charges @Rs. %.2f per unit: %.2f", charge/unit, charge);
    printf("\nSurcharge Amount: %.2f", surcharge);
    printf("\nNet Amount paid by the customer: %.2f", totalAmount);
}