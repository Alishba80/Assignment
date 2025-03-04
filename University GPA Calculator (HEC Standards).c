#include <stdio.h>

float calculate_GPA(int marks) {
    if (marks >= 85) {
        return 4.0;
    } else if (marks >= 80) {
        return 3.7;
    } else if (marks >= 75) {
        return 3.3;
    } else if (marks >= 70) {
        return 3.0;
    } else if (marks >= 65) {
        return 2.7;
    } else if (marks >= 60) {
        return 2.3;
    } else {
        return 0.0;
    }
}

int main() {
    int marks;
    
    printf("Enter your marks: ");
    scanf("%d", &marks);
    
    float gpa = calculate_GPA(marks);
    
    printf("GPA = %.1f\n", gpa);
    
    return 0;
}
