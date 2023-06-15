#include <stdio.h>

void calculatePercentage(int totalCreditsCompleted, float currentCGPA, int nextSemesterTotalSubjects) {
    float totalCGPAPoints = currentCGPA * totalCreditsCompleted;
    int nextSemesterTotalCredits = 0;
    float nextSemesterExpectedCGPA, expectedCGPAPoints;

    // Get information for each subject in the next semester
    for (int i = 1; i <= nextSemesterTotalSubjects; i++) {
        int subjectCredits;
        printf("Enter the credits for subject %d: ", i);
        scanf("%d", &subjectCredits);
        nextSemesterTotalCredits += subjectCredits;
    }

    // Get the expected CGPA for the next semester
    printf("Enter your expected CGPA for the next semester: ");
    scanf("%f", &nextSemesterExpectedCGPA);

    expectedCGPAPoints = nextSemesterExpectedCGPA * nextSemesterTotalCredits;

    // Calculate the required percentage for each subject
    printf("\nTo achieve your expected CGPA, you need the following percentages in each subject:\n");
    for (int i = 1; i <= nextSemesterTotalSubjects; i++) {
        int subjectCredits;
        printf("Enter the credits for subject %d: ", i);
        scanf("%d", &subjectCredits);

        float requiredPercentage = ((expectedCGPAPoints + (subjectCredits * currentCGPA)) / (totalCreditsCompleted + nextSemesterTotalCredits)) * 100;

        printf("Subject %d: %.2f%%\n", i, requiredPercentage);
    }
}

int main() {
    int totalCreditsCompleted, nextSemesterTotalSubjects;
    float currentCGPA;

    // Get the current CGPA and total completed credits
    printf("Enter your current CGPA: ");
    scanf("%f", &currentCGPA);

    printf("Enter the total number of credits you have completed: ");
    scanf("%d", &totalCreditsCompleted);

    // Get the total subjects in the next semester
    printf("Enter the total number of subjects in the next semester: ");
    scanf("%d", &nextSemesterTotalSubjects);

    calculatePercentage(totalCreditsCompleted, currentCGPA, nextSemesterTotalSubjects);

    return 0;
}
