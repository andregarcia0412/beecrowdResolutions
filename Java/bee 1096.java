public class Main {
    public static void main(String[] args) {
        int i = 1;

        while(i <= 9){
            int j = 7;
            System.out.printf("I=%d J=%d\n", i, j);
           while(j > 5){
               j--;
               System.out.printf("I=%d J=%d\n", i, j);
           }
            i += 2;
        }
    }
}
