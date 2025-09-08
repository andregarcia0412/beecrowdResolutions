#include <math.h>
#include <stdio.h>

int main() {
    double n;
    scanf("%lf", &n);
    n *= 100;

    printf("NOTAS:\n");

    int notas100 = floor(n/10000);
    int resto = fmod(n, 10000);
    int notas50 = floor(resto/5000);
    resto %= 5000;
    int notas20 = floor(resto/2000);
    resto %= 2000;
    int notas10 = floor(resto/1000);
    resto %= 1000;
    int notas5 = floor(resto / 500);
    resto %= 500;
    int notas2 = floor(resto/200);
    resto %= 200;

    printf("%d nota(s) de R$ 100.00\n%d nota(s) de R$ 50.00\n%d nota(s) de R$ 20.00\n%d nota(s) de R$ 10.00\n%d nota(s) de R$ 5.00\n%d nota(s) de R$ 2.00\n", notas100, notas50, notas20, notas10, notas5, notas2);

    printf("MOEDAS:\n");

    int moedas1 = floor(resto/100);
    resto %= 100;
    int moedas50 = floor(resto/50);
    resto %= 50;
    int moedas25 = floor(resto/25);
    resto %= 25;
    int moedas10 = floor(resto/10);
    resto %= 10;
    int moedas5 = floor(resto/5);
    resto %= 5;
    int moedas01 = resto;


    printf("%d moeda(s) de R$ 1.00\n%d moeda(s) de R$ 0.50\n%d moeda(s) de R$ 0.25\n%d moeda(s) de R$ 0.10\n%d moeda(s) de R$ 0.05\n%d moeda(s) de R$ 0.01\n", moedas1, moedas50, moedas25, moedas10, moedas5, moedas01);
    return 0;
}
