import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int a, b, c;
        a = sc.nextInt();
        b = sc.nextInt();
        c = sc.nextInt();

        int[] arr = new int[]{a,b,c};
        arr = bubbleSort(arr);
        System.out.println(arr[0] + "\n" + arr[1] + "\n" + arr[2] + "\n");
        System.out.println(a + "\n" + b + "\n" + c);

    }

    public static int[] bubbleSort(int[] arr){
        for(int i = 0; i < arr.length - 1; i++){
            for(int j = 0; j < arr.length - 1; j++){
                if(arr[j] > arr[j+1]) {
                    int aux = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = aux;
                }
            }
        }
        return arr;
    }
}
