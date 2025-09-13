#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {

    int t;
    scanf("%d", &t);
    for(int i = 0; i < t; i++) {
        double pa,pb,g1,g2;
        scanf("%lf %lf %lf %lf", &pa, &pb, &g1, &g2);
        int qtdAnos = 0;

        while(pa <= pb){
            pa = floor(pa * (g1/100) + pa);
            pb = floor(pb * (g2/100) + pb);
            qtdAnos++;
            if(qtdAnos > 100){
                printf("Mais de 1 seculo.\n");
                break;
            }
        }
        if(qtdAnos <= 100){
            printf("%d anos.\n", qtdAnos);
        }

    }

    return 0;

}


