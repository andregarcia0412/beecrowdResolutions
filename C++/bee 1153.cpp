#include <iostream>
#include <iomanip>
#include <stdio.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int resultado = 1;
    for(int i = 1; i <= n; i++){
        resultado *= i;
    }
    cout << resultado << endl;
}
