import java.util.Scanner;

public class Main{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        if(sc.next().length() >= 10){
            System.out.println("palavrao");
        } else{
            System.out.println("palavrinha");
        }
    }
}
