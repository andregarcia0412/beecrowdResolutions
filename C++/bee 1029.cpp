#include <iostream>
using namespace std;

int fib(int n) {
    if(n == 0) {
        return 0;
    }

    if(n == 1){
        return 1;
    }

    return fib(n - 1) + fib(n - 2);
}

int calcularChamadas (int n) {
    if(n == 0) {
        return 1;
    }

    if(n == 1) {
        return 1;
    }

    return calcularChamadas(n - 1) + calcularChamadas(n - 2) + 1;
}

int main() {
    
    int n;
    cin >> n;

    for(int i = 0; i < n; i++) {
        int a;
        cin >> a;
        cout << "fib(" << a << ")" << " = " << calcularChamadas(a)-1 << " calls = " << fib(a) << endl;
    }
    return 0;
}
