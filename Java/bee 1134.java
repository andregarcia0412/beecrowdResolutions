import java.util.Scanner;

public class Main {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);

        int qtdAlcool = 0;
        int qtdGasolina = 0;
        int qtdDiesel = 0;
        int input = 0;
        while(input != 4){
            input = sc.nextInt();
            switch (input){
                case 1:
                    qtdAlcool++;
                    break;
                case 2:
                    qtdGasolina++;
                    break;
                case 3:
                    qtdDiesel++;
            }
        }

        System.out.printf("MUITO OBRIGADO\nAlcool: %d\nGasolina: %d\nDiesel: %d\n", qtdAlcool, qtdGasolina, qtdDiesel);
    }
}
