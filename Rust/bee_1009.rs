use std::io::{self, Read};

fn main() {
    let mut input = String::new();
    io::stdin().read_to_string(&mut input).unwrap();

    let valores: Vec<&str> = input.split_whitespace().collect();

    let _nome = valores[0];
    let salario_fixo: f64 = valores[1].parse().unwrap();
    let total_vendas: f64 = valores[2].parse().unwrap();

    let total = salario_fixo + total_vendas * 0.15;

    println!("TOTAL = R$ {:.2}", total);
}
