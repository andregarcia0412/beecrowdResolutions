#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    for(int i = 0; i < n; i++) {
        string palavra;
        cin >> palavra;

        cout << fixed << setprecision(2) << palavra.length()/100.0 << endl;
    }
    
    return 0;
}
