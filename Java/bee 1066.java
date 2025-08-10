import java.util.Scanner;

public class Main {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);

        int qtdPares = 0;
        int qtdImpares = 0;
        int qtdPositivos = 0;
        int qtdNegativos = 0;

        for(int i = 0; i < 5; i++){
            int a =  sc.nextInt();
            if(a > 0){
                qtdPositivos++;
            }
            if(a < 0){
                qtdNegativos++;
            }
            if(a % 2 == 0){
                qtdPares++;
            }
            if(a % 2 != 0){
                qtdImpares++;
            }
        }
        System.out.printf("%d valor(es) par(es)\n", qtdPares);
        System.out.printf("%d valor(es) impar(es)\n", qtdImpares);
        System.out.printf("%d valor(es) positivo(s)\n", qtdPositivos);
        System.out.printf("%d valor(es) negativo(s)\n", qtdNegativos);
    }
}
