import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        for(int i = 0; i < t; i++) {
            int n = sc.nextInt();
            System.out.printf("Fib(%d) = %d\n", n, fib(n));
        }
    }
    public static long fib(int n) {
        if(n == 0 || n == 1) {
            return n;
        }

        long soma = 0;
        long a = 0;
        long b = 1;
        for(int i = 2; i <= n; i++) {
            soma = a + b;
            a = b;
            b = soma;
        }

        return soma;
    }
}
