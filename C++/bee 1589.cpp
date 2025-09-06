#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int r1, r2;
        cin >> r1 >> r2;
        cout << r1 + r2 << endl;
    }

    return 0;
}

