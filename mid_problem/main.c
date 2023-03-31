#include <stdio.h>

/*
void main () {
    char ch;
    printf("Enter a value \t");
    scanf("%c", &ch);

    if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')){
        if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
            printf("This is a vowel");
        else
            printf("This is a consonent");
    }else if(ch >= '0' && ch <= '9'){
        printf("This is a digit value");
    }else {
        printf("This is a special character");
    }
}
*/

/*
void main(){
    int year;
   printf("Enter a year: ");
   scanf("%d", &year);

   if (((year % 4 == 0) && (year % 100!= 0)) || (year % 400 == 0))
      printf("%d is a leap year", year);
   else
      printf("%d is not a leap year", year);
}
*/
/*
void main() {
  int j = 0,sum = 0, c = 0;
  for(int i = 7; j <= 3; i = j * 12){
  	sum = sum + i;
    c += sum * sum;
    j++;
  	printf("\n");
  }
  printf("sum = %d, c = %d\n", sum, c);
}
*/

/*
void main () {
    int number_of_days, years, months, days;

    // Reading number of days from user
    printf("Enter number of days: ");
    scanf("%d", &number_of_days);

    // Calculating years
    years = number_of_days / 365;

    // Calculating months
    months = (number_of_days - years * 365) / 30;

    // Calculating days
    days = (number_of_days - years * 365 - months * 30);

    // Displaying results
    printf("Output = %dYears %dMonths %dDays", years, months, days);
}
*/

/*
void main() {
  int i, n, t_1 = 0, t_2 = 1, nextTurn = 0;

  nextTurn = t_1 + t_2;

  printf("Enter the number for turn : ");
  scanf("%d", &n);

  printf("Fibonacci Series %d, %d, ", t_1, t_2);


  for(i = 3 ; i <= n ; ++i){
    printf("%d, ", nextTurn);
    t_1 = t_2;
    t_2 = nextTurn;
    nextTurn = t_1 + t_2;
  }
}
*/

/*
void main() {
    int i, j, rows;
   printf("Enter the number of rows: ");
   scanf("%d", &rows);
   for (i = 1; i <= rows; ++i) {
      for (j = 1; j <= i; ++j) {
         printf("%d ", j);
      }
      printf("\n");
   }
}
*/


/*
void main() {
    int i, j, rows;
   printf("Enter the number of rows: ");
   scanf("%d", &rows);
   for (i = rows; i >= 1; i--) {
      for (j = 1; j <= i; j++) {
         printf("%d ", j);
      }
      printf("\n");
   }
}
*/


/*
int main(){
    float fah, cels; // declaring
    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &fah);
    cels = (fah - 32) * 5 / 9; // calcuation
    printf("Temperature in Celsius = %.2f°C\n", cels);
    return 0;
}
*/

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
