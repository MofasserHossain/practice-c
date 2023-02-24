

#include<stdio.h>
int main(){
    // Declaring variables
    float num1,num2,sum;
    printf("Please input First Number:\t");
    scanf("%f",&num1);
    printf("Please input Second Number:\t");
    scanf("%f",&num2);
    // calculation
    sum=num1+num2;
    printf("This is two number %.2f and %.2f From user input and their sum is:%.2f+%.2f=%.2f",num1,num2,num1,num2,sum);
    return 0;
}
