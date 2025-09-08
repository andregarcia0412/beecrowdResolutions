#include <math.h>
#include <stdio.h>

int main(void){
    int n;
    scanf("%d", &n);
    
    int horas = floor(n/3600);
    int resto = n % 3600;
    int minutos = floor(resto/60);
    resto = resto % 60;
    int segundos = resto;
    
    printf("%d:%d:%d\n", horas, minutos, segundos);
    
    return 0;
}
