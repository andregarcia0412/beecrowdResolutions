use std::io::{self, Read};

fn main() {
    let mut input = String::new();
    io::stdin().read_to_string(&mut input).unwrap();

    let valores: Vec<f64> = input
        .split_whitespace()
        .map(|x| x.parse().unwrap())
        .collect();

    let _cod1 = valores[0];
    let num1 = valores[1];
    let valor1 = valores[2];

    let _cod2 = valores[3];
    let num2 = valores[4];
    let valor2 = valores[5];

    println!("VALOR A PAGAR: R$ {:.2}", (num1 * valor1 + num2 * valor2));
}
