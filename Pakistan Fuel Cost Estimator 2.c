#include <stdio.h>

// Function to calculate the fuel cost
float calculateFuelCost(float distance, float fuelAverage, float fuelPrice) {
    // Calculate the total fuel required
    float fuelRequired = distance / fuelAverage;

    // Calculate the total fuel cost
    float totalCost = fuelRequired * fuelPrice;

    return totalCost;
}

int main() {
    float distance, fuelAverage, fuelPrice;

    // Input: Trip details
    printf("Enter the total trip distance (in kilometers): ");
    scanf("%f", &distance);

    printf("Enter the vehicle's fuel consumption (km/liter): ");
    scanf("%f", &fuelAverage);

    printf("Enter the current fuel price per liter (PKR): ");
    scanf("%f", &fuelPrice);

    // Calculate the fuel cost
    float totalFuelCost = calculateFuelCost(distance, fuelAverage, fuelPrice);

    // Output: Display the total fuel cost
    printf("Total Fuel Cost = %.2f PKR\n", totalFuelCost);

    return 0;
}

