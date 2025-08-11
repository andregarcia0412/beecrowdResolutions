#include <iostream>
#include <iomanip>
#include <stdio.h>

using namespace std;

int main()
{
    int x, y;
    int soma = 0;
    cin >> x >> y;
    if(x > y){
        int aux = x;
        x = y;
        y = aux;
    }
    for(int i = x+1; i < y; i++){
        if(i % 2 != 0){
            soma += i;
        }
    }
    cout << soma << endl;
}
