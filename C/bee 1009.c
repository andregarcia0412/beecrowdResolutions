#include <stdio.h>

int main(void) {

    char nome[50];
    double salario, montante;

    scanf("%s %lf %lf", &nome, &salario, &montante);
    printf("TOTAL = R$ %.2lf\n", salario + montante * 0.15);

    return 0;
}
