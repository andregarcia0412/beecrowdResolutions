#include <stdio.h>
#include <cmath>

int main(){
    double a;
    double b;
    double c;
    scanf("%lf", &a);
    scanf("%lf", &b);
    scanf("%lf", &c);
    a *= 2;
    b *= 3;
    c *= 5;

    double media = (a + b + c)/10;
    printf("MEDIA = %0.1lf\n", media);

    return 0;
}
