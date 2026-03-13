import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int paH, cbH, pbH, caH, paM, cbM, pbM, caM;

        String[] t1 = sc.next().split(":");
        String[] t2 = sc.next().split(":");
        String[] t3 = sc.next().split(":");
        String[] t4 = sc.next().split(":");

        paH = Integer.parseInt(t1[0]);
        paM = Integer.parseInt(t1[1]);
        cbH = Integer.parseInt(t2[0]);
        cbM = Integer.parseInt(t2[1]);
        pbH = Integer.parseInt(t3[0]);
        pbM = Integer.parseInt(t3[1]);
        caH = Integer.parseInt(t4[0]);
        caM = Integer.parseInt(t4[1]);

        int pa = paH*60 + paM;
        int cb = cbH*60 + cbM;
        int pb = pbH*60 + pbM;
        int ca = caH*60 + caM;

        int vooA = (cb - pa + 1440) % 1440;
        int vooB = (ca - pb + 1440) % 1440;

        int duracao = (((vooA + vooB)) % 1440)/2;

        int fusoMinutos = vooA - duracao;

        if(fusoMinutos <= -720) {
            fusoMinutos += 1440;
        } else if(fusoMinutos > 720) {
            fusoMinutos -= 1440;
        }

        System.out.printf("%d %d\n", duracao, fusoMinutos/60);
    }
}
