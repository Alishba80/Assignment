#include <stdio.h>

float calculateZakat(float totalWealth, float goldRate) {
    float nisab = 87.48 * goldRate; 
    if (totalWealth >= nisab) {
        return totalWealth * 0.025; 
    } else {
        return 0; 
    }
}

int main() {
    float totalWealth, goldRate;
    
    printf("Enter your total wealth in PKR: ");
    scanf("%f", &totalWealth);
    
    printf("Enter current gold rate per gram in PKR: ");
    scanf("%f", &goldRate);
    
    float zakat = calculateZakat(totalWealth, goldRate);
    
    if (zakat > 0) {
        printf("Zakat Payable: %.2f PKR\n", zakat);
    } else {
        printf("You do not meet the Nisab threshold. No Zakat is due.\n");
    }
    
    return 0;
}

