#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    unsigned int matricula;
    float nota;
    unsigned int matriculaMaiorNota;
    float maiorNota = 0;

    for (int i = 0; i < n; i++)
    {
        scanf("%d %f", &matricula, &nota);

        if (nota > maiorNota)
        {
            matriculaMaiorNota = matricula;
            maiorNota = nota;
        }
    }

    if (maiorNota >= 8)
    {
        printf("%d\n", matriculaMaiorNota);
    }
    else
    {
        printf("Minimum note not reached\n");
    }

    return 0;
}