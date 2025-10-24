import java.util.Scanner;

public class Main{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        while(sc.hasNextLong()){
            long a = sc.nextLong(), b = sc.nextLong();
            System.out.println(fatorial(a) + fatorial(b));
        }
    }

    public static long fatorial(long num){
        long resultado = 1;
        for(int i = 1; i <= num; i++){
            resultado *= i;
        }
        return resultado;
    }
}
