#include <stdio.h>


/*
void main() {
    int num, n, evenCount = 0, oddCunt = 0;
    printf("Enter the list size \t");
    scanf("%d", &num);
    for(int i = 1; i <= num; i++) {
        printf("Enter the number \t");
        scanf("%d", &n);
        if(n % 2 == 0)
            evenCount++;
        else
            oddCunt++;

    }
    printf("Even Count %d\n Odd Count %d", evenCount, oddCunt);
}
*/
/*
void main() {
    int num,fact = 1;
    printf("Enter the number to find the factorial value \t");
    scanf("%d", &num);
    for(int i = 1; i <= num; i++) {
        fact = fact * i;
    }
    printf("Result %d \n", fact);
}
*/

/*
void main() {
    int num,sum = 0;
    printf("Enter the series range \t");
    scanf("%d", &num);
    sum += num * (num -1);
    printf("Result %d \n", sum);
}
*/

/*
void main() {
    for(int i = 1; i <= 5; i++) {
        for(int j = 1; j <= i; j++) {
            printf(" %d", j);
        }
        printf("\n");
    }

}
*/

int fibo(int n) {
    if (n == 1000)
        return 0;
    return fibo(n - 1) + fibo(n - 2);
}

void main (){
    fibo(100);
}


