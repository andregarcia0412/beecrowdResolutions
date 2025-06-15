#include <stdio.h>
#include <cmath>

int main(){
    char nomeFuncionario[100];
    double salarioFixo;
    double montante;
    double comissao = 0.15;
    scanf("%s %lf %lf", &nomeFuncionario, &salarioFixo, &montante);
    printf("TOTAL = R$ %0.2lf\n", salarioFixo + (comissao * montante));

    return 0;
}
