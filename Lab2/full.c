 #include <stdio.h>

 int main(){
  return 0;
 }

/*
int main() {
    float sub1, sub2, sub3, sub4, sub5, total = 0, average; // declaring
    int i;
    printf("Enter marks of five subjects:\n");
    printf("Subject one:\t");
	scanf("%f", &sub1);
	printf("Subject two:\t");
	scanf("%f", &sub2);
    printf("Subject three:\t");
	scanf("%f", &sub3);
	printf("Subject four:\t");
	scanf("%f", &sub4);
    printf("Subject five:\t");
	scanf("%f", &sub5);
	total = sub1 + sub2 + sub3 + sub4 + sub5; // sum
    average = total / 5; //  average
    printf("Total = %.2f\t\n", total);
    printf("Average = %.2f\t\n", average);
    return 0;
}
*/

/*

int main() {
    int num1, num2; // declaring variables
    printf("Enter two integer numbers: ");
    scanf("%d %d", &num1, &num2); // taking data
    // assigning
    int sum = num1 + num2;
    int subtraction = num1 - num2;
    int product = num1 * num2;
    float divide = (float)num1 / num2; // cast to float for accurate division
    int mod = num1 % num2;
    printf("Sum: %d\n", sum);
    printf("Subtraction: %d\n", subtraction);
    printf("Product: %d\n", product);
    printf("Divide: %f\n", divide);
    printf("Modulus: %d\n", mod);
    return 0;
}
*/


/*
#include <stdio.h>
#define PI 3.1416
int main() {
    float radius, area, circumference; // declaring variable
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius); // input
    area = PI * radius * radius;  //  area
    circumference = 2 * PI * radius;  // circumference
    printf("Area of the circle = %.2f\n", area);
    printf("Circumference of the circle = %.2f\n", circumference);
    return 0;
}

 */

/*
int main() {
    float cm, m, km; // declaring variable
    printf("Enter value in centimeters: ");
    scanf("%f", &cm);
    m = cm / 100; // meter
    km = cm / 100000; // kelometer
    printf("Result in meters = %.2f m\n", m);
    printf("Result in kilometers = %.2f km\n", km);
    return 0;
}
 */

/*
int main() {
    float height, width, area; // declaring variables
    printf("Enter height of the rectangle: \t");
    scanf("%f", &height); // input
    printf("Enter width of the rectangle: \t");
    scanf("%f", &width);
    area = height * width; // area
    printf("Area of the rectangle = %.2f\n", area);
    return 0;
}
*/

/*
#include <stdio.h>
int main() {
    float side, area; // declaring variables
    printf("Enter the length of one side of the square: \t");
    scanf("%f", &side);
    area = side * side; // area of the squire
    printf("Area of the square = %.2f\n", area);
    return 0;
}
 */

/*
#include <stdio.h>
int main() {
    float celc, fahr;
    printf("Enter temperature in Celsius: ");
    scanf("%f", &celc);
    fahr = (celc * 9 / 5) + 32;
    printf("Temperature in Fahrenheit = %.2f°F\n", fahr);
    return 0;
}
*/

/*

#include <stdio.h>
int main() {
    float fah, cels; // declaring
    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &fah);
    cels = (fah - 32) * 5 / 9; // calcuation
    printf("Temperature in Celsius = %.2f°C\n", cels);
    return 0;
}

 */
