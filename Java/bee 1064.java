import java.util.Scanner;

public class Main {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);

        double media = 0;
        int qtdValores = 0;
        for(int i = 0; i < 6; i++){
            double input = sc.nextFloat();
            if(input > 0){
                qtdValores++;
                media += input;
            }
        }
        System.out.printf("%d valores positivos\n", qtdValores);
        System.out.printf("%.1f\n", media/qtdValores);
    }
}
