#include <stdio.h>
#include <cmath>

int main(){
    float a;
    float b;
    scanf("%f", &a);
    scanf("%f", &b);
    a *= 3.5;
    b *= 7.5;

    double media = (a + b)/11;
    printf("MEDIA = %0.5lf\n", media);

    return 0;
}
