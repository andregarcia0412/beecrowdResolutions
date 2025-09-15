#include <iostream>
#include <iomanip>
#include <cmath>
#include <stdio.h>

using namespace std;

int main() {

    int diaInicial, horaInicial, minutoInicial, segundoInicial, diaFinal, horaFinal, minutoFinal, segundoFinal;

    scanf("Dia %d %d : %d : %d Dia %d %d : %d : %d", &diaInicial, &horaInicial, &minutoInicial, &segundoInicial, &diaFinal, &horaFinal, &minutoFinal, & segundoFinal);
    int diferencaDias = (diaFinal - diaInicial) * 24 * 3600;
    int diferencaHoras = (horaFinal - horaInicial) * 3600;
    int diferencaMinutos = (minutoFinal - minutoInicial) * 60;
    int diferencaSegundos = (segundoFinal - segundoInicial);

    int soma = diferencaDias + diferencaHoras + diferencaMinutos + diferencaSegundos;

    int dias = floor(soma/(24*3600));
    int resto = soma % (24*3600);
    int horas = floor(resto/3600);
    resto %= 3600;
    int minutos = floor(resto/60);
    resto %= 60;
    int segundos = resto;

    printf("%d dia(s)\n%d hora(s)\n%d minuto(s)\n%d segundo(s)\n", dias,horas,minutos,segundos);

    return 0;

}


