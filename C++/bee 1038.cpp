#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    int cod, qtd;
    float preco;
    cin >> cod >> qtd;

    switch (cod) {
        case 1:
            preco = 4.0;
            break;
        case 2:
            preco = 4.5;
            break;
        case 3:
            preco = 5.0;
            break;
        case 4:
            preco = 2.0;
            break;
        case 5:
            preco = 1.5;
            break;
    }

    cout << fixed << setprecision(2) << "Total: R$ " << preco*qtd << endl;

    return 0;
}
