#include <stdio.h>

int main() {
    int n;
    while(scanf("%d", &n) != EOF) {
        int velocidades[n];
        int maior = 0;
        
        for(int i = 0; i < n; i++) {
            int v;
            scanf("%d", &v);

            if(v > maior) {
                maior = v;
            }
            
            velocidades[i] = v; 
        }

        if(maior < 10) {
            printf("1\n");
        } else if(maior < 20) {
            printf("2\n");
        } else if(maior >= 20) {
            printf("3\n");
        }
    }
    
    return 0;
}
