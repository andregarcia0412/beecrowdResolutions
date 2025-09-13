import java.util.Scanner;

public class Main{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int a = 1, b, c;
        while(true){
            a = sc.nextInt();
            if(a == 0){
                break;
            }
            b = sc.nextInt();
            c = sc.nextInt();

            int L = (int) Math.sqrt((a * b * 100) /c);
            System.out.println(L);
        }
    }
}
