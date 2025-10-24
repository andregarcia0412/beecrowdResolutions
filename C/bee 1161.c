#include <stdio.h>

long long fatorial(num){
    long long fator = 1;
    for(int i = 1; i <= num; i++){
        fator *= i;
    }

    return fator;
}

int main(void) {
    long a, b;

    while(scanf("%ld %ld", &a, &b) == 2){
        long long soma = fatorial(a) + fatorial(b);
        printf("%lld\n", soma);
    }

    return 0;
}
