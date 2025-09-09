import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int cod, quant;
        double preco = 0;
        cod = sc.nextInt();
        quant = sc.nextInt();

        switch (cod){
            case 1:
                preco = 4.0;
                break;
            case 2:
                preco = 4.5;
                break;
            case 3:
                preco = 5.0;
                break;
            case 4:
                preco = 2.0;
                break;
            case 5:
                preco = 1.5;
                break;
            default:
                break;
        }
        System.out.printf("Total: R$ %.2f\n", preco*quant);
    }
}
