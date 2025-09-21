#include <stdio.h>
#include <math.h>
void bubbleSort(float arr[], int length) {
    for (int i = 0; i < length-1; i++) {
        for (int j = 0; j < length-1; j++) {
            if (arr[j] < arr[j+1]) {
                float aux = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = aux;
            }
        }
    }
}


int main(void) {

    float a,b,c;
    scanf("%f %f %f", &a, &b, &c);
    float lados[] = {a,b,c};
    bubbleSort(lados,3);

    if (lados[0] >= lados[1] + lados[2]) {
        printf("NAO FORMA TRIANGULO\n");
        return 0;
    } else if (pow(lados[0],2) == pow(lados[1],2) + pow(lados[2],2)) {
        printf("TRIANGULO RETANGULO\n");
    } else if (pow(lados[0],2) > pow(lados[1],2) + pow(lados[2],2)) {
        printf("TRIANGULO OBTUSANGULO\n");
    } else if (pow(lados[0],2) < pow(lados[1],2) + pow(lados[2],2)) {
        printf("TRIANGULO ACUTANGULO\n");
    }

    int contador = 0;
    if (a == b) {
        contador++;
    }
    if (a == c) {
        contador++;
    }
    if (b == c) {
        contador++;
    }
    if (contador == 3) {
        printf("TRIANGULO EQUILATERO\n");
    } else if (contador == 1) {
        printf("TRIANGULO ISOSCELES\n");
    }

    return 0;
}
