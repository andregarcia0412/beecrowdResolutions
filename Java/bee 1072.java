import java.util.Scanner;

public class Main {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);

        int qtdIn = 0;
        int qtdOut = 0;

        int n = sc.nextInt();
        for(int i = 0; i < n; i++){
            int input = sc.nextInt();
            if(input >= 10 && input <= 20){
                qtdIn++;
            } else{
                qtdOut++;
            }
        }
        System.out.printf("%d in\n%d out\n",qtdIn, qtdOut);
    }
}
