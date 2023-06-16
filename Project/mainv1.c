#include <stdio.h>

#define MAX_SUBJECTS 10

typedef struct {
    char name[50];
    float credit;
    int marks;
    float cgpa;
} Subject;

// calculate total point in cgpa
void calculateTPoint(Subject subjects[], int numSubjects, float *cgpa);
// calculate cgpa
float calculateCgpa(float achievePoint, float prevAchievePoint, float totalCompletedCredit);
// print subject name reults
void printSubjectResult(Subject subjects[], int numSubjects);
// get CGPA from marks
float getCGPAFromMark(float mark);
// get CGPA from marks
int getMakFromCGPA(float cgpa);
// store data
void storeDataFromUser(Subject subjects[], int numSubjects, float *nextSemesterCredit, int process);
// store data
void storeDataFromUserTwo(Subject subjects[], int numSubjects, float *nextSemesterCredit);
// process one
void processOne(Subject nextSemesterSubjects[], int numNextSemesterSubjects, float previousCreditPoint, float completedCredit, float currentCGPA, float expectedCGPA, float expectedCreditPoint);
// process two
void processTwo(float targetCreditPoint, float totalCreditInNextSemester, float previousCreditPoint, float completedCredit, float currentCGPA, float expectedCGPA);

int main() {
    float previousCompletedCredit;
    float currentCGPA;

    printf("***************************************\n");
    printf("*                                     *\n");
    printf("*                                     *\n");
    printf("*    CGPA Analysis and Prediction     *\n");
    printf("*                                     *\n");
    printf("*                                     *\n");
    printf("***************************************\n");

    printf("\n\n");

    printf("Enter the number of credit you have completed: ");
    scanf("%f", &previousCompletedCredit);

    while (getchar() != '\n');  // Clear the input buffer
    printf("Enter your current CGPA: ");
    scanf("%f", &currentCGPA);

    int numNextSemesterSubjects;
    Subject nextSemesterSubjects[MAX_SUBJECTS];
    float expectedCGPA;


    while (getchar() != '\n');  // Clear the input buffer
    printf("Enter the number of subjects in the next semester: ");
    scanf("%d", &numNextSemesterSubjects);

    while (getchar() != '\n');  // Clear the input buffer
    printf("Enter your expected CGPA for the next semester: ");
    scanf("%f", &expectedCGPA);

    int process;

    printf("\n\nEnter 1 to get predicted CGPA by your self: \n");
    printf("Enter 2 to get predicted CGPA by system: \n\n");

    printf("Enter \t:");
    scanf("%d", &process);

    float totalCreditInNextSemester = 0.00;
    // get each subject data from user
    storeDataFromUser(nextSemesterSubjects, numNextSemesterSubjects, &totalCreditInNextSemester, process);

    // total semester credit number
    float completedCredit = totalCreditInNextSemester + previousCompletedCredit;
    // expected credit point in next semester;
    float expectedCreditPoint = completedCredit * expectedCGPA;
    // previous credit point
    float previousCreditPoint = previousCompletedCredit * currentCGPA;
    // targeted credit point
    float targetCreditPoint = expectedCreditPoint - previousCreditPoint;

    switch(process){
        case 1:
            processOne(nextSemesterSubjects, numNextSemesterSubjects, previousCreditPoint, completedCredit, currentCGPA, expectedCGPA, expectedCreditPoint);
            break;
        case 2:
            processTwo(targetCreditPoint, totalCreditInNextSemester, previousCreditPoint, completedCredit, currentCGPA, expectedCGPA);
            break;
        default:
            printf("Nothing");
    }

    return 0;
}


void processTwo(float targetCreditPoint, float totalCreditInNextSemester, float previousCreditPoint, float completedCredit, float currentCGPA, float expectedCGPA){
    // check predicted CGPA
    float predictedCGPA = targetCreditPoint / totalCreditInNextSemester;

    printf("\n\n\n----- CGPA Analysis and Prediction Result -----\n\n\n");
    printf("Current CGPA: %.2f\n", currentCGPA);
    printf("Expected CGPA: %.2f\n\n\n", expectedCGPA);

    if (predictedCGPA <= 4){
        printf("You are on track to achieve your expected CGPA.\n");
        int marks = getMakFromCGPA(predictedCGPA);
        printf("But you have to get average CGPA: %.2f or %d%% above marks in each subject\n", predictedCGPA, marks);
    } else {
        float finalCPGA = ((totalCreditInNextSemester * 4) + previousCreditPoint) / completedCredit;
        printf("Sorry! Your expected CGPA is too high. You can't achieve it.\nBut if you get 80%% marks in each subject,\nYou can achieve Maximum CGPA: %.2f\n", finalCPGA);
    }
}


