import java.util.Scanner;

public class Main{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        while(!sc.next().equals("2002")){
            System.out.println("Senha Invalida");
        }
        System.out.println("Acesso Permitido");
    }
}
