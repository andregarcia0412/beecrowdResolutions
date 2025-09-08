#include <math.h>
#include <stdio.h>

int main(void) {

    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    int maiorAB = (a+b + abs(a-b))/2;
    int maiorABC = (c+maiorAB + abs(c-maiorAB))/2;
    printf("%d eh o maior\n", maiorABC);

    return 0;
}
