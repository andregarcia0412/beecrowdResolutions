import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int qtd = 0;
        for(int i = 0; i < 5; i++){
            if(sc.nextInt() % 2 == 0){
                qtd++;
            }
        }
        System.out.printf("%d valores pares\n", qtd);
    }
}
