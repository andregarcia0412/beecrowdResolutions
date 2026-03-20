#include <stdio.h>
#include <string.h>

int main() {

    int n;
    scanf("%d", &n);

    for(int i = 0; i < n; i++) {
        char palavra[10000];
        scanf("%s", palavra);
        
        printf("%.2f\n", strlen(palavra)/100.0);
    }

    return 0;
}
