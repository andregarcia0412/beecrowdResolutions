#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    int n;
    cin >> n;

    int notas100 = floor(n/100);
    int resto = n % 100;
    int notas50 = floor(resto/50);
    resto %= 50;
    int notas20 = floor(resto/20);
    resto %= 20;
    int notas10 = floor(resto/10);
    resto %= 10;
    int notas5 = floor(resto / 5);
    resto %= 5;
    int notas2 = floor(resto/2);
    resto %= 2;
    int notas1 = floor(resto);

    cout << n << endl << notas100 << " nota(s) de R$ 100,00" << endl << notas50 << " nota(s) de R$ 50,00" << endl << notas20 << " nota(s) de R$ 20,00" << endl << notas10 << " nota(s) de R$ 10,00" << endl << notas5 << " nota(s) de R$ 5,00" << endl << notas2 << " nota(s) de R$ 2,00" << endl << notas1 << " nota(s) de R$ 1,00" << endl;


    return 0;
}
