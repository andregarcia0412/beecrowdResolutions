import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        double n1, n2, n3, n4;
        n1 = sc.nextDouble();
        n2 = sc.nextDouble();
        n3 = sc.nextDouble();
        n4 = sc.nextDouble();

        double media = (n1 * 2 + n2 * 3 + n3 * 4 + n4 * 1)/10.0;
        media = Math.floor(media * 10)/10.0;
        System.out.printf("Media: %.1f\n", media);
        if(media >= 7){
            System.out.println("Aluno aprovado.");
        } else if(media < 5){
            System.out.println("Aluno reprovado.");
        } else{
            System.out.println("Aluno em exame.");
            double n5 = sc.nextDouble();
            double mediaFinal = (n5 + media)/2;
            System.out.printf("Nota do exame: %.1f\n", n5);
            if(mediaFinal >= 5){
                System.out.println("Aluno aprovado.");
            } else{
                System.out.println("Aluno reprovado.");
            }
            System.out.printf("Media final: %.1f\n", mediaFinal);

        }
    }
}
