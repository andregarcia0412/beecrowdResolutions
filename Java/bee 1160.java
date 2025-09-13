import java.util.Scanner;

public class Main{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int t = sc.nextInt();
        for(int i = 0; i < t; i++){
            double pa = sc.nextDouble();
            double pb = sc.nextDouble();
            double g1 = sc.nextDouble();
            double g2 = sc.nextDouble();
            int qtdAnos = 0;
            
            while(pa <= pb){
                pa = Math.floor(pa * (g1/100) + pa);
                pb = Math.floor(pb * (g2/100) + pb);
                qtdAnos++;
                if(qtdAnos > 100){
                    System.out.println("Mais de 1 seculo.");
                    break;
                }
            }
            if(qtdAnos <= 100){
                System.out.printf("%d anos.\n", qtdAnos);
            }
        }
    }
}
