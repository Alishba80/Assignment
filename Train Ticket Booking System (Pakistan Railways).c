#include <stdio.h>
#include <string.h>

float calculate_Train_Fare(char class[], float distance) {
    float fare = 0;
    
    if (strcmp(class, "Economy") == 0) {
        fare = distance * 5;
    } else if (strcmp(class, "Business") == 0) {
        fare = distance * 10;
    } else if (strcmp(class, "First") == 0) {
        fare = distance * 15;
    } else {
        printf("Invalid class! Please enter Economy, Business, or First.\n");
        return -1; 
    }
    
    return fare;
}

int main() {
    char class[20];
    float distance;
    
    printf("Enter travel class (Economy, Business, First): ");
    scanf("%s", class);
    printf("Enter travel distance in km: ");
    scanf("%f", &distance);
    
    float fare = calculate_Train_Fare(class, distance);
    if (fare != -1) {
        printf("Fare = %.2f PKR\n", fare);
    }
    
    return 0;
}

