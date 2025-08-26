#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {

    int horaInicial, minutoInicial, horaFinal, minutoFinal;
    cin >> horaInicial >>  minutoInicial >> horaFinal >> minutoFinal;

    int inicio = 60 * horaInicial + minutoInicial;
    int fim = 60 * horaFinal + minutoFinal;
    int duracao = fim - inicio;

    if (duracao <= 0) {
        duracao += 24 * 60;
    }

    int horas = floor(duracao/60);
    int minutos = duracao % 60;

    cout << "O JOGO DUROU " << horas << " HORA(S) E " << minutos << " MINUTO(S)" << endl;

    return 0;
}

