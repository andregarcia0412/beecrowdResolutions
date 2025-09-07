#include <stdio.h>

int main(void) {

    double a,b,c;
    scanf("%lf %lf %lf", &a, &b, &c);


    printf("TRIANGULO: %.3f\nCIRCULO: %.3f\nTRAPEZIO: %.3f\nQUADRADO: %.3f\nRETANGULO: %.3f\n", ((a * c)/2), (3.14159 * c*c), ((a + b) * c / 2), (b*b), (a*b));

    return 0;
}
