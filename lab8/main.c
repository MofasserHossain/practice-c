#include <stdio.h>
#include <stdlib.h>

void main() {
    int num;
    FILE *fptr;

    fptr = fopen("program.txt", "r");


    if(fptr == NULL){
        printf("Error!");
        exit(1);
    }

    fscanf(fptr, "%d", &num);

    printf("Enter num :  %d", num);
    //scanf("%d", &num);

    fclose(fptr);
}
