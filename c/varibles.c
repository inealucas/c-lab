#include <stdio.h>
#include <stdlib.h>

int main(){
// Day 1 - Variables
int age = 18;
char sign = '$';
char letter = 'A';
float height = 1.70;
double salary = 1.500;
char name[] = "Lucas";

printf("\n-------Personal information------\n");
printf("\nName: %s",name);
printf("\nAge: %d", age);
printf("\nFavorite letter: %c", letter); 
printf("\nHeight: %.2f", height);
printf("\nSalary: %c%.3lf",sign, salary);


return 0;
}