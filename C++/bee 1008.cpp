#include <stdio.h>
#include <cmath>

int main(){
    int numeroFuncionario;
    int horasTrabalhadas;
    double valorHora;
    scanf("%d %d %lf", &numeroFuncionario, &horasTrabalhadas, &valorHora);
    printf("NUMBER = %d\nSALARY = U$ %0.2lf\n", numeroFuncionario, horasTrabalhadas * valorHora);

    return 0;
}
