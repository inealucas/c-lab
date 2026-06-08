#include <stdio.h>
#include <math.h>

int main() {

    double x = 9.0;
    double a = -7.5;

    // -------------------------
    // POTÊNCIA (pow)
    // -------------------------
    printf("pow(2, 3) = %.2lf\n", pow(2, 3));
    // 2 elevado a 3 = 2 * 2 * 2

    // -------------------------
    // RAIZ QUADRADA (sqrt)
    // -------------------------
    printf("sqrt(9) = %.2lf\n", sqrt(x));
    // raiz de 9 = 3

    // -------------------------
    // VALOR ABSOLUTO (fabs)
    // -------------------------
    printf("fabs(-7.5) = %.2lf\n", fabs(a));
    // tira o sinal negativo

    // -------------------------
    // ARREDONDAMENTOS
    // -------------------------
    printf("ceil(4.2) = %.2lf\n", ceil(4.2));
    // sempre sobe

    printf("floor(4.9) = %.2lf\n", floor(4.9));
    // sempre desce

    printf("round(4.5) = %.2lf\n", round(4.5));
    // arredonda normalmente

    return 0;
}