#include <stdio.h>

int main () {
    // int i = 22;
    /*
    if(i > 20)
        printf("i is greater than 20 \n");
    else
        printf("I am not in if \n");
        */
        /*
    int a, b, c;
    printf("Enter three integer number: \t");
    scanf("%d %d %d", &a, &b, &c);
    if(a > b && a> c)
        printf("%d is largest \n", a);
    if(b > a && b >c)
        printf("%d is largest \n", b);
    if(c > a && c>b)
        printf("%d is largest \n", c);
    if(a == b && a == c)
        printf("All are equal \n");
        */

    /*
    int a;
    printf("Enter an interger Number : \t");
    scanf("%d", &a);

    // true if the remainder is 0
    if(a %2 == 0)
        printf("%d number is a even number", a);
    else
        printf("%d number is a odd number");
    */
    int age;
    printf("Enter your age: \t");
    scanf("%d", &age);
    if(age >= 18)
        printf("You are eligible to vote");
    else
        printf("Sorry... you can't vote");


    return 0;
}
