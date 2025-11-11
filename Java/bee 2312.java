import java.util.Scanner;
import java.util.ArrayList;
import java.util.Collections;

public class Main{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        Quadro quadro = new Quadro();
        for(int i = 0; i < n; i++){
            quadro.addPais(new Pais(sc.next(), sc.nextInt(), sc.nextInt(), sc.nextInt()));
        }
        System.out.print(quadro);
    }
}
class Quadro {
    private ArrayList<Pais> paises = new ArrayList<Pais>();

    public ArrayList<Pais> getPaises() {
        return paises;
    }

    public void setPaises(ArrayList<Pais> paises) {
        this.paises = paises;
    }

    public void addPais(Pais p){
        paises.add(p);
    }

    @Override
    public String toString(){
        Collections.sort(paises);
        String str = "";
        for(Pais p : paises){
            str += String.format("%s %d %d %d\n", p.getNome(), p.getMedalhasOuro(), p.getMedalhasPrata(), p.getMedalhasBronze());
        }
        return str;
    }
}class Pais implements Comparable<Pais>{
    private String nome;
    private int medalhasOuro;
    private int medalhasPrata;
    private int medalhasBronze;

    public Pais(String nome, int medalhasOuro, int medalhasPrata, int medalhasBronze) {
        this.nome = nome;
        this.medalhasOuro = medalhasOuro;
        this.medalhasPrata = medalhasPrata;
        this.medalhasBronze = medalhasBronze;
    }

    public String getNome() {
        return nome;
    }

    public void setNome(String nome) {
        this.nome = nome;
    }

    public int getMedalhasOuro() {
        return medalhasOuro;
    }

    public void setMedalhasOuro(int medalhasOuro) {
        this.medalhasOuro = medalhasOuro;
    }

    public int getMedalhasPrata() {
        return medalhasPrata;
    }

    public void setMedalhasPrata(int medalhasPrata) {
        this.medalhasPrata = medalhasPrata;
    }

    public int getMedalhasBronze() {
        return medalhasBronze;
    }

    public void setMedalhasBronze(int medalhasBronze) {
        this.medalhasBronze = medalhasBronze;
    }

    @Override
    public int compareTo(Pais o) {
        int resultado = o.medalhasOuro - this.medalhasOuro;
        if(resultado == 0){
            resultado = o.medalhasPrata - this.medalhasPrata;
            if(resultado == 0){
                resultado = o.medalhasBronze - this.medalhasBronze;
                if(resultado == 0){
                    return this.nome.compareTo(o.nome);
                }
            }
        }
        return resultado;
    }
}
