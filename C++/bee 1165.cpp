#include <iostream>
#include <iomanip>
#include <stdio.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int num;
    for(int i = 0; i < n; i++){
        int contador = 0;
        cin >> num;
        for(int j = 1; j <= num; j++){
            if(num % j == 0){
                contador++;
            }
        }
        if(contador == 2){
            cout << num << " eh primo" << endl;
        } else{
            cout << num << " nao eh primo" << endl;
        }
    }
}
