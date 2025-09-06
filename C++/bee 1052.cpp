#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {

    string meses[] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};

    int n;
    cin >> n;

    cout << meses[n-1] << endl;


    return 0;
}

