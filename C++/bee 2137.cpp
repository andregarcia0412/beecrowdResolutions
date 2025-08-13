#include <iostream>
#include <iomanip>
#include <stdio.h>
#include <vector>

using namespace std;

void bubbleSort(string arr[], int n){
    for(int i = 0; i < n-1; i++){
        for(int j = 0; j < n-1; j++){
            if(arr[j] > arr[j+1]){
                string temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main()
{
    int n;
    while(cin >> n){
        string arr[n];
        for(int i = 0; i < n; i++){
            string input;
            cin >> input;
            arr[i] = input;
        }
        bubbleSort(arr, n);
        for(int i = 0; i < n; i++){
            cout << arr[i] << endl;
        }
    }
}
