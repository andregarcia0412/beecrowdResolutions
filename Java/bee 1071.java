import java.util.Scanner;

public class Main {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int a, b;
        a = sc.nextInt();
        b = sc.nextInt();

        if(b < a){
            int aux = a;
            a = b;
            b = aux;
        }

        int soma = 0;
        for(int i = a+1; i < b; i++){
            if(i % 2 != 0){
                soma += i;
            }
        }
        System.out.println(soma);
    }
}
