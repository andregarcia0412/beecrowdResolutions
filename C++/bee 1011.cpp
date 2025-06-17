#include <stdio.h>
#include <iostream>
# include <cmath>
using namespace std;


double volumeEsfera(double r){
    double pi = 3.14159;
    return (4.0/3) * pi * pow(r,3);
}

int main(){
    double r;
    cin >> r;
    printf("VOLUME = %0.3lf\n", volumeEsfera(r));

    return 0;
}
