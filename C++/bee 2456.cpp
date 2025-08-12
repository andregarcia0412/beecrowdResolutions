#include <iostream>
#include <iomanip>
#include <stdio.h>

using namespace std;

int main()
{
    int arr[5];
    int n;
    int qtdCrescente = 0;
    int qtdDecrescente = 0;

    for(int i = 0; i < 5; i++){
        cin >> n;
        arr[i] = n;
    }
    for(int i = 0; i < 4; i++){
        if(arr[i] < arr[i+1]){
            qtdCrescente++;
        }
        if(arr[i] > arr[i+1]){
            qtdDecrescente++;
        }
    }
    if(qtdCrescente == 4){
        cout << "C" << endl;
    } else if(qtdDecrescente == 4){
        cout << "D" << endl;
    } else{
        cout << "N" << endl;
    }
}
