#include <iostream>
#include <iomanip>
#include <stdio.h>

using namespace std;

int main()
{
    int num1 = 0;
    int num2 = 1;
    int soma = 0;
    int n;
    cin >> n;
    string str = "0";
    for(int i = 0; i < n-1; i++){
        str += " " + to_string(num2);
        soma = num1 + num2;
        num1 = num2;
        num2 = soma;
    }
    cout << str << endl;
}
