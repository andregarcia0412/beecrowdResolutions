import java.util.Scanner;

public class Main{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String str = sc.nextLine();
        if(str.length() > 140){
            System.out.println("MUTE");
        } else{
            System.out.println("TWEET");
        }
    }
}
