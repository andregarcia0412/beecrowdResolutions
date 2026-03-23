use std::io::{self, Read};

fn main() {
    let mut input = String::new();
    io::stdin().read_to_string(&mut input).unwrap();

    let valores: Vec<f64> = input
        .split_whitespace()
        .map(|x| x.parse().unwrap())
        .collect();

    let x1 = valores[0];
    let y1 = valores[1];
    let x2 = valores[2];
    let y2 = valores[3];

    let distancia = ((x2 - x1).powf(2.0) + (y2 - y1).powf(2.0)).sqrt();

    println!("{:.4}", distancia);
}
