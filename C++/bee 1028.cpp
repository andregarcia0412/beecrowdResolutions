#include <iostream>
using namespace std;

int calcularMdc(int a, int b) {
    if(b == 0) {
        return a;
    }

    return calcularMdc(b, a%b);
}

int main() {
    
    int n;
    cin >> n;

    for(int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;
        cout << calcularMdc(a,b) << endl;
    }
    return 0;
}
