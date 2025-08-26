#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

void bubbleSort(int arr[], int len) {
    len--;
    for (int i = 0; i < len; i++) {
        for (int j = 0; j < len; j++) {
            if (arr[j] > arr[j+1]) {
                int aux = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = aux;
            }
        }
    }
}

int main() {

    int a, b, c, aux;
    cin >> a >> b >> c;

    int numeros[] = {a,b,c};
    bubbleSort(numeros, 3);


    cout << numeros[0] << endl << numeros[1] << endl << numeros[2] << endl;
    cout << endl << a << endl << b << endl << c << endl;


        return 0;
}

