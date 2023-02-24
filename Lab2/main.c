#include <stdio.h>
int main() {
    float marks[5], total = 0, average; // declaring
    int i;
    printf("Enter marks of five subjects:\n");
    for (i = 0; i < 5; i++) {
        printf("Subject %d: \t", i+1);
        scanf("%f", &marks[i]);
        total += marks[i];
    }
    average = total / 5; //  average
    printf("Total = %.2f\t\n", total);
    printf("Average = %.2f\t\n", average);
    return 0;
}





