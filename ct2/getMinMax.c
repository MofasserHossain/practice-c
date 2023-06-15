#include <stdio.h>

void main(){
    int min = 0, max = 0, arr[100], num, i;

    printf("Enter the array size integer");

    scanf("%d", &num);

    for(i = 0; i < num ; i++){
        printf("Enter %d number", i + 1);
        scanf("%d", &arr[i]);
    }

    min = arr[0];
    max = arr[0];

    for(i = 0; i < num; i++){
        if(arr[i] > max){
           max = arr[i];
        }
        if(arr[i] < min){
           min = arr[i];
        }
        printf("You array is \t");
        printf("%d", arr[i]);
    }

    printf("\n");

    printf("Array min number is  : %d \t \n", min);
    printf("Array max number is  : %d \t \n", max);
}
