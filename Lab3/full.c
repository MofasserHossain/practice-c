

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


int main(){
    int num;
    /* input */
    printf("Enter an integer number: \t");
    scanf("%d", &num);
    if((num % 5 == 0) && (num % 11 == 0))
        printf("Number is divisible by 5 and 11");
    else
        printf("Number is not divisible by 5 and 11");

    return 0;
}


int main(){
    int num;
    /* input */
    printf("Enter an integer number: \t");
    scanf("%d", &num);
    if(!(num % 5) && !(num % 11))
        printf("Number is divisible by 5 and 11");
    else
        printf("Number is not divisible by 5 and 11");

    return 0;
}



#include <stdio.h>

int main() {
   int year;
   printf("Enter a year: ");
   scanf("%d", &year);
   if (year % 400 == 0) {
      printf("%d is a leap year.", year);
   } else if (year % 100 == 0) {
      printf("%d is not a leap year.", year);
   } else if (year % 4 == 0) {
      printf("%d is a leap year.", year);
   } else {
      printf("%d is not a leap year.", year);
   }
   return 0;
}



#include <stdio.h>

int main() {
    int week;
    printf("Enter week number in integer (1-7): ");
    scanf("%d", &week);
    if(week == 1){
        printf("Monday");
    }else if(week == 2){
        printf("Tuesday");
    }else if(week == 3){
        printf("Wednesday");
    }else if(week == 4){
        printf("Thursday");
    }else if(week == 5){
        printf("Friday");
    }else if(week == 6){
        printf("Saturday");
    }else if(week == 7){
        printf("Sunday");
    }else{
        printf("Invalid Input! Please enter week number between 1-7.");
    }
    return 0;
}



#include <stdio.h>
int main(){
    float angle1, angle2, angle3;
    //Take Input of angle
    printf("Enter three angles of a Triangle : \t");
    scanf("%f%f%f", &angle1, &angle2, &angle3);
    //Condition of a valid Triangle
    if (angle1 + angle2 + angle3 == 180){
        printf("This is a valid Triangle");
    }else {
        printf("This is not a valid Triangle");
    }
    return 0;
}



#include <stdio.h>
int main(){
    int n,i = 1;
    printf("Enter a integer number \t:");
    scanf("%d", &n);
    while(i <= n){
        printf("Number = %d \n", i);
        i+=2;
    }
    return 0;
}


#include <stdio.h>
int main(){
    int n,i = 1;
    printf("Enter a integer number \t:");
    scanf("%d", &n);
    while(i <= n){
        printf("Number = %d \n", i);
        i+=2;
    }
    return 0;
}



// do while

#include <stdio.h>
int main(){
    int sum = 0,num, i = 1;
    do{
        printf("Enter a %d integer number \t:", i);
        scanf("%d", &num);
        sum += num;
        i++;
    } while(i<=10);
    printf("Result %d", sum);
    return 0;
}



// reverse
#include <stdio.h>
int main(){
    int reverse = 0, num, n;
    printf("Enter an integer number \t:");
    scanf("%d", &num);
    do{
        n = num % 10;
        reverse = reverse * 10 + n;
        num = num / 10;
    } while(num != 0);
    printf("Result %d", reverse);
    return 0;
}


// count

#include <stdio.h>
int main(){
    int digit = 2, num, n, count = 0;
    printf("Enter an integer number \t:");
    scanf("%d", &num);
    do{
        n = num % 10;
        printf("%d", n);
        if(n == digit){
            count++;
        }
        num = num / 10;
    } while(num != 0);
    printf("Result %d", count);
    return 0;
}
