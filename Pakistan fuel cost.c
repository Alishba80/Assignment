#include <stdio.h>
float total_fuel_cost(float distance,float fuel_average, float fuel_price){
	float fuel_consumption=distance/fuel_average;
	float total_fuel_cost=fuel_consumption*fuel_price;
	return total_fuel_cost;
	
}
int main (){
	float distance;
	float fuel_average;
	float fuel_price;
	float calculate_fuel_cost;
	printf("Enter distance:");
	scanf("%f", &distance);
	printf("Enter fuel average:");
	scanf("%f", &fuel_average);
	printf("Enter fuel price:");
	scanf("%f", &fuel_price);
	calculate_fuel_cost=total_fuel_cost(distance, fuel_average, fuel_price);
	printf("Total fuel cost is %f", calculate_fuel_cost);
	return 0;
}
