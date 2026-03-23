use std::io::{self, Read};

fn main() {
    let pi: f64 = 3.14159;
    let mut input = String::new();
    io::stdin().read_to_string(&mut input).unwrap();

    let numeros: Vec<f64> = input
        .split_whitespace()
        .map(|x| x.parse().unwrap())
        .collect();

    let area: f64 = pi * numeros[0].powf(2.0);

    println!("A={:.4}", area);
}
