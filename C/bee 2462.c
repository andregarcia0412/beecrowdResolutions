#include <stdio.h>
int main() {
    int paH, cbH, pbH, caH, paM, cbM, pbM, caM;

    scanf("%d:%d %d:%d %d:%d %d:%d", &paH, &paM, &cbH, &cbM, &pbH, &pbM, &caH, &caM);

    int pa = paH*60 + paM;
    int cb = cbH*60 + cbM;
    int pb = pbH*60 + pbM;
    int ca = caH*60 + caM;

    int vooA = (cb - pa + 1440) % 1440;
    int vooB = (ca - pb + 1440) % 1440;

    int duracao = ((vooA + vooB) % 1440)/2;

    int fusoMinutos = vooA - duracao;

    if(fusoMinutos <= -720) {
        fusoMinutos += 1440;
    } else if(fusoMinutos > 720) {
        fusoMinutos -= 1440;
    }

    printf("%d %d\n", duracao, fusoMinutos/60);

    
    return 0;
}
