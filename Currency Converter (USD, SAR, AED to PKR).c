#include <stdio.h>

// Function to convert currency to PKR
float convertCurrency(float amount, char currencyType) {
    float exchangeRate;

    // Get the exchange rate based on the currency type
    switch (currencyType) {
        case 'U': // USD
            printf("Enter the exchange rate for USD to PKR: ");
            scanf("%f", &exchangeRate);
            break;
        case 'S': // SAR
            printf("Enter the exchange rate for SAR to PKR: ");
            scanf("%f", &exchangeRate);
            break;
        case 'A': // AED
            printf("Enter the exchange rate for AED to PKR: ");
            scanf("%f", &exchangeRate);
            break;
        default:
            printf("Invalid currency type!\n");
            return 0.0; // Return 0 for invalid currency type
    }

    // Convert the amount to PKR
    return amount * exchangeRate;
}

int main() {
    float amount;
    char currencyType;

    // Input: Amount and currency type
    printf("Enter the amount: ");
    scanf("%f", &amount);

    printf("Enter the currency type (U for USD, S for SAR, A for AED): ");
    scanf(" %c", &currencyType); // Note the space before %c to avoid issues with newline

    // Convert the currency to PKR
    float pkrAmount = convertCurrency(amount, currencyType);

    // Output: Display the converted amount in PKR
    if (pkrAmount > 0) {
        printf("PKR = %.2f\n", pkrAmount);
    }

    return 0;
}
