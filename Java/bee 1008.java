import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int num, horasTrabalhadas;
        num = sc.nextInt();
        horasTrabalhadas =sc.nextInt();
        double valorHora;
        valorHora = sc.nextDouble();

        System.out.printf("NUMBER = %d\nSALARY = U$ %.2f\n", num, (valorHora * horasTrabalhadas));
    }
}
