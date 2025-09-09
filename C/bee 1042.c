#include <math.h>
#include <stdio.h>

void bubbleSort(int arr[], int length) {
   for (int i = 0; i < length-1; i++) {
       for (int j = 0; j < length-1; j++) {
           if (arr[j] > arr[j+1]) {
               int aux = arr[j];
               arr[j] = arr[j+1];
               arr[j+1] = aux;
           }
       }
   }
}

int main() {

    int a,b,c;
    scanf("%d %d %d", &a, &b, &c);

    int arr[] = {a,b,c};
    bubbleSort(arr,3);

    printf("%d\n%d\n%d\n\n", arr[0], arr[1], arr[2]);
    printf("%d\n%d\n%d\n", a, b, c);

    return 0;
}

