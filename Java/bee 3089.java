import java.util.ArrayList;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();

        while(n != 0){
            ArrayList<Integer> presentes = new ArrayList<>();
            ArrayList<Integer> precoPar = new ArrayList<>();
            for(int i = 0; i < 2 * n; i++){
                presentes.add(sc.nextInt());
            }

            int fim = presentes.size() - 1;
            for(int i = 0; i < n; i++){
                precoPar.add(presentes.get(i) + presentes.get(fim));
                fim--;
            }
            
            int maior = precoPar.get(0);
            int menor = precoPar.get(0);

            for(Integer preco : precoPar){
                if(preco > maior){
                    maior = preco;
                }

                if(preco < menor){
                    menor = preco;
                }
            }

            System.out.printf("%d %d\n", maior, menor);

            n = sc.nextInt();
        }
    }
}
