#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Function to show load-shedding schedule
void showLoadSheddingSchedule(char city[]) {
    printf("Load Shedding Schedule for %s:\n", city);

    // Days of the week
    char *days[] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};

    // Seed the random number generator
    srand(time(NULL));

    // Generate and display the schedule for each day
    for (int i = 0; i < 7; i++) {
        int hour1 = rand() % 12 + 1; // Random hour between 1 and 12 for AM
        int hour2 = rand() % 12 + 1; // Random hour between 1 and 12 for PM

        // Ensure the end time does not exceed 12
        int endHour1 = (hour1 + 2) % 12; // Wrap around if necessary
        if (endHour1 == 0) endHour1 = 12; // Handle 0 (12-hour format)

        int endHour2 = (hour2 + 2) % 12; // Wrap around if necessary
        if (endHour2 == 0) endHour2 = 12; // Handle 0 (12-hour format)

        printf("%s: %d AM - %d AM, %d PM - %d PM\n", days[i], hour1, endHour1, hour2, endHour2);
    }
}

int main() {
    char city[50];

    // Input: City name
    printf("Enter your city: ");
    scanf("%s", city);

    // Display the load-shedding schedule
    showLoadSheddingSchedule(city);

    return 0;
}
