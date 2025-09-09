#include <math.h>
#include <stdio.h>

int main() {
    int cod;
    double quant;
    double preco = 0;
    scanf("%d %lf", &cod, &quant);

    switch (cod) {
        case 1:
            preco = 4.0;
            break;
        case 2:
            preco = 4.5;
            break;
        case 3:
            preco = 5.0;
            break;
        case 4:
            preco = 2.0;
            break;
        case 5:
            preco = 1.5;
            break;
        default:
            break;
    }

    printf("Total: R$ %.2lf\n", (preco*quant));

    return 0;
}
