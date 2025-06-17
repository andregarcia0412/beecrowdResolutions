#include <stdio.h>
#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
using namespace std;

int main(){
    double x1;
    double y1;
    double x2;
    double y2;

    cin >> x1 >> y1 >> x2 >> y2;
    double distancia = sqrt(pow((x2 - x1),2) + pow((y2 - y1),2));
    cout << fixed << setprecision(4) << distancia << endl;
    
    return 0;
}
