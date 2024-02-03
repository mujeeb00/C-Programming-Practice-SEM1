#include <stdio.h>

int main() {
    int subjectMarks[5];
    int maxMarks = 100;
    float totalMarks = 0.0, percentage;

    printf("Enter the marks for 5 subjects (out of 100):\n");

    for (int i = 0; i < 5; ++i) {
        printf("Subject %d: ", i + 1);
        scanf("%d", &subjectMarks[i]);

        // Validate input (marks should be between 0 and maxMarks)
        if (subjectMarks[i] < 0 || subjectMarks[i] > maxMarks) {
            printf("Invalid marks! Marks should be between 0 and %d.\n", maxMarks);
            return 1;  // Exit the program with an error code
        }

        totalMarks += subjectMarks[i];
    }

    percentage = (totalMarks / (5 * maxMarks)) * 100;

    printf("\nTotal Marks: %.2f\n", totalMarks);
    printf("Percentage: %.2f%%\n", percentage);

    return 0;
}
