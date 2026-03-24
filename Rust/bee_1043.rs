use std::io::{self, Read};

fn main() {
    let mut input = String::new();
    io::stdin().read_to_string(&mut input).unwrap();

    let valores: Vec<f64> = input
        .split_whitespace()
        .map(|x| x.parse().unwrap())
        .collect();

    let a = valores[0];
    let b = valores[1];
    let c = valores[2];

    if a + b > c && a + c > b && b + c > a {
        println!("Perimetro = {:.1}", (a + b + c));
    } else {
        println!("Area = {:.1}", ((a + b) * c) / 2.0);
    }
}
