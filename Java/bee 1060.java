import java.util.Scanner;

public class Main{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int qtdPositivos = 0;
        for(int i = 0; i < 6; i++){
            if(sc.nextDouble() > 0){
                qtdPositivos++;
            }
        }
        System.out.println(qtdPositivos + " valores positivos");
    }
}
