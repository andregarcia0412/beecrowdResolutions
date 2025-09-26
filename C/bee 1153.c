#include <stdio.h>
 
int main() {
 
    int n;
    scanf("%d", &n);
    int fator = 1;
    for(int i = 1; i <= n; i++){
        fator *= i;
    }
    
    printf("%d\n", fator);
 
    return 0;
}
