#include <iostream>
#include <iomanip>
#include <stdio.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    float p;
    int g;
    float menorPreco = 100000;
    for(int i = 0; i < n; i++){
        cin >> p >> g;
        if(p/g < menorPreco){
            menorPreco = p/g;
        }
    }
    cout << fixed << setprecision(2) <<  menorPreco * 1000 << endl;
}
