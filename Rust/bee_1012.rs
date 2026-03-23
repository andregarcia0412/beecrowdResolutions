use std::io::{self, Read};

fn main() {
    let mut input = String::new();
    io::stdin().read_to_string(&mut input).unwrap();

    let valores: Vec<f64> = input
        .split_whitespace()
        .map(|x| x.parse().unwrap())
        .collect();

    let pi = 3.14159;

    let a = valores[0];
    let b = valores[1];
    let c = valores[2];

    let area_triangulo = (a * c) / 2.0;
    let area_circulo = pi * c.powf(2.0);
    let area_trapezio = ((a + b) * c) / 2.0;
    let area_quadrado = b.powf(2.0);
    let area_retangulo = a * b;

    println!("TRIANGULO: {:.3}", area_triangulo);
    println!("CIRCULO: {:.3}", area_circulo);
    println!("TRAPEZIO: {:.3}", area_trapezio);
    println!("QUADRADO: {:.3}", area_quadrado);
    println!("RETANGULO: {:.3}", area_retangulo);
}
