import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        double A, B, C;
        A = sc.nextDouble() * 2;
        B = sc.nextDouble() * 3;
        C = sc.nextDouble() * 5;
        double MEDIA = (A + B + C)/10;

        System.out.printf("MEDIA = %.1f\n", MEDIA);
    }
}
