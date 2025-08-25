#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    double a, b, c;
    cin >> a >> b >> c;
    if (a == 0) {
        cout << "Impossivel calcular" << endl;
        return 0;
    }

    double delta = (b * b) - (4 * a * c);
    if (delta < 0) {
        cout << "Impossivel calcular" << endl;
        return 0;
    }
    double r1 = (-b + sqrt(delta)) / (2 * a);
    double r2 = (-b - sqrt(delta)) / (2 * a);

    cout << fixed << setprecision(5) << "R1 = " << r1 << endl << "R2 = " << r2 << endl;

    return 0;
}
