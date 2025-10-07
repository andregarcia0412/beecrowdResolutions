#include <stdio.h>
#include <math.h>

int main(void) {

    int qtdPositivos = 0;
    double soma = 0;
    for (int i = 0; i < 6; i++) {
        double n;
        scanf("%lf", &n);
        if (n > 0) {
            qtdPositivos++;
            soma += n;
        }
    }

    printf("%d valores positivos\n%.1lf\n", qtdPositivos, soma/qtdPositivos);

    return 0;
}
