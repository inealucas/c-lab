#include <stdio.h>
#include <math.h>

int main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    printf("Square: %.0f\n", pow(number, 2));

    return 0;
}