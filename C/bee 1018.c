#include <math.h>
#include <stdio.h>

int main(void) {

    int valor;
    scanf("%d", &valor);

    int notas100 = floor(valor/100);
    int resto = valor % 100;
    int notas50 = floor(resto/50);
    resto %= 50;
    int notas20 = floor(resto/20);
    resto %= 20;
    int notas10 = floor(resto/10);
    resto %= 10;
    int notas5 = floor(resto/5);
    resto %= 5;
    int notas2 = floor(resto/2);
    resto %= 2;
    int notas1 = resto;


    printf("%d\n", valor);
    printf("%d nota(s) de R$ 100,00\n%d nota(s) de R$ 50,00\n%d nota(s) de R$ 20,00\n%d nota(s) de R$ 10,00\n%d nota(s) de R$ 5,00\n%d nota(s) de R$ 2,00\n%d nota(s) de R$ 1,00\n", notas100, notas50, notas20, notas10, notas5, notas2, notas1);

    return 0;
}
