#include <stdio.h>
#include <math.h>

int main () {

double principal = 0.0;
double rate = 0.0;
int years = 0;
int timesCompunded = 0;
double total = 0;

printf("\n-----Compund interest calculator-----\n");

printf("Enter the principal (P): ");
scanf("%lf", &principal);

printf("Enter the interest rate % (r): ");
scanf("%lf", &rate);
rate = rate / 100;

printf("Enter the # of years (t): ");
scanf("%d", &years);

printf("Enter # of times compound per year(n): ");
scanf("%d", &timesCompunded);

total = principal * pow(1 + rate / timesCompunded, timesCompunded * years);

printf("After %d years, the total will be R$%.2lf", years, total);

    return 0;
}