void processOne(Subject nextSemesterSubjects[], int numNextSemesterSubjects, float previousCreditPoint, float completedCredit, float currentCGPA, float expectedCGPA, float expectedCreditPoint) {
    float achieveCGPAPoint;
    float predictedCGPA;
    calculateTPoint(nextSemesterSubjects, numNextSemesterSubjects, &achieveCGPAPoint);

    printf("\n achieve CGPA Point %f", achieveCGPAPoint);
    float achieveCGPA = calculateCgpa(achieveCGPAPoint, previousCreditPoint, completedCredit);

    printf("\n\n\n----- CGPA Analysis and Prediction Result -----\n\n\n");
    printf("Current CGPA: %.2f\n", currentCGPA);
    printf("Expected CGPA: %.2f\n", expectedCGPA);
    printf("Achieved CGPA: %.2f\n\n", achieveCGPA);

    if (achieveCGPAPoint >= expectedCreditPoint) {
        printf("Congratulations! You are on track to achieve your expected CGPA.\n\n");
    } else {
        printf("You need to work harder to achieve your expected CGPA.\n\n");
    }

    printSubjectResult(nextSemesterSubjects, numNextSemesterSubjects);
}



void calculateTPoint(Subject subjects[], int numSubjects, float *achievedCgpa) {
    int totalCredits = 0;
    for (int i = 0; i < numSubjects; i++) {
        float achiveCredit = getCGPAFromMark(subjects[i].marks);
        totalCredits += subjects[i].credit * achiveCredit;
        subjects[i].cgpa = achiveCredit;
    }
    *achievedCgpa = totalCredits;
}


float calculateCgpa(float achievePoint, float prevAchievePoint, float totalCompletedCredit) {
    return (achievePoint + prevAchievePoint) / totalCompletedCredit;
}


void printSubjectResult(Subject subjects[], int numSubjects){
    printf("Your output in each subject \n \n");
    printf("%-25s%-20s%-10s%-10s\n", "Subject Name", "Credit", "Marks", "CGPA");
    for (int i = 0; i < numSubjects; i++) {
       printf("%-25s%-20.2f%-10d%-10.2f\n", subjects[i].name, subjects[i].credit, subjects[i].marks, subjects[i].cgpa);
    }
    printf("\n\n\n");
}

void storeDataFromUser(Subject subjects[], int numSubjects ,float *nextSemesterCredit,int process){
    printf("\n\n\nEnter details for each subject in the next semester:\n\n\n");
    for (int i = 0; i < numSubjects; i++) {
        printf("Subject %d:\n", i + 1);

        while (getchar() != '\n');  // Clear the input buffer
        printf("   Name: ");
        scanf("%s", subjects[i].name);

        while (getchar() != '\n');  // Clear the input buffer
        float credit = 0.0;
        printf("   Credit: ");
        float cred = scanf("%f", &credit);
        if (cred != 1) {
            printf("Invalid input. Please enter a valid credit.\n");
            i--;
            continue;
        }

        subjects[i].credit = credit;
        *nextSemesterCredit += credit;

        if(process == 1){
            while (getchar() != '\n');  // Clear the input buffer
            printf("   Marks (out of 100): ");
            int marks;
            int result = scanf("%d", &marks);
            if (result != 1) {
                printf("Invalid input. Please enter a valid marks.\n");
                i--;
                continue;
            }
            // printf("\n %d", result);
            if (marks <= 0 || marks >= 100) {
                printf("Invalid marks. Please enter an marks between 1 and 100.\n");
                i--;
                continue;
            }
            subjects[i].marks = marks;
        }
    }
}


float getCGPAFromMark (float mark){
    float result = 0.00;
    if(mark >= 80){
        result = 4.00;
    }else if(mark >= 75){
        result = 3.75;
    }else if(mark >= 70){
        result  = 3.50;
    }else if(mark >= 65){
        result  = 3.25;
    }else if(mark >= 60){
        result  = 3.00;
    }else if(mark >= 55){
        result  = 2.75;
    }else if(mark >= 50){
        result  = 2.50;
    }else if(mark >= 45){
        result  = 2.25;
    }else if(mark >= 40){
        result  = 2.00;
    }else{
        result = 0.00;
    }
    return result;
}

int getMakFromCGPA (float cgpa){
    float mark = 0;
      if(cgpa >= 4){
        mark = 80;
    }else if(cgpa >= 3.75){
        mark = 75;
    }else if(cgpa >= 3.50){
        mark = 70;
    }else if(cgpa >= 3.25){
        mark  = 65;
    }else if(cgpa >= 3){
        mark  = 60;
    }else if(cgpa >= 2.75){
        mark  = 55;
    }else if(cgpa >= 2.50){
        mark  = 50;
    }else if(cgpa >= 2.25){
        mark  = 45;
    } else{
        mark  = 40;
    }
    return mark;
}
