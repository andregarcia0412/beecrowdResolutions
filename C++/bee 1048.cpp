#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {

    float salario, novoSalario;
    int reajuste;
    cin >> salario;

    if (salario >= 0 && salario <= 400) {
        novoSalario = salario * 1.15;
        reajuste = 15;
    } else if (salario > 400 && salario <= 800) {
        novoSalario = salario * 1.12;
        reajuste = 12;
    } else if (salario > 800 && salario <= 1200) {
        novoSalario = salario * 1.10;
        reajuste = 10;
    } else if (salario > 1200 && salario <= 2000) {
        novoSalario = salario * 1.07;
        reajuste = 7;
    } else if (salario > 2000) {
        novoSalario = salario * 1.04;
        reajuste = 4;
    }

    cout << fixed << setprecision(2) << "Novo salario: " << novoSalario << endl << "Reajuste ganho: " << novoSalario-salario << endl << "Em percentual: " << reajuste << " %" << endl;

        return 0;
}

