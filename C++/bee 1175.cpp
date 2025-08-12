#include <iostream>
#include <iomanip>
#include <stdio.h>

using namespace std;

int main()
{
    int arr[20];
    int n;
    for(int i = 0; i < 20; i++){
        cin >> n;
        arr[i] = n;
    }
    for(int i = 0; i < 10; i++){
        int aux = arr[i];
        arr[i] = arr[19 - i];
        arr[19 - i] = aux;
    }
    for(int i = 0; i < 20; i++){
        cout << "N" << "[" << i << "] = " << arr[i] << endl;
    }
}
