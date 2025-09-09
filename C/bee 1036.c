#include <stdio.h>
#include <math.h>

int main(void) {

    double a, b, c;
    scanf("%lf %lf %lf", &a, &b, &c);
    double delta = pow(b,2) - (4 * a * c);

    if (a != 0 && delta >= 0) {
        double R1 = (-b + sqrt(delta))/(2*a);
        double R2 = (-b - sqrt(delta))/(2*a);

        printf("R1 = %.5lf\nR2 = %.5lf\n", R1, R2);
    } else {
        printf("Impossivel calcular\n");
    }



    return 0;
}
