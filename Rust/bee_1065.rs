use std::io::{self, Read};

fn main() {
    let mut input = String::new();
    io::stdin().read_to_string(&mut input).unwrap();
    
    let valores: Vec<i32> = input
        .split_whitespace()
        .map(|x| x.parse().unwrap())
        .collect();

    let mut qtd_pares = 0;
    for i in 0..5 {
        if valores[i] % 2 == 0 {
            qtd_pares += 1;
        }
    }

    println!("{} valores pares", qtd_pares);
}
