#include <iostream>
#include <iomanip>
#include <stdio.h>

using namespace std;

int main()
{
    float n;
    int qtdPositivos = 0;
    float soma = 0;

    for(int i = 0; i < 6; i++){
        cin >> n;
        if(n > 0){
            soma += n;
            qtdPositivos++;
        }
    }
    cout << qtdPositivos << " valores positivos" << endl;
    cout << fixed << setprecision(1) << soma/qtdPositivos << endl;


    return 0;
}
