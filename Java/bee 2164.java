import java.util.*;
import java.lang.*;
import java.io.*;


public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.printf("%.1f\n", fibonacci(sc.nextInt()));
    }

    public static double fibonacci(int n){
        return (Math.pow((1 + Math.sqrt(5))/2, n) - Math.pow((1 - Math.sqrt(5))/2, n)) / Math.sqrt(5);
    }
}
