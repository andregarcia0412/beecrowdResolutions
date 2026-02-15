import java.util.*;
import java.lang.*;
import java.io.*;

class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();

        for(int i = 0; i < n; i++) {
            int a = sc.nextInt();
            System.out.printf("fib(%d) = %d calls = %d\n", a, calularChamadas(a)-1, fib(a));
        }
    }

    public static int fib(int n) {
        if(n == 0) {
            return 0;
        }

        if(n == 1) {
            return 1;
        }

        return fib(n-1) + fib(n-2);
    }

    public static int calularChamadas(int n) {
        if(n == 0) {
            return 1;
        }

        if(n == 1) {
            return 1;
        }

        return calularChamadas(n - 1) + calularChamadas(n - 2) + 1;
    }


}
