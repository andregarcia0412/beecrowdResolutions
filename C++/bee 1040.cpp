#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    float n1, n2, n3, n4;
    cin >> n1 >> n2 >> n3 >> n4;

    float media = (n1 * 2 + n2 * 3 + n3 * 4 + n4) / 10;
    cout << fixed << setprecision(1) << "Media: " << media << endl;
    if (media >= 7) {
        cout << "Aluno aprovado." << endl;
    } else if (media < 5) {
        cout << "Aluno reprovado." << endl;
    } else if (media >= 5 && media <= 6.9){
        cout << "Aluno em exame." << endl;
        float n5;
        cin >> n5;
        cout << "Nota do exame: " << n5 << endl;
        if ((n5 + media) / 2 >= 5) {
            cout << fixed << setprecision(1) << "Aluno aprovado." << endl << "Media final: " << (n5 + media) / 2 << endl;
        } else {
            cout << fixed << setprecision(1) << "Aluno reprovado." << endl << "Media final: " << (n5 + media) / 2 << endl;
        }

    }

    return 0;
}
