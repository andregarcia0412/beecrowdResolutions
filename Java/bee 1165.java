import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();

        for(int i = 0; i < n; i++){
            int input = sc.nextInt();
            int qtdDivisores = 0;
            for(int j = 1; j <= input; j++){
                if(input % j == 0){
                    qtdDivisores++;
                }
            }
            if(qtdDivisores == 2){
                System.out.println(input + " eh primo");
            } else{
                System.out.println(input + " nao eh primo");
            }
        }
    }
}
