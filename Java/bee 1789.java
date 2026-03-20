import java.util.Scanner;

public class Main{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        while(sc.hasNext()) {
            int n = sc.nextInt();

            int[] velocidades = new int[n];
            for(int i = 0; i < n; i++) {
                velocidades[i] = sc.nextInt();
            }

            System.out.println(classificarNivel(getMaior(velocidades)));

        }
    }

    private static int getMaior(int[] arr) {
        int maior = arr[0];

        for(int i = 0; i < arr.length; i++) {
            if(arr[i] > maior) {
                maior = arr[i];
            }
        }

        return maior;
    }

    private static int classificarNivel(int n) {
        if(n < 10) {
            return 1;
        } else if(n < 20) {
            return 2;
        } else {
            return 3;
        }
    }
}
