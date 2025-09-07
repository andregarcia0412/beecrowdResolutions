#include <stdio.h>

int main(void) {

    int num, horasTrabalhadas;
    float valorHora;
    scanf("%d %d %f", &num, &horasTrabalhadas, &valorHora);
    printf("NUMBER = %d\nSALARY = U$ %.2f\n", num, horasTrabalhadas * valorHora);

    return 0;
}
