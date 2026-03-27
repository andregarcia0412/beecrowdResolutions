#include <stdio.h>
#include <math.h>

int main() {
    int n;
    while(scanf("%d", &n) != EOF) {
        int resultado = log(n) / log(2);
        printf("%d\n", resultado);
    }
    
    return 0;
}
