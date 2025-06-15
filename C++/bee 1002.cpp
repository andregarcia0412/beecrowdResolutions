#include <stdio.h>
#include <cmath>

int main(){
    double pi = 3.14159;
    double raio;
    scanf("%lf", &raio);
    printf("A=%0.4lf\n", pi * pow(raio,2));

    return 0;
}
