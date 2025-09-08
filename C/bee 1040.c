#include <stdio.h>

int main(void) {

    double n1, n2, n3, n4;
    scanf("%lf %lf %lf %lf", &n1, &n2, &n3, &n4);
    double media = (n1 * 2 + n2 * 3 + n3 * 4 + n4)/10;
    printf("Media: %.1lf\n", media);

    if (media >= 7) {
        printf("Aluno aprovado.\n");
    } else if (media < 5) {
        printf("Aluno reprovado.\n");
    } else {
        double n5;
        scanf("%lf", &n5);
        printf("Aluno em exame.\n");
        printf("Nota do exame: %.1lf\n", n5);
        double mediaFinal = (n5 + media)/2;
        if (mediaFinal >= 5) {
            printf("Aluno aprovado.\n");
        } else {
            printf("Aluno reprovado.\n");
        }
        printf("Media final: %.1lf\n", mediaFinal);

    }


    return 0;
}
