#include <iostream>
using namespace std;

int getMaior(int arr[], int arrayLen) {
    int maior = arr[0];
    for(int i = 0; i < arrayLen; i++) {
        if(arr[i] > maior) {
            maior = arr[i];
        }
    }

    return maior;
}

int main() {
    int n;
    while(cin >> n) {
        int velocidades[n];
        for(int i = 0; i < n; i++) {
            int v;
            cin >> v;
            velocidades[i] = v;
        }

        int maior = getMaior(velocidades, n);

        if(maior < 10) {
            cout << 1 << endl;
        } else if(maior < 20) {
            cout << 2 << endl;
        } else {
            cout << 3 << endl;
        }
    }
    return 0;
}
