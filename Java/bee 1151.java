import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int num1 = 0;
        int num2 = 1;
        int soma = 0;
        String str = Integer.toString(num1);
        int n = sc.nextInt();
        for(int i = 1; i < n; i++){
            str += " " + Integer.toString(num2);
            soma = num1 + num2;
            num1 = num2;
            num2 = soma;
        }
        System.out.println(str);
    }
}
