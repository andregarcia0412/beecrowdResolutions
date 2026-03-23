use std::io::{self, Read};

fn main() {
    let mut input = String::new();
    io::stdin().read_to_string(&mut input).unwrap();

    let numeros: Vec<f64> = input
        .split_whitespace()
        .map(|x| x.parse().unwrap())
        .collect();

    let media: f64 = (numeros[0] * 3.5 + numeros[1] * 7.5) / 11.0;

    println!("MEDIA = {:.5}", media);
}
