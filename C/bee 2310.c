#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    double tentativas[3] = {0,0,0};
    double acertos[3] = {0,0,0};
    
   for(int i = 0; i < n; i++){
       char nome[50];

       scanf("%s", nome);

        for(int j = 0; j < 3; j++){
           double num;
           scanf("%lf", &num);
           tentativas[j] += num;
        }

       for(int j = 0; j < 3; j++){
           double num;
           scanf("%lf", &num);
           acertos[j] += num;
       }
   } 
    printf("Pontos de Saque: %.2f %%.\nPontos de Bloqueio: %.2f %%.\nPontos de Ataque: %.2f %%.\n", (acertos[0]/tentativas[0]) * 100, (acertos[1]/tentativas[1]) * 100, (acertos[2]/tentativas[2]) * 100);
    
    return 0;
}
