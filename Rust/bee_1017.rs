use std::io::{self, Read};

fn main() {
    let mut input = String::new();
    io::stdin().read_to_string(&mut input).unwrap();

    let numeros: Vec<i32> = input
        .split_whitespace()
        .map(|x| x.parse().unwrap())
        .collect();

    let distancia_total: f64 = (numeros[0] * numeros[1]) as f64;
    println!("{:.3}", distancia_total / 12.0);
}
