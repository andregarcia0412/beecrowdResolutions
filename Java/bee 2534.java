import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n, q;
        while(sc.hasNextInt()){
            n = sc.nextInt();
            q = sc.nextInt();
            int[] arrNotas = new int[n];
            for(int i = 0; i < n; i++){
                arrNotas[i] = sc.nextInt();
            }
           bubbleSort(arrNotas);
            for(int i = 0; i < q; i++){
                int p = sc.nextInt();
                System.out.println(arrNotas[p-1]);
            }
        }
    }

    public static void bubbleSort(int[] arr){
        for(int i = 0; i < arr.length-1; i++){
            for(int j = 0; j < arr.length-1; j++){
                if(arr[j] < arr[j+1]){
                    int aux = arr[j];
                    arr[j] = arr[j+1];
                    arr[j+1] = aux;
                }
            }
        };
    }
}
