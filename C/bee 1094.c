#include <stdio.h>

int main()
{

    int n;
    scanf("%d", &n);
    long totalCobaias = 0, totalCoelhos = 0, totalRatos = 0, totalSapos = 0;

    for (int i = 0; i < n; i++)
    {
        long qtd;
        char animal;

        scanf("%ld %c", &qtd, &animal);
        switch (animal)
        {
        case 'C':
            totalCoelhos += qtd;
            break;
        case 'R':
            totalRatos += qtd;
            break;
        case 'S':
            totalSapos += qtd;
            break;
        }

        totalCobaias += qtd;
    }

    printf("Total: %ld cobaias\n", totalCobaias);
    printf("Total de coelhos: %ld\nTotal de ratos: %ld\nTotal de sapos: %ld\n", totalCoelhos, totalRatos, totalSapos);

    float percentualCoelhos = ((double)totalCoelhos / totalCobaias) * 100;
    float percentualRatos = ((double)totalRatos / totalCobaias) * 100;
    float percentualSapos = ((double)totalSapos / totalCobaias) * 100;

    printf("Percentual de coelhos: %.2lf %%\n", percentualCoelhos);
    printf("Percentual de ratos: %.2lf %%\n", percentualRatos);
    printf("Percentual de sapos: %.2lf %%\n", percentualSapos);

    return 0;
}