import java.util.Scanner;

public class Main{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        double a,b,c;
        a = sc.nextDouble();
        b = sc.nextDouble();
        c = sc.nextDouble();

        if(a < b + c && b < c + a && c < b + a){
            System.out.printf("Perimetro = %.1f\n", (a+b+c));
        } else{
            System.out.printf("Area = %.1f\n", ((a+b)*c)/2);
        }
    }
}
