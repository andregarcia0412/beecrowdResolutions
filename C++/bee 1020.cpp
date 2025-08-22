#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    int n;
    cin >> n;
    int anos = floor(n/365);
    int restoAnos = n % 365;
    int meses = floor(restoAnos / 30);
    int restoMeses = restoAnos % 30;
    int dias = restoMeses;

    cout << anos << " ano(s)" << endl << meses << " mes(es)" << endl << dias << " dia(s)" << endl;

    return 0;
}
