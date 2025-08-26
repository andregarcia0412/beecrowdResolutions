#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {

    int horaInicial, horaFinal;
    cin >> horaInicial >> horaFinal;

    if (horaFinal > horaInicial) {
        cout << "O JOGO DUROU " << horaFinal - horaInicial << " HORA(S)" << endl;
    } else {
        cout << "O JOGO DUROU " << (24 - horaInicial) + horaFinal << " HORA(S)" << endl;
    }


    return 0;
}

