#include <iostream>
#include <iomanip>
#include <stdio.h>

using namespace std;

int main()
{
    int qtdAlcool = 0;
    int qtdGasolina = 0;
    int qtdDiesel = 0;
    int n = 0;
    while(n != 4){
        cin >> n;
        switch(n){
        case 1:
            qtdAlcool++;
            break;
        case 2:
            qtdGasolina++;
            break;
        case 3:
            qtdDiesel++;
            break;
        }
    }
    cout << "MUITO OBRIGADO" << endl;
    cout << "Alcool: " << qtdAlcool << endl << "Gasolina: " << qtdGasolina << endl << "Diesel: " << qtdDiesel << endl;
}
