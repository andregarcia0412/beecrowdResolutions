use std::io::{self, Read};

fn main() {
    let mut input = String::new();
    io::stdin().read_to_string(&mut input).unwrap();

    let numeros: Vec<f64> = input
        .split_whitespace()
        .map(|x| x.parse().unwrap())
        .collect();

    let media: f64 = (numeros[0] * 2.0 + numeros[1] * 3.0 + numeros[2] * 5.0) / 10.0;

    println!("MEDIA = {:.1}", media);
}
