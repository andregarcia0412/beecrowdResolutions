#include <stdio.h>

int main(){
    int cod1;
    int qtd1;
    double valor1;
    int cod2;
    int qtd2;
    double valor2;

    scanf("%d %d %lf %d %d %lf", &cod1, &qtd1, &valor1, &cod2, &qtd2, &valor2);
    printf("VALOR A PAGAR: R$ %0.2lf\n", qtd1 * valor1 + qtd2 * valor2);

    return 0;
}
