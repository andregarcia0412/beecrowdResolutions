#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    float salario;
    cin >> salario;
    float imposto = 0;
    if (salario >= 0 && salario <= 2000) {
        cout << "Isento" << endl;
        return 0;
    } else if (salario > 2000 && salario <= 3000) {
        imposto = (salario - 2000) * 0.08;
    } else if (salario > 3000 && salario <= 4500) {
        imposto = 1000 * 0.08 + (salario - 3000) * 0.18;
    } else if (salario > 4500) {
        imposto = 1000 * 0.08 + 1500 * 0.18 + (salario - 4500) * 0.28;
    }

    cout << fixed << setprecision(2) << "R$ " << imposto << endl;


    return 0;
}

