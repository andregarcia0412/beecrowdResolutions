#include <stdio.h>

int main(void) {

    int cod1;
    double num1;
    double valor1;

    double cod2;
    double num2;
    double valor2;

    scanf("%d %lf %lf %d %lf %lf", &cod1, &num1, &valor1, &cod2, &num2, &valor2);

    printf("VALOR A PAGAR: R$ %.2lf\n", (num1 * valor1 + num2 * valor2));

    return 0;
}
