#include <iostream>
#include <iomanip>
#include <stdio.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int qtdIn = 0;
    int qtdOut = 0;
    int num;
    for(int i = 0; i < n; i++){
        cin >> num;
        if(num >= 10 && num <= 20){
            qtdIn++;
        }else{
            qtdOut++;
        }
    }
    cout << qtdIn << " in" << endl << qtdOut << " out" << endl;
}
