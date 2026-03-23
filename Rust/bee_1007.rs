use std::io::{self, Read};

fn main() {
    let mut input = String::new();
    io::stdin().read_to_string(&mut input).unwrap();

    let numeros: Vec<i32> = input
        .split_whitespace()
        .map(|x| x.parse().unwrap())
        .collect();

    let a = numeros[0];
    let b = numeros[1];
    let c = numeros[2];
    let d = numeros[3];

    println!("DIFERENCA = {}", (a * b - c * d));
}
