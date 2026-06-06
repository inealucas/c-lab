#include <stdio.h>
#include <math.h>

int main() {

double Squareroot = 0.0;
double cube = 0.0;
double number = 0.0;
double square = 0.0;
double absolute = 0.0;
double rounded = 0.0;

printf("----- MATH.H PRACTICE -----\n");

printf("Enter a number: ");
scanf("%lf", &number);

absolute = fabs(number);
rounded = round(number);
square = pow(number, 2);
cube  = pow(number, 3);



printf("\nABSOLUTE VALUE: %.2lf", absolute);
printf("\nROUNDED VALUE: %.lf", rounded);
printf("\nSQUARE: %.2lf", square);
printf("\nCUBE: %.2lf", cube);


 if (number >= 0){
 Squareroot = sqrt(number);
printf("\nSQUARE ROOT: %.2lf", Squareroot);
 } else {
    printf("\nCannot calculated the square root");
}

    return 0;
}