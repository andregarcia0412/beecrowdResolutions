#include <math.h>
#include <stdio.h>

int main(void) {

    double tempo, velMedia;
    scanf("%lf %lf", &tempo, &velMedia);
    printf("%.3lf\n", tempo*velMedia/12);

    return 0;
}
