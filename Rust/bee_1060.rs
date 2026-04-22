use std::io::{self, Read};

fn main() {
    let mut input = String::new();
    io::stdin().read_to_string(&mut input).unwrap();
    
    let valores: Vec<f64> = input
        .split_whitespace()
        .map(|x| x.parse().unwrap())
        .collect();

    let mut qtd_positivos = 0;
    for i in 0..6 {
        if valores[i] > 0.0 {
            qtd_positivos += 1;
        }
    }

    println!("{} valores positivos", qtd_positivos);
}
