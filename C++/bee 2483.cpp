#include <iostream>
#include <iomanip>
#include <stdio.h>
#include <vector>

using namespace std;

int main()
{
    int I;
    cin >> I;
    string palavra = "Feliz nat";
    for(int i = 0; i < I; i++){
        palavra += "a";
    }
    cout << palavra << "l!" << endl;
    return 0;
}
