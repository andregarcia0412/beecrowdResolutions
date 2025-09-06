import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int cod1, num1, cod2, num2;
        double v1, v2;

        cod1 = sc.nextInt();
        num1 = sc.nextInt();
        v1 = sc.nextDouble();

        cod2 = sc.nextInt();
        num2 = sc.nextInt();
        v2 = sc.nextDouble();

        System.out.printf("VALOR A PAGAR: R$ %.2f\n", (num1 * v1 + num2 * v2));
    }
}
