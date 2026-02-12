#include <stdio.h>

long fat(long n, long acc) {
    if(n == 0) {
        return acc;
    }

    return fat(n-1, n*acc);
}

int main()
{
    long a, b;
    while(scanf("%ld %ld", &a, &b) == 2) {
        long sum = fat(a, 1) + fat(b, 1);
        printf("%ld\n", sum);
    }
    return 0;
}
