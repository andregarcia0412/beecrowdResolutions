import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int A, B;
        A = sc.nextInt();
        B = sc.nextInt();
        int PROD = A*B;

        System.out.printf("PROD = %d\n", PROD);
    }
}
