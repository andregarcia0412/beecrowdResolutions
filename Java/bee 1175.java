import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int x[] = new int[20];

        for(int i = 0; i < 20; i++){
            x[i] = sc.nextInt();
        }
        for(int i = 0; i < 10; i++){
            int aux = x[i];
            x[i] = x[x.length - 1 - i];
            x[x.length - 1 - i] = aux;
        }
        for(int i = 0; i < 20; i++){
            System.out.printf("N[%d] = %d\n", i, x[i]);
        }

    }
}
