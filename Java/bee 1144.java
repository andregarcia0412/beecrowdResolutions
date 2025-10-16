import java.util.Scanner;

public class Main{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt(), num = 1;
        for(int i = 1; i <= n; i++){
            System.out.printf("%d %d %d\n", num, (int) Math.pow(num, 2), (int) Math.pow(num, 3));
            System.out.printf("%d %d %d\n", num, (int) Math.pow(num, 2) + 1, (int) Math.pow(num, 3) + 1);
            num++;
        }
    }
}
