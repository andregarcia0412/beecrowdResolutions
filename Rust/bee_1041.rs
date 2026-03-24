use std::io::{self, Read};

fn main() {
    let mut input = String::new();
    io::stdin().read_to_string(&mut input).unwrap();

    let valores: Vec<f64> = input
        .split_whitespace()
        .map(|x| x.parse().unwrap())
        .collect();

    let x = valores[0];
    let y = valores[1];

    if x != 0.0 && y == 0.0 {
        println!("Eixo X");
    } else if x == 0.0 && y != 0.0 {
        println!("Eixo Y");
    } else if x > 0.0 && y > 0.0 {
        println!("Q1");
    } else if x < 0.0 && y > 0.0 {
        println!("Q2");
    } else if x < 0.0 && y < 0.0 {
        println!("Q3");
    } else if x > 0.0 && y < 0.0 {
        println!("Q4");
    } else {
        println!("Origem");
    }
}
