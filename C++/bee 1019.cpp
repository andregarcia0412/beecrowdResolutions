#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    int n;
    cin >> n;

    int horas = floor(n/3600);
    int restoHoras = n % 3600;
    int minutos = floor(restoHoras/60);
    int restoMinutos = floor(restoHoras % 60);
    int segundos = restoMinutos;

    cout << horas << ":" << minutos << ":" << segundos << endl;

    return 0;
}
