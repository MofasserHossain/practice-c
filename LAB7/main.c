#include <stdio.h>

struct studentadress {
    char street[20];
    int road;
    int stateNum;
   // char country;
};

struct Person {
    //char name[50];
    //int age;
    //char gender[10];
    //float salary;
    //struct studentadress studenAddress;
   // int n;
    // int arr[200];
};


struct Student {
    char name[50];
    int roll;
    struct studentadress studentAddress;
};

struct Rect {
    int lenght;
    int breadth;
};

struct EvenOdd {
    int a;
    int b;
    int result;
};

void main() {
    /*
    struct EvenOdd myEvenOdd;

    //printf("Enter the value of lenght");
    printf("Enter first number");
    scanf("%d", &myEvenOdd.a);

    printf("Enter second number");
    scanf("%d", &myEvenOdd.b);

    myEvenOdd.result = myEvenOdd.a + myEvenOdd.b;

    if(myEvenOdd.result % 2 == 0)
        printf("Even");
    else
        printf("Odd");
*/

/*
    struct Person rasel;
    printf("Enter your array size:");
    scanf("%d", &rasel.n);

    for(int i =0 ; i < rasel.n; i++){
        scanf("%d", &rasel.arr[i]);
    }

    for(int i =0 ; i < rasel.n; i++){
        printf("%d ", rasel.arr[i]);
    }
    */

    struct Student newStudent;

    printf("Enter student name, roll number, street name, house number, and state number \n");

    scanf("%s %d %s %d %d", newStudent.name, &newStudent.roll, newStudent.studentAddress.street, &newStudent.studentAddress.road, &newStudent.studentAddress.stateNum);


    printf("Name: %s \nRoll no: %d\nstreet name: %s\nhouse number: %d\nstate number: %d",  newStudent.name, newStudent.roll, newStudent.studentAddress.street, newStudent.studentAddress.road, newStudent.studentAddress.stateNum);
}
