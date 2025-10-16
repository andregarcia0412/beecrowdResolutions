import java.util.Scanner;

public class Main{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int qtd = sc.nextInt();
        int n = sc.nextInt();
        for(int i = 1; i <= n; i++){
            System.out.print(i);
            if(i % qtd == 0){
                System.out.println();
            } else{
                System.out.print(" ");
            }
        }
    }
}
