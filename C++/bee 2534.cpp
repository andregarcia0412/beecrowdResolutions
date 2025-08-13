#include <iostream>
#include <iomanip>
#include <stdio.h>
#include <vector>

using namespace std;

void bubbleSort(int arr[], int n){
    for(int i = 0; i < n-1; i++){
        for(int j = 0; j < n-1; j++){
            if(arr[j] < arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main()
{
    int n, q;
    while(cin >> n >> q){
        int arr[n];
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }
        bubbleSort(arr, n);
        int p;
        for(int i = 0; i < q; i++){
            cin >> p;
        cout << arr[p-1] << endl;
        }
    }
}
