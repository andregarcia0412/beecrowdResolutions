import java.util.*;
import java.lang.*;
import java.io.*;

class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = Integer.parseInt(sc.nextLine());

        for(int i = 0; i < n; i++) {
            int a = sc.nextInt();
            int b = sc.nextInt();
            sc.nextLine();
            System.out.println(calcularMdc(a, b));
        }
    }

    public static int calcularMdc(int a, int b) {
        if(b == 0) {
            return a;
        }

        return calcularMdc(b, a%b);
    } 
}
