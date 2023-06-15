#include <stdio.h>;

void checkPrime(int num);


void main(){
    int num, prime;

    scanf("%d", &num);

    checkPrime(num);
}


void checkPrime(int num){
    if(num == 1 || num == 2){
        printf("Number is prime");
    }
  int prime = 0;

  for(int i = 2 ; i< num; i++ ){
    if(num % i != 0){
        prime++;
    }
  }
  if(prime){
    printf("Number is prime");
  }else{
    printf("Number is not prime");
  }
}
