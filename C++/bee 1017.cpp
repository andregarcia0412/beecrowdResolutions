#include <stdio.h>
#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
using namespace std;

int main(){
    double tempo;
    double velMedia;
    cin >> tempo >> velMedia;
    cout << fixed << setprecision(3) << (tempo * velMedia) / 12 << endl;
    return 0;
}
