#include <stdio.h>
 
int main() {
    int qtdPares = 0;
    for(int i = 0; i < 5; i++) {
        int n;
        scanf("%d", &n);
        
        if(n % 2 == 0) {
            qtdPares++;
        }
    }
    
    printf("%d valores pares\n", qtdPares);
    
    return 0;
}
