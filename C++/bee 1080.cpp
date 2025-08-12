#include <iostream>
#include <iomanip>
#include <stdio.h>

using namespace std;

int main()
{
    int n;
    int maior = 0;
    int posicao = 0;
    for(int i = 1; i <= 100; i++){
        cin >> n;
        if(n > maior){
            maior = n;
            posicao = i;
        }
    }
    cout << maior << endl << posicao << endl;
}
