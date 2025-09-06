import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String nome;
        double salario;
        double vendas;
        //comissao de 15%

        nome = sc.next();
        salario = sc.nextDouble();
        vendas = sc.nextDouble();

        System.out.printf("TOTAL = R$ %.2f\n", salario + vendas * 0.15);
    }
}
