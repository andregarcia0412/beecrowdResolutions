#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    float n;
    cin >> n;
    n *= 100;

    cout << "NOTAS:" << endl;

    int notas100 = floor(n/10000);
    int resto = fmod(n, 10000);
    int notas50 = floor(resto/5000);
    resto %= 5000;
    int notas20 = floor(resto/2000);
    resto %= 2000;
    int notas10 = floor(resto/1000);
    resto %= 1000;
    int notas5 = floor(resto / 500);
    resto %= 500;
    int notas2 = floor(resto/200);
    resto %= 200;

    cout << notas100 << " nota(s) de R$ 100.00" << endl << notas50 << " nota(s) de R$ 50.00" << endl << notas20 << " nota(s) de R$ 20.00" << endl << notas10 << " nota(s) de R$ 10.00" << endl << notas5 << " nota(s) de R$ 5.00" << endl << notas2 << " nota(s) de R$ 2.00" << endl;

    cout << "MOEDAS:" << endl;

    int moedas1 = floor(resto/100);
    resto %= 100;
    int moedas50 = floor(resto/50);
    resto %= 50;
    int moedas25 = floor(resto/25);
    resto %= 25;
    int moedas10 = floor(resto/10);
    resto %= 10;
    int moedas5 = floor(resto/5);
    resto %= 5;
    int moedas01 = resto;

    cout << moedas1 << " moeda(s) de R$ 1.00" << endl << moedas50 << " moeda(s) de R$ 0.50" << endl << moedas25 << " moeda(s) de R$ 0.25" << endl << moedas10 << " moeda(s) de R$ 0.10" << endl << moedas5 << " moeda(s) de R$ 0.05" << endl << moedas01 << " moeda(s) de R$ 0.01" << endl;
    return 0;
}
