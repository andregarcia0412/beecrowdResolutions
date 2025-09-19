import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int a,b;
        a = sc.nextInt();
        b = sc.nextInt();

        if(a < b){
            int aux = a;
            a = b;
            b = aux;
        }

        if(a % b == 0){
            System.out.println("Sao Multiplos");
        } else{
            System.out.println("Nao sao Multiplos");
        }
    }
}
