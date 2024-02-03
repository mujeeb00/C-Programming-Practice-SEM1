#include <stdio.h>

int main() {
    int marks1, marks2, marks3, marks4, marks5;
    float totalMarks = 0;

    printf("Enter the marks for 5 subjects :\n");

    printf("Enter marks for subject 1: ");
    scanf("%d", &marks1);

    printf("Enter marks for subject 2: ");
    scanf("%d", &marks2);

    printf("Enter marks for subject 3: ");
    scanf("%d", &marks3);

    printf("Enter marks for subject 4: ");
    scanf("%d", &marks4);

    printf("Enter marks for subject 5: ");
    scanf("%d", &marks5);

    if (marks1 < 0 || marks1 > 100 || marks2 < 0 || marks2 > 100 ||
        marks3 < 0 || marks3 > 100 || marks4 < 0 || marks4 > 100 ||
        marks5 < 0 || marks5 > 100) {
        printf("Invalid marks! Marks should be between 0 and 100.\n");
        return 1;
    }

    totalMarks = marks1 + marks2 + marks3 + marks4 + marks5;

    // Calculate the percentage
    float percentage = (totalMarks / 500.0) * 100;

    char grade[3];
    if (percentage >= 95) {
        strcpy(grade, "A+");
    } else if (percentage >= 85) {
        strcpy(grade, "A");
    } else if (percentage >= 75) {
        strcpy(grade, "B+");
    } else if (percentage >= 65) {
        strcpy(grade, "B");
    } else if (percentage >= 55) {
        strcpy(grade, "C+");
    } else {
        strcpy(grade, "F");
    }

    printf("Obtain Marks: %.2f\n", totalMarks);
    printf("Percentage: %.2f%%\n", percentage);
    printf("Grade: %s\n", grade);

    return 0;
}
