#include <iostream>
#include <iomanip>
#include <stdio.h>
#include <vector>

using namespace std;

void bubbleSort(string arr[], int n){
    for(int i = 0; i < n-1; i++){
        for(int j = 0; j < n-1; j++){
            if(arr[j] > arr[j+1]){
                string temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main()
{
    int qtdC = 0;
    int qtdNC = 0;
    int numCriancas;
    cin >> numCriancas;
    string arrCriancas[numCriancas];
    for(int i = 0; i < numCriancas; i++){
        string sinal, nome;
        cin >> sinal >> nome;
        if(sinal == "+"){
            qtdC++;
        }else if(sinal == "-"){
            qtdNC++;
        }
        arrCriancas[i] = nome;
    }
    bubbleSort(arrCriancas, numCriancas);
    for(int i = 0; i < numCriancas; i++){
        cout << arrCriancas[i] << endl;
    }
    cout << "Se comportaram: " << qtdC << " | " << "Nao se comportaram: " << qtdNC << endl;
}
