import java.util.*;
import java.lang.*;
import java.io.*;

class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int a = sc.nextInt();
        int b = sc.nextInt();
        System.out.println(maior(a,b));
    }
    public static int maior(int a, int b) {
        if(a > b) {
            return a;
        }

        return b;
    }
}
