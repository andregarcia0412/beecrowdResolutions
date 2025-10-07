#include <stdio.h>
#include <math.h>

int main(void) {

    int qtdPositivos = 0;
    for (int i = 0; i < 6; i++) {
        double n;
        scanf("%lf", &n);
        if (n > 0) {
            qtdPositivos++;
        }
    }

    printf("%d valores positivos\n", qtdPositivos);

    return 0;
}
