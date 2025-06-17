#include <stdio.h>
#include <iostream>
# include <cmath>
using namespace std;

int maiorABC(int a, int b, int c){
    int maiorAB = (a + b + abs(a-b))/2;
    int maiorABC = (maiorAB + c + abs(maiorAB - c))/2;
    return maiorABC;
}

int main(){
    int a;
    int b;
    int c;
    cin >> a >> b >> c;
    cout << maiorABC(a,b,c) << " eh o maior" << endl;

    return 0;
}
