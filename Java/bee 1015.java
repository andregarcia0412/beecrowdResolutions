import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        double x1, y1, x2, y2;
        x1 = sc.nextDouble();
        y1 = sc.nextDouble();
        x2 = sc.nextDouble();
        y2 = sc.nextDouble();

        System.out.printf("%.4f\n", Math.sqrt(Math.pow(x1-x2,2) + Math.pow(y1-y2,2)));
    }
}
