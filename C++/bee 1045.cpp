#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

void bubbleSort(float arr[], int len) {
    len--;
    for (int i = 0; i < len; i++) {
        for (int j = 0; j < len; j++) {
            if (arr[j] < arr[j+1]) {
                int aux = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = aux;
            }
        }
    }
}

int main() {

    float a, b, c;
    cin >> a >> b >> c;
    float lados[] = {a,b,c};
    bubbleSort(lados,3);

    if (lados[0] >= lados[1] + lados[2]) {
        cout << "NAO FORMA TRIANGULO" << endl;
        return 0;
    } else if (pow(lados[0],2) == pow(lados[1],2) + pow(lados[2],2)) {
        cout << "TRIANGULO RETANGULO" << endl;
    } else if (pow(lados[0],2) > pow(lados[1],2) + pow(lados[2],2)) {
        cout << "TRIANGULO OBTUSANGULO" << endl;
    } else if (pow(lados[0],2) < pow(lados[1],2) + pow(lados[2],2)) {
        cout << "TRIANGULO ACUTANGULO" << endl;
    }

    int contador = 1;
    if (a == b) {
        contador++;
    }
    if (a == c) {
        contador++;
    }
    if (b == c) {
        contador++;
    }
    if (contador == 4){
        cout << "TRIANGULO EQUILATERO" << endl;
    } else if (contador == 2){
        cout << "TRIANGULO ISOSCELES" << endl;
    }

        return 0;
}

