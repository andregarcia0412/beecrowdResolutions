#include <iostream>
using namespace std;

int maior(int a, int b) {
    if(a > b) {
        return a;
    }

    return b;
}

int main() {
    int a,b;
    cin >> a >> b;
    cout <<  maior(a,b) << endl;
    return 0;
}
