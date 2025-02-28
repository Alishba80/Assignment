#include <stdio.h>


float remaining_Balance(float amount) {
    float fed = amount * 0.195; 
    float service_Charges = amount * 0.10; 
    float total_Deduction = fed + service_Charges;
    return amount - total_Deduction;
}

int main() {
    float amount;
    
    printf("Enter the recharge amount in PKR: ");
    scanf("%f", &amount);
    
    float balance = remaining_Balance(amount);
    
    printf("Available Balance: %.0f PKR\n", balance);
    
    return 0;
}

