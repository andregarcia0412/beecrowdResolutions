import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        double A, B;
        A = sc.nextDouble() * 3.5;
        B = sc.nextDouble() * 7.5;
        double MEDIA = (A + B)/11;

        System.out.printf("MEDIA = %.5f\n", MEDIA);
    }
}
