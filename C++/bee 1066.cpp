#include <iostream>
#include <iomanip>
#include <stdio.h>

using namespace std;

int main()
{
    int n;
    int qtdPares = 0;
    int qtdImpares = 0;
    int qtdPositivos = 0;
    int qtdNegativos = 0;
    for(int i = 0; i < 5; i++){
        cin >> n;
        if(n % 2 == 0){
            qtdPares++;
        } else{
            qtdImpares++;
        }
        if(n > 0){
            qtdPositivos++;
        } else if(n < 0){
            qtdNegativos++;
        }
    }
    cout << qtdPares << " valor(es) par(es)" << endl << qtdImpares << " valor(es) impar(es)" << endl << qtdPositivos << " valor(es) positivo(s)" << endl << qtdNegativos << " valor(es) negativo(s)" << endl;
}
