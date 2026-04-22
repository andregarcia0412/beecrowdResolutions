use std::io::{self, Read};

fn main() {
    let mut input = String::new();
    io::stdin().read_to_string(&mut input).unwrap();
    
    let valores: Vec<i32> = input
        .split_whitespace()
        .map(|x| x.parse().unwrap())
        .collect();

    let mut qtd_pares = 0;
    let mut qtd_impares = 0;
    let mut qtd_positivos = 0;
    let mut qtd_negativos = 0;
    for i in 0..5 {
        if valores[i] % 2 == 0 {
            qtd_pares += 1;
        } else {
            qtd_impares += 1;
        }

        if valores[i] > 0 {
            qtd_positivos += 1;
        } else if valores[i] < 0{
            qtd_negativos += 1;
        }
    }

    println!("{} valor(es) par(es)\n{} valor(es) impar(es)\n{} valor(es) positivo(s)\n{} valor(es) negativo(s)", qtd_pares, qtd_impares, qtd_positivos, qtd_negativos);
}
