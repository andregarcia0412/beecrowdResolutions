use std::io::{self, Read};

fn main() {
    let mut input = String::new();
    io::stdin().read_to_string(&mut input).unwrap();

    let valores: Vec<i32> = input
        .split_whitespace()
        .map(|x| x.parse().unwrap())
        .collect();

    let a = valores[0];
    let b = valores[1];
    let c = valores[2];
    let d = valores[3];

    if b > c && d > a && c + d > a + b && c > 0 && d > 0 && a % 2 == 0 {
        println!("Valores aceitos");
    } else {
        println!("Valores nao aceitos");
    }
}
