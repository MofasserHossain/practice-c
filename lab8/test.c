#include <stdio.h>


void main()

{
    int n = 9;

int i, j;

for(i=1; i<=n; i+=2)

{

for(j=1; j<=(n-i)/2; j++){

printf(" ");

}

for(j=1; j<=i; j++){

printf("*");

}

printf("\n");

}

return 1;

}